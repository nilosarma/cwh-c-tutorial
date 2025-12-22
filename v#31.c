//function call by value and call by reference
#include<stdio.h>
void ChangeValue(int* address)
{
    *address = 345;
}
int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    ChangeValue(&a);
    printf("The value of a now is %d\n",a);
return 0;
}