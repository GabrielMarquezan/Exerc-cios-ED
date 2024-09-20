#include <stdio.h>
#include <stdlib.h>

void imprime_matriz (int m, int n, int** mat);

int main()
{
    int** matriz = malloc(3*sizeof(int*));
    
    for(int i = 0; i < 3; i++)
    {
        matriz[i] = malloc(3*sizeof(int));
        
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
    
    imprime_matriz(3, 3, matriz);
}

void imprime_matriz (int m, int n, int** mat)
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
