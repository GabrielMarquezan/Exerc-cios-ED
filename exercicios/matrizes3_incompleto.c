/*Implemente quatro funções que alocam, desalocam, preenchem e mostram uma matriz de
tamanho mxn, respectivamente (considere que a matriz seja armazenada como um vetor de
ponteiros). Estas funções devem obedecer aos protótipos:

int** aloca_matriz (int m, int n)
void desaloca_matriz (int m, int** mat)
void preenche_matriz (int m, int n, int **mat)
void mostra_matriz (int m, int n, int **mat)*/

#include <stdio.h>
#include <stdlib.h>

void imprime_matriz (int m, int n, int** mat);

int main()
{
    int m = 4;
    int n = 5;
    int** matriz = aloca_matriz(m, n);
    
    imprime_matriz(m, n, matriz);
}


int** aloca_matriz (int m, int n)
{
    int** matriz = malloc(m*sizeof(int*));
    
    for(int i = 0; i < m; i++)
    {
        matriz[i] = malloc(n*sizeof(int));
    }
    
    return matriz;
}

void desaloca_matriz (int m, int** mat)
{
    for(int i = 0; i < m; i++)
    {
        free(mat[i]);
    }
}

void preenche_matriz (int m, int n, int **mat)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }
}

void mostra_matriz (int m, int n, int** mat)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        
        printf("\n");
    }
}
