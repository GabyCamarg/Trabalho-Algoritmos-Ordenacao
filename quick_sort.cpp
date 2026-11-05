
#include <iostream> // Biblioteca para entrada e saída
#include <vector> // Biblioteca para utilizar vetores
using namespace std;

int comparacoes = 0; // Conta as comparações
int trocas = 0; // Conta as trocas realizadas

// Função que organiza o vetor utilizando Quick Sort
void quickSort(vector<int>& vetor, int inicio, int fim) {
    int i = inicio; // Define a posição inicial
    int pivo = vetor[fim]; // Escolhe o último elemento como pivô

    // Percorre os elementos antes do pivô
    for (int k = inicio; k < fim; k++) {
        comparacoes++; // Conta uma comparação

        // Verifica se o elemento é menor ou igual ao pivô
        if (vetor[k] <= pivo) {

            // Verifica se os elementos estão em posições diferentes
            if (i != k) {
                int aux = vetor[i]; // Guarda o valor atual
                vetor[i] = vetor[k]; // Troca os elementos
                vetor[k] = aux; // Coloca o valor guardado na outra posição

                trocas++; // Conta uma troca
            }

            i++; // Avança a posição do menor elemento
        }
    }

    // Coloca o pivô na posição correta
    if (i != fim) {
        int aux = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = aux;

        trocas++; // Conta a troca do pivô
    }

    // Ordena os elementos antes do pivô
    if (inicio < i - 1) {
        quickSort(vetor, inicio, i - 1);
    }

    // Ordena os elementos depois do pivô
    if (i + 1 < fim) {
        quickSort(vetor, i + 1, fim);
    }
}

// Função principal do programa
int main() {
    vector<int> vetor = {5, 3, 8, 1}; // Valores utilizados no teste

    cout << "Vetor original: ";

    // Mostra o vetor original
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    // Chama a função de ordenação
    quickSort(vetor, 0, vetor.size() - 1);

    // Mostra a quantidade de comparações e trocas
    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Trocas: " << trocas << endl;

    cout << "Vetor ordenado: ";

    // Mostra o vetor depois da ordenação
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0; // Finaliza o programa
}
