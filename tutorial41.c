#include<stdio.h>
#include<string.h>
void parser(char * string)
{
    int in=0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
      if(string[i] == '<'){
        in = 1;
        continue;
      }
      else if(string[i]=='>')
      {
        in = 0;
        continue;
      }
      if(in == 0){
        string[index] = string[i];
        index ++;
      }
    }
    string[index] = '\0';

    //Remove the trailing spaces from the beginning
    while(string[0] == ' '){
        //shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            /* code */
            string[i] = string[i+1];
        }
         }
          //Remove the trailing spaces from the end
          while(string[strlen(string) - 1] == ' ')
          {
             while(string[strlen(string) - 1] = '\0');
          }


}

int main()
{
    char string[] = "<nilosarma>this is a heading    </nilo>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}
/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is heading2 </span>

output:
This is a heading2
*/