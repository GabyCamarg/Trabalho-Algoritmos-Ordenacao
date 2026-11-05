#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& vetor) {
    int tamanho = vetor.size();
    int comparacoes = 0;
    int trocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {

            comparacoes++;

            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;

                trocas++;
            }
        }
    }

    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Trocas: " << trocas << endl;
}

int main() {
    vector<int> vetor = {5, 3, 8, 1};

    cout << "Vetor original: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    bubbleSort(vetor);

    cout << "Vetor ordenado: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
