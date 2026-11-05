#include <iostream> // Biblioteca para entrada e saída
#include <vector> // Biblioteca para utilizar vetores
using namespace std;

// Função que realiza a ordenação Selection Sort
void selectionSort(vector<int>& vetor) {
    int tamanho = vetor.size(); // Guarda o tamanho do vetor
    int comparacoes = 0; // Conta as comparações
    int trocas = 0; // Conta as trocas

    // Percorre as posições do vetor
    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i; // Considera a posição atual como a menor

        // Procura o menor elemento da parte não ordenada
        for (int j = i + 1; j < tamanho; j++) {
            comparacoes++; // Conta uma comparação

            // Verifica se encontrou um valor menor
            if (vetor[j] < vetor[menor]) {
                menor = j; // Guarda a posição do menor valor
            }
        }

        // Verifica se precisa realizar uma troca
        if (menor != i) {
            int aux = vetor[i]; // Guarda o valor atual
            vetor[i] = vetor[menor]; // Coloca o menor valor na posição atual
            vetor[menor] = aux; // Coloca o valor guardado na outra posição

            trocas++; // Conta uma troca
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

    // Mostra o vetor original
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    selectionSort(vetor); // Chama a função de ordenação

    cout << "Vetor ordenado: ";

    // Mostra o vetor depois da ordenação
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0; // Finaliza o programa
}
