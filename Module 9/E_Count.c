/* E. Count
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
InputCopy
351
OutputCopy
9
Note
First Test :

3 + 5 + 1 = 9 .


 */
// way 1
#include <stdio.h>
int main()
{
    int sum = 0;
    char str[100001];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum += str[i] - '0';
    }
    printf("%d", sum);
    return 0;
}

// way 2
#include <stdio.h>
int main()
{
    int sum = 0;
    char str[1000001];
    scanf("%s", str);
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        sum += str[i] - '0';
    }
  
    printf("%d", sum);
    return 0;
}