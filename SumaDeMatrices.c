//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Inicio del programa
int main()
{
    //Variables
    int n;
    int m;
    int n2;
    int m2;  
    printf("Ingrese filas matriz 1: ");
    scanf("%d", &n);
    printf("Ingrese columnas matriz 1: ");
    scanf("%d", &m);
    printf("Ingrese filas columnas 2: ");
    scanf("%d", &n2);
    printf("Ingrese columnas matriz 2: ");
    scanf("%d", &m2);
    srand(time(NULL));
    int Matriz[n][m];
    int Matriz2[n2][m2];
    int Matriz3[n][m]; 
    printf("Matriz1:");
    //Sentencias
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            Matriz[i][j] = rand () % 101;
            printf("%d \t", Matriz[i][j]);
        }
    }
    printf("\nMatriz2: ");
    for (int i = 0; i < n2; i++)
    {
        printf("\n");
        for (int j = 0; j < m2; j++)
        {
            Matriz2[i][j] = rand () % 101;
            printf("%d \t", Matriz2[i][j]);
        }
    }
    printf("\nMatrizResultante: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            Matriz3[i][j] = Matriz[i][j] + Matriz2[i][j];
            printf("%d \t", Matriz3[i][j]);
        }
    }    
    return 0;
}