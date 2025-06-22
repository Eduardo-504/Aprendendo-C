#include <stdio.h>
#include <string.h> // Para usar a função strcspn, que remove o caractere de nova linha
int main(){
    char nome[30]; // Declaração de um array de caracteres para armazenar o nome completo do usuário, com tamanho máximo de 30 caracteres
       printf("Digite seu nome completo: "); // Solicita ao usuário que digite seu nome completo
       fgets(nome, 30, stdin); // Lê uma linha de entrada do usuário, incluindo espaços, até o tamanho máximo de 30 caracteres
         nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha, se presente
       printf("Seu nome completo é: %s\n", nome); // Exibe o nome completo lido
       return 0;
}

// A função fgets é utilizada para ler strings de entrada, incluindo espaços, e é geralmente preferida em relação à função scanf para esse propósito, pois evita problemas com estouro de buffer e lida melhor com entradas que contêm espaços em branco.
// A função strcspn é usada para remover o caractere de nova linha (\n) do final da string lida, se necessário, garantindo que a string resultante não contenha esse caractere indesejado.
// A função stdin é o fluxo de entrada padrão, geralmente associado ao teclado, e é usado como argumento para a função fgets para ler a entrada do usuário.
