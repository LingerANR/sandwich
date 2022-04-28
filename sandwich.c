#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Banner();
void SelectionMenu(int selection);
void donut();
void InvertArray();
void ArrayAddition();

int main()
{
    int selection;
    Banner();
    printf("1. Sum of arrays\n");
    printf("2. Donut :)\n");
    printf("3. Invert Array :)\n");
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
    case 2:
        donut();
        break;
    case 3:
        InvertArray();
        break;
    default:
        break;
    }
}

void donut()
{
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }
    return 0;
}

void InvertArray()
{
    int value_size;
    printf("Insert the size of the vector: ");
    scanf("%d", &value_size);
    int array[value_size];
    int size = sizeof(array) / sizeof(array[0]);

    for (int y = 0; y < size; y++)
    {
        printf("Insert the value of [%d]: ", y);
        scanf("%d", &array[y]);
    }
    
    printf("\nThe Array is: \n\n");

    for (int j = 0; j < size; j++)
    {
        printf("%d ", array[j]);
    }

    for(int x = 0; x < size / 2; x++)
    {
        int temporal = array[x];

        array[x] = array[size - x - 1];

        array[size - x - 1] = temporal;
    }

    printf("\nThe invert of Array is: \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
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