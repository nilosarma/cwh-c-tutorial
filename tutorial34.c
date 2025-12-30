#include<stdio.h>
void printStr(char str[])
{
    int  i = 0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'n', 'i', 'l', 'o', '\0'};
    // char str[6] = "nilo";
    char str[34];
    gets(str);
    printf("using custom function printStr\n");
    // printStr(str);
    printf("Using printf %s", str);
    printf("using puts: \n");
    puts(str);
  
    return 0;
}