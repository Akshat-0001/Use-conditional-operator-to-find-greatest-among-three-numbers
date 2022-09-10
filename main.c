///Use conditional operator to find greatest among three numbers
#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    (a>b && b>c) ? printf("a is greatest"): (b>a && b>c) ? printf ("b is greatest"): printf("C is greatest");
}
