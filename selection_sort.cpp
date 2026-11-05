
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& vetor) {
    int tamanho = vetor.size();
    int comparacoes = 0;
    int trocas = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < tamanho; j++) {
            comparacoes++;

            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;

            trocas++;
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

    selectionSort(vetor);

    cout << "Vetor ordenado: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
