#include <stdio.h>

/*n=3
You manage a travel agency and you want your n drivers to input their following details:
1.Name
2.Driving license No.
3.Route
4.Kms
your program should be able to take n = 3 as input(for you can take n +3 for simplicity) and your drivers will start inputting their details one by one.

your program should print details of the drivers in a beautiful fashion.
using structures.
*/
struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};
int main()
{
    struct Driver d1, d2, d3;
    printf("Enter the details of the Driver No. 1\n");
    printf("Enter the name of first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the number of kms of first driver\n");
    scanf("%d", &d1.kms);

    printf("Enter the details of the Driver No. 2\n");
    printf("Enter the name of second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the number of kms of second driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the details of the Driver No. 3\n");
    printf("Enter the name of third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the number of kms of third driver\n");
    scanf("%d", &d3.kms);

    printf("************Printing information of these drivers:*******\n");
    printf("For Driver No 1:\nName is %s", d1.name);
    printf("DL number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("kms is %d\n", d1.kms);

    printf("For Driver No 2:\nName is %s", d2.name);
    printf("DL number is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("kms is %d\n", d2.kms);

    printf("For Driver No 3:\nName is %s", d3.name);
    printf("DL number is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("kms is %d\n", d3.kms);

    return 0;
}