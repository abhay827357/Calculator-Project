#include<stdio.h>
int main()
{
    double a  ,b , result;
    char operator;

    printf("Mini Calculator using C");

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("Enter first number: ");
    scanf("%lf",&a);

    printf("Enter operator(+ , - , * , / ):");
    scanf(" %c",&operator);
    printf("Enter second number:");
    scanf("%lf",&b);

    switch(operator)
    {
        case '+':
        result = a+b;
        break;
        case '-':
        result = a-b;
        break;
        case '*':
        result = a*b;
        break;
        case '/':
        if (b!=0)
        result = a/b;
        else 
        {
            printf("Error:cannot divide by zero\n");
            return 1;
        }
        break;
        default:
        printf("invalid operator\n");
        return 1;
    }
    printf("result= %.2lf\n",result);
    return 0;
}