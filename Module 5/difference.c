/* D. Difference
time limit per test1 second
memory limit per test256 megabytes
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
InputCopy
1 2 3 4
OutputCopy
Difference = -10
InputCopy
2 3 4 5
OutputCopy
Difference = -14
InputCopy
4 5 2 3
OutputCopy
Difference = 14

 */

 #include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long x = (a * b) - (c * d);

    printf("Difference = %lld\n", x);

    return 0;
}