/*Suma de matrices
Usuario ingresa dimension de la matriz
Usar numeroa aleatorios para cada matriz entre 0 y 100
Imprima la matriz A, B y el el resultado de su suma*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Dimension de la matriz
    int filas;
    int columnas;
    printf("ingrese el numero de filas de las matrices -> ");
    scanf("%d", &filas);
    printf("ingrese el numero de columnas de las matrices -> ");
    scanf("%d", &columnas);

    //Definir matrices
    int A[filas][columnas];
    int B[filas][columnas];
    
    //Matrices random
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            A[i][j]=rand()%100;
            B[i][j]=rand()%100;
        }
    }

    //Imprimir matriz A
    printf("Matriz A: \n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Imprimir matriz B
    printf("Matriz B: \n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    

    printf("\n");

    //Suma de matrices
    int C[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //imprimir la matriz suma
    printf("Matriz suma C: \n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
