/* F. Multiplication table
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print the maltiplication table of the number from 1 to 12

For example: if N = 1

Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print 12 lines according to the required above.

Examples
InputCopy
1
OutputCopy
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12 */

#include <stdio.h>
int main()
{
    int givenNumber;
    scanf("%d", &givenNumber);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", givenNumber, i, givenNumber * i);
    }
    return 0;
}