// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a = 10,b = 5, c;
    
    // c = a+b;
    // printf("Addition of a+b = %d \n",c);  
    // c = a-b;
    // printf("Subtraction of a-b = %d \n",c);
    // c = a*b;
    // printf("Multiplication of a*b = %d \n",c);
    // c = a/b;
    // printf("Division of a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}