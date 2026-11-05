
#include <iostream> // Biblioteca para entrada e saída
#include <vector> // Biblioteca para utilizar vetores
using namespace std;

// Função que realiza a ordenação Insertion Sort
void insertionSort(vector<int>& vetor) {
    int tamanho = vetor.size(); // Guarda o tamanho do vetor
    int comparacoes = 0; // Conta as comparações
    int movimentacoes = 0; // Conta os deslocamentos

    // Percorre o vetor a partir do segundo elemento
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i]; // Guarda o valor que será inserido
        int j = i - 1; // Começa pelo elemento anterior

        // Compara a chave com os elementos anteriores
        while (j >= 0) {
            comparacoes++; // Conta uma comparação entre valores

            // Verifica se o elemento é maior que a chave
            if (vetor[j] > chave) {
                vetor[j + 1] = vetor[j]; // Desloca o elemento para a direita
                movimentacoes++; // Conta um deslocamento
                j--; // Volta uma posição
            } else {
                break; // Para quando encontra a posição correta
            }
        }

        vetor[j + 1] = chave; // Insere a chave na posição correta
    }

    // Mostra a quantidade de comparações e movimentações
    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Movimentacoes: " << movimentacoes << endl;
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

    insertionSort(vetor); // Chama a função de ordenação

    cout << "Vetor ordenado: ";

    // Mostra o vetor depois da ordenação
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0; // Finaliza o programa
}
