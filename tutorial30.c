// Take input from the user and ask user to choose 0 for Triangular star pattern and 1 for Reverse Triangular star pattern
// Then print the pattern accordingly
//*
//**
//***
//**** triangular star pattern

//****
//***
//**
//* Reverse triangular star pattern
#include <stdio.h>
int main()
{
    int choose, i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("choose pattern :\n");
    printf("0 = Triangular star pattern\n");
    printf("1 = Reverse triangular star pattern\n");
    scanf("%d", &choose);
    if (choose == 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (choose == 1)
    {
        for (i = n; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid choose!");
    }
    return 0;
}
