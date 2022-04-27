#include <stdio.h>
#include <stdlib.h>

void Banner();
void SelectionMenu(int selection);
void ArrayAddition();

int main()
{
    int selection;
    Banner();
    printf("1. Sum of arrays\n");
    printf("choose: ");
    scanf("%d", &selection);
    SelectionMenu(selection);
    system("pause");
    return 0;
}

void Banner()
{
    printf("*******************************************\n");
    printf("*                                         *\n");
    printf("*           S A N D W I C H               *\n");
    printf("*                                         *\n");
    printf("*******************************************\n");
    printf("                               LingerANR   \n");
}

void SelectionMenu(int sel)
{
    switch (sel)
    {
    case 1:
        ArrayAddition();
        break;
    
    default:
        break;
    }
}

void ArrayAddition()
{
    int rows, cols;
    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("Numero de columns: ");
    scanf("%d", &cols);
    printf("\n");
    int array1[rows][cols];

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            printf("Value for [%d][%d]: ", x, y);
            scanf("%d", &array1[x][y]);
        }
    }

    printf("\nThe stored values in [Array 1] are: \n\n");

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            printf("%d ", array1[x][y]);
        }
        printf("\n");
    }

    printf("\n\n********  Array 2  ********\n\n");

    int array2[rows][cols];

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            printf("Value for [%d][%d]: ", x, y);
            scanf("%d", &array2[x][y]);
        }
    }

    printf("\nThe stored values in [Array 2] are: \n\n");

    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            printf("%d ", array2[x][y]);
        }
        printf("\n");
    }

    int array3[rows][cols];
    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            array3[x][y] = array1[x][y] + array2[x][y];
        }
    }

    printf("\n\nThe sum of the arrays gives: \n\n");
    for(int x = 0; x < rows; x++)
    {
        for(int y = 0; y < cols; y++)
        {
            printf("%d ", array3[x][y]);
        }
        printf("\n");
    }
}