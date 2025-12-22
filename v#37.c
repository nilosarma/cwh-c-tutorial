//structure
#include<stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};
int main()
{
struct student Harry, Nilo, Hemen;
Harry.id = 1;
Nilo.id = 2;
Hemen.id = 3;
Harry.marks = 66;
Nilo.marks = 486;
Hemen.marks = 466;
Harry.fav_char = 'p';
Nilo.fav_char = 'p';
Hemen.fav_char = 'p';
printf("Harry got %d marks\n",Harry.marks);
return 0;
}