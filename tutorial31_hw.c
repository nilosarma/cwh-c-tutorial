/*#include<stdio.h>

void changeValue(int* address)
{
*address = 37565;
}
int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);


    return 0;
}*/

//Given two numbers a and b add them substract them and assign them to a and b using call by reference
//eg a = 4, b = 8;
#include<stdio.h>

void addSub(int *a, int *b) {
    int sum = *a + *b;
    int diff = *a - *b;

    *a = sum;
    *b = diff;
}

int main()
{
    int a = 4, b = 8;

     addSub(&a, &b);

     printf("After operation: \n");
     printf("a = %d\n", a);
     printf("b = %d\n", b);

     return 0;

}