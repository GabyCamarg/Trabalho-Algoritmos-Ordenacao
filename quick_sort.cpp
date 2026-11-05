
#include <iostream>
#include <vector>
using namespace std;

int comparacoes = 0;
int trocas = 0;

void quickSort(vector<int>& vetor, int inicio, int fim) {
    int i = inicio;
    int j = fim;
    int pivo = vetor[fim];

    for (int k = inicio; k < fim; k++) {
        comparacoes++;

        if (vetor[k] <= pivo) {
            if (i != k) {
                int aux = vetor[i];
                vetor[i] = vetor[k];
                vetor[k] = aux;
                trocas++;
            }
            i++;
        }
    }

    if (i != fim) {
        int aux = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = aux;
        trocas++;
    }

    if (inicio < i - 1) {
        quickSort(vetor, inicio, i - 1);
    }

    if (i + 1 < fim) {
        quickSort(vetor, i + 1, fim);
    }
}

int main() {
    vector<int> vetor = {5, 3, 8, 1};

    cout << "Vetor original: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    quickSort(vetor, 0, vetor.size() - 1);

    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Trocas: " << trocas << endl;

    cout << "Vetor ordenado: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
