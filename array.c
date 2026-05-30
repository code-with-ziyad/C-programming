#include <stdio.h>
int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of index %d\n", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("The value for Index %d is %d \n", i, arr[i]);
    }

    printf("\n");
    printf("\n");

    /////////////////// Char ////////////////////////////////////

    char fruits[4][20];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of index %d\n", i);
        scanf("%s", fruits[i]);
    }

    

    for (int i = 0; i < 4; i++)
    {
        printf("The value of index %d is %s \n", i, fruits[i]);
    }
}