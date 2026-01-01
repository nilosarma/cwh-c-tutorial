#include<stdio.h>

void arrayRev(int arr[], int n)
{
int temp;
for(int i = 0; i < n/2; i++)
{
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
}
}
int main()
{
int arr[] = {1,2,3,4,5,6,67};
int n = sizeof(arr) / sizeof(arr[0]);

arrayRev(arr, n);

printf("Reversed array:\n");
for(int i = 0; i < n; i++)
{
    printf("%d", arr[i]);
}

    return 0;
}