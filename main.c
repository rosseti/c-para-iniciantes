#include <stdio.h>

#define se if
#define senao else
#define enquanto while
#define para for
#define fazer do
#define int int
#define caractere char
#define flutuante float
#define duplo double
#define vazio void
#define principal main

int principal()
{
    /**
     * Exemplo de loop usando diretivas em português
     */
    para(int i = 0; i < 5; i++)
    {
        printf("contagem: %d\n", i);
    }

    /**
     * Exemplo de estrutura condicional
     **/ 
    int numero = 10;
    se(numero > 5)
    {
        printf("o número é maior que 5.\n");
    }
    senao
    {
        printf("o número não é maior que 5.\n");
    }

    /**
     * Exemplo de função
     **/ 
    caractere *saudacao()
    {
        fazer
        {
            printf("olá, mundo!\n");
        }
        enquanto(0); 
        
        return "olá, mundo!";
    }

    printf("%s\n", saudacao());

    return 0;
}
