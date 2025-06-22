#include <stdio.h>
#include <string.h>
int main(){
    char nome[30];
       printf("Digite seu nome completo: ");
       fgets(nome, 30, stdin);
         nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha, se presente
       printf("Seu nome completo é: %s\n", nome);
       return 0;
}