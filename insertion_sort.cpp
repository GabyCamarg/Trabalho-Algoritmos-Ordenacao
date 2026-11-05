
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& vetor) {
    int tamanho = vetor.size();
    int comparacoes = 0;
    int movimentacoes = 0;

    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0) {
            comparacoes++;

            if (vetor[j] > chave) {
                vetor[j + 1] = vetor[j];
                movimentacoes++;
                j--;
            } else {
                break;
            }
        }

        vetor[j + 1] = chave;
    }

    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Movimentacoes: " << movimentacoes << endl;
}

int main() {
    vector<int> vetor = {5, 3, 8, 1};

    cout << "Vetor original: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    insertionSort(vetor);

    cout << "Vetor ordenado: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
