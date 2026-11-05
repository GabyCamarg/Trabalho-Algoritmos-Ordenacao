
#include <iostream> // Biblioteca para entrada e saída de dados
#include <vector> // Biblioteca para utilizar vetores
using namespace std;

// Função que realiza a ordenação Bubble Sort
void bubbleSort(vector<int>& vetor) {
    int tamanho = vetor.size(); // Guarda o tamanho do vetor
    int comparacoes = 0; // Conta as comparações
    int trocas = 0; // Conta as trocas realizadas

    // Percorre o vetor para organizar os elementos
    for (int i = 0; i < tamanho - 1; i++) {

        // Compara os elementos que estão lado a lado
        for (int j = 0; j < tamanho - i - 1; j++) {

            comparacoes++; // Adiciona uma comparação

            // Verifica se o elemento atual é maior que o próximo
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j]; // Guarda o valor temporariamente
                vetor[j] = vetor[j + 1]; // Coloca o próximo valor na posição atual
                vetor[j + 1] = aux; // Coloca o valor guardado na próxima posição

                trocas++; // Adiciona uma troca
            }
        }
    }

    // Mostra a quantidade de comparações e trocas
    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Trocas: " << trocas << endl;
}

// Função principal do programa
int main() {
    vector<int> vetor = {5, 3, 8, 1}; // Valores utilizados no teste

    cout << "Vetor original: ";

    // Mostra os valores antes da ordenação
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    bubbleSort(vetor); // Chama a função de ordenação

    cout << "Vetor ordenado: ";

    // Mostra os valores depois da ordenação
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0; // Finaliza o programa
}
