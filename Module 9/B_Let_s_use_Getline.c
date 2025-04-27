#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000001];
    fgets(str, 10000001, stdin);


    for (int i = 0; str[i] != '\\'; i++)
    {
        
        printf("%c", str[i]);
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B