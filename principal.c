#include <stdio.h>

int main() {
    // Definindo o vetor com 10 preços de produtos
    // Estes valores podem ser alterados para testar diferentes casos
    float precos[10] = {12.50, 5.99, 20.00, 7.25, 15.75, 3.50, 9.99, 18.00, 2.75, 11.00};
    int i, j;
    float temp; // Variável temporária para realizar trocas no Bubble Sort

    // Exibindo os dados originais do vetor
    printf("Vetor original de preços:\n");
    printf("Produto\tPreço (R$)\n");
    printf("-----------------\n");
    for(i = 0; i < 10; i++) {
        printf("%d\t%.2f\n", i + 1, precos[i]);
    }
    printf("\n");

    // === Bubble Sort em ordem crescente ===
    // Explicação:
    // Bubble Sort compara elementos vizinhos e troca suas posições se estiverem fora da ordem desejada.
    // A cada passagem, o maior elemento "bolha" para o final do vetor.
    for(i = 0; i < 10 - 1; i++) {       // Laço externo controla quantas passagens serão feitas
        for(j = 0; j < 10 - i - 1; j++) { // Laço interno percorre os elementos não ordenados
            if(precos[j] > precos[j + 1]) { // Se o elemento atual é maior que o próximo
                // Troca de posição usando variável temporária
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor em ordem crescente
    printf("Vetor ordenado em ordem crescente:\n");
    printf("Produto\tPreço (R$)\n");
    printf("-----------------\n");
    for(i = 0; i < 10; i++) {
        printf("%d\t%.2f", i + 1, precos[i]);
        if(i == 0) printf("  ← menor");   // Destaca o menor preço
        if(i == 9) printf("  ← maior");  // Destaca o maior preço
        printf("\n");
    }
    printf("\n");

    // === Bubble Sort em ordem decrescente ===
    // Lógica similar, mas agora trocamos se o elemento atual for menor que o próximo
    for(i = 0; i < 10 - 1; i++) {
        for(j = 0; j < 10 - i - 1; j++) {
            if(precos[j] < precos[j + 1]) { // Troca se o atual for menor
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor em ordem decrescente
    printf("Vetor ordenado em ordem decrescente:\n");
    printf("Produto\tPreço (R$)\n");
    printf("-----------------\n");
    for(i = 0; i < 10; i++) {
        printf("%d\t%.2f", i + 1, precos[i]);
        if(i == 0) printf("  ← maior");  // Destaca o maior preço
        if(i == 9) printf("  ← menor"); // Destaca o menor preço
        printf("\n");
    }
    printf("\n");

    return 0;
}