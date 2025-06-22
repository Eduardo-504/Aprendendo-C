// Ao utilizar o printf para imprimir variáveis, é necessário colocar o nome da variável e o especificador de formato. 
#include <stdio.h>
    int idade = 21; 
        printf("A idade é: %d anos\n", idade);
        return 0; 
    } 
// Neste exemplo, a variável idade é declarada e inicializada com o valor 21. A função printf é usada para exibir a mensagem "A idade é: 21 anos" na tela, onde %d é um especificador de formato que indica que estamos exibindo um número inteiro.

// Sintaxe base de Printf com variáveis: printf("Texto a ser exibido + %formato", variavel);
    // Aqui, "%formato" é um especificador de formato correspondente ao tipo da variável que você deseja exibir. 
    // Os especificador são elementos essenciais para controlar a formatação dos dados nas funções de entrada e saída da linguagem C, como printf e scanf. 
    // Cada especificador de formato é precedido por um caractere % e indica o tipo de dado da variável que será exibida. 
    // Para cada variável que você deseja imprimir, é necessário acrescentar um especificador de formato correspondente.

// Aqui estão alguns dos mais comuns:
    // - %d: usado para exibir números inteiros (int).
    // - %f: usado para exibir números de ponto flutuante (float). (use %.2f para limitar a duas casas decimais).
    // - %e: usado para exibir números em notação científica (float). (use %.2e para limitar a duas casas decimais).
    // - %lf: usado para exibir números de ponto flutuante de precisão dupla (double). (use %.2lf para limitar a duas casas decimais).
    // - %c: usado para exibir caracteres (char). 
    // - %s: usado para exibir strings (cadeias de caracteres).
    // - %u: usado para exibir números inteiros sem sinal (unsigned int).