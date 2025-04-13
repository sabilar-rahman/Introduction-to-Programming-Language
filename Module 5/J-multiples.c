/* Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.

Examples
InputCopy
9 3
OutputCopy
Multiples */
#include <stdio.h>
int main()
{
    int A, B;

    scanf("%d %d", &A, &B);
    if (B % A == 0 || A % B == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}