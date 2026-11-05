
#include <iostream> // Biblioteca para entrada e saída
#include <vector> // Biblioteca para utilizar vetores
using namespace std;

int comparacoes = 0; // Conta as comparações
int movimentacoes = 0; // Conta as escritas no vetor original

// Função que junta as duas partes do vetor em ordem
void merge(vector<int>& vetor, int inicio, int meio, int fim) {
    vector<int> esquerda; // Cria o vetor da esquerda
    vector<int> direita; // Cria o vetor da direita

    // Copia os elementos da primeira parte
    for (int i = inicio; i <= meio; i++) {
        esquerda.push_back(vetor[i]);
    }

    // Copia os elementos da segunda parte
    for (int i = meio + 1; i <= fim; i++) {
        direita.push_back(vetor[i]);
    }

    int i = 0; // Posição inicial da esquerda
    int j = 0; // Posição inicial da direita
    int k = inicio; // Posição inicial no vetor original

    // Compara os elementos das duas partes
    while (i < esquerda.size() && j < direita.size()) {
        comparacoes++; // Conta uma comparação

        // Verifica qual elemento é menor
        if (esquerda[i] <= direita[j]) {
            vetor[k] = esquerda[i]; // Copia o elemento da esquerda
            i++;
        } else {
            vetor[k] = direita[j]; // Copia o elemento da direita
            j++;
        }

        movimentacoes++; // Conta uma escrita no vetor original
        k++; // Avança a posição do vetor
    }

    // Copia os elementos que sobraram na esquerda
    while (i < esquerda.size()) {
        vetor[k] = esquerda[i];
        i++;
        k++;
        movimentacoes++;
    }

    // Copia os elementos que sobraram na direita
    while (j < direita.size()) {
        vetor[k] = direita[j];
        j++;
        k++;
        movimentacoes++;
    }
}

// Função que divide e organiza o vetor
void mergeSort(vector<int>& vetor, int inicio, int fim) {

    // Verifica se ainda existe mais de um elemento
    if (inicio < fim) {
        int meio = (inicio + fim) / 2; // Calcula o meio do vetor

        mergeSort(vetor, inicio, meio); // Ordena a primeira metade
        mergeSort(vetor, meio + 1, fim); // Ordena a segunda metade

        merge(vetor, inicio, meio, fim); // Junta as duas metades
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
    mergeSort(vetor, 0, vetor.size() - 1);

    // Mostra a quantidade de comparações e movimentações
    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Movimentacoes: " << movimentacoes << endl;

    cout << "Vetor ordenado: ";

    // Mostra o vetor depois da ordenação
    for (int numero : vetor) {
        cout << numero << " ";
    }

    cout << endl;

    return 0; // Finaliza o programa
}
