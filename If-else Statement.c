#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        {
            printf("\nThis Number is Even\n");
        }
    else
        {
            printf("\nThis Number is Odd\n");
        }
    return 0;
}
