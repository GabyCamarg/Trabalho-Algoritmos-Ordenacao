
#include <iostream>
#include <vector>
using namespace std;

int comparacoes = 0;
int movimentacoes = 0;

void merge(vector<int>& vetor, int inicio, int meio, int fim) {
    vector<int> esquerda;
    vector<int> direita;

    for (int i = inicio; i <= meio; i++) {
        esquerda.push_back(vetor[i]);
    }

    for (int i = meio + 1; i <= fim; i++) {
        direita.push_back(vetor[i]);
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while (i < esquerda.size() && j < direita.size()) {
        comparacoes++;

        if (esquerda[i] <= direita[j]) {
            vetor[k] = esquerda[i];
            i++;
        } else {
            vetor[k] = direita[j];
            j++;
        }

        movimentacoes++;
        k++;
    }

    while (i < esquerda.size()) {
        vetor[k] = esquerda[i];
        i++;
        k++;
        movimentacoes++;
    }

    while (j < direita.size()) {
        vetor[k] = direita[j];
        j++;
        k++;
        movimentacoes++;
    }
}

void mergeSort(vector<int>& vetor, int inicio, int fim) {

    if (inicio < fim) {
        int meio = (inicio + fim) / 2;

        mergeSort(vetor, inicio, meio);

        mergeSort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

int main() {
    vector<int> vetor = {5, 3, 8, 1};

    cout << "Vetor original: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    mergeSort(vetor, 0, vetor.size() - 1);

    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Movimentacoes: " << movimentacoes << endl;

    cout << "Vetor ordenado: ";
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0;
}
