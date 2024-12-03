#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter one number: \n");
    scanf("%d",&num1);

    if(num1%2==0)
    {
        printf("Number is even,");

    }

    else
    {
        printf("Number is odd,");
    }

    return 0;
}

