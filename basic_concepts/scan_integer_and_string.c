#include <stdio.h>
int main()
{

    char str[100];
    int i;

    printf("Enter a string followed by a number: ");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d\n", str, i);

    return 0;
}