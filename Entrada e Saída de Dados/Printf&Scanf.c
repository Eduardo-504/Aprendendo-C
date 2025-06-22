                                                 //Entrada e Saida de Dados com C.          

// Saída de Dados com Printf:
    // A função printf é usada para exibir informações na tela. Pense em printf como uma maneira de pegar informações das suas "caixas" (variáveis) e mostrá-las ao mundo exterior. 

// Sintaxe base de Printf para imprimir variaveis:
    // printf("Texto a ser exibido %d", variavel); 

// Onde: 
    // - "Texto a ser exibido" é uma string que pode conter texto e especifícadores de formato para as variáveis que você quer mostrar.  
    // - %d é um especificador de formato que indica que você está exibindo um número inteiro.
    // - variavel é a variável cujo valor você quer exibir.

// Exemplo de uso do Printf:
#include <stdio.h>
    int main() { // Função principal do programa
        printf("Olá, mundo!\n");
        return;
     }
// Neste exemplo, a função printf exibe a mensagem "Olá, mundo!" na tela. O \n é usado para adicionar uma nova linha após a mensagem.
    
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

// Entrada de Dados com Scanf:
  // A função scanf é usada para ler informações do usuário. Pense em scanf como uma maneira de pegar informações do mundo exterior e colocá-las nas suas "caixas" (variáveis).

// Sintaxe base de Scanf para ler variáveis:
    // scanf("Especificador de formato", &variavel);

//Onde:
    // - "Especificador de formato" é um especificador que indica o tipo de dado que você está lendo.
    // - "&variavel" é o endereço da variável onde você deseja armazenar o valor lido. 
    // - O operador "&"" é usado para obter o endereço da variável. (É importante lembrar que, ao usar scanf, você deve fornecer o endereço da variável usando o operador "&", para que a função saiba onde armazenar o valor lido).
    
// Exemplo de uso do Scanf:
#include <stdio.h>
    int main() { // Função principal do programa
        int idade; // Declaração da variável idade
        printf("Digite sua idade: "); // Solicita ao usuário que digite a idade
        scanf("%d", &idade); // Lê a idade digitada pelo usuário e armazena na variável idade
        printf("Sua idade é: %d anos\n", idade); // Exibe a idade lida
        return 0; // Retorna 0 para indicar que o programa terminou com sucesso
    }
// Neste exemplo, a função scanf lê um número inteiro digitado pelo usuário e o armazena na variável idade. A função printf é usada para exibir a mensagem "Sua idade é: X anos", onde X é o valor lido.

// Lendo strings com scanf:
#include <stdio.h>
    int main() {
        int nome[20]
        printf("Digite seu nome: ");
        scanf("%s", nome); // importe se atentar que o nome da variável não deve conter o operador "&", pois o nome do array já representa o endereço do primeiro elemento.
        printf("Seu nome é: %s\n", nome)
        resturn 0;
    }
    // Para ler strings, você pode usar o especificador %s. 
    // No entanto, é importante lembrar que, ao ler strings, você deve garantir que a variável tenha espaço suficiente para armazenar a string lida.
    // Scanf não lê espaços em branco, então se você digitar uma string com espaços, ela só lerá até o primeiro espaço. 
    // Para ler strings com espaços, você pode usar "fgets"" ou "scanf" com um especificador de formato diferente. 
    // Caso deseje usar o scanf para imprimir strings, utilize o especificador "%[^\n]", que lê até encontrar uma nova linha).

// lendo strings com espaço utilizando "scanf":
#include <stdio.h>
    int main() {
        char nome[50]; 
        printf("Digite seu nome completo: ");
        scanf("%[^\n]", nome); // "[%^\n]" Lê a string até encontrar uma nova linha
        printf("Seu nome é: %s\n", nome); 
        return 0; 
    }
// Neste exemplo, a função scanf lê uma string completa, incluindo espaços, até encontrar uma nova linha. A variável nome é declarada como um array de caracteres com espaço suficiente para armazenar o nome completo do usuário.

// Lendo strings com fgets:
#include <stdio.h> 
#include <string.h> // Para usar a função strcspn, que remove o caractere de nova linha
    int main() {
        char nome[50]; 
        printf("Digite seu nome completo: ");
        fgets (nome,50, stdin);
        nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha, se presente
        printf("Seu nome completo é: %s\n", nome);
        return 0;
    }
// fgets é uma função que lê uma linha inteira de entrada, incluindo espaços, até encontrar uma nova linha ou atingir o tamanho máximo especificado.

    // Neste exemplo, a função fgets lê uma string completa, incluindo espaços, até atingir o tamanho máximo especificado (50 caracteres). 
    // fgets recebe três argumentos: o array onde a string será armazenada, o tamanho máximo da string e o fluxo de entrada (stdin, que geralmente é o teclado).
    // A função fgets é geralmente preferida para ler strings, pois ela lida melhor com espaços e evita problemas de estouro de buffer.

// Stdin é o fluxo de entrada padrão, que geralmente é o teclado.

// strcspn é uma função que pode ser usada para remover o caractere de nova linha (\n) do final da string lida, se necessário.
   // A função strcspn é usada para encontrar o comprimento da string até o primeiro caractere especificado (neste caso, o caractere de nova linha) e substituí-lo por um terminador nulo (\0), efetivamente removendo o caractere de nova linha da string.

// resumindo: 
// Dominar a entrada e saída de dados é essencial para interagir com os usuários e obter informações úteis para o seu programa.
    // - printf é usado para exibir informações na tela.
    // - scanf é usado para ler informações do usuário.
    // - Os especificadores de formato são usados para controlar a formatação dos dados exibidos ou lidos.
    // - É importante garantir que as variáveis tenham espaço suficiente para armazenar os valores lidos.
    // - fgets é uma alternativa mais segura para ler strings, especialmente quando elas contêm espaços.



