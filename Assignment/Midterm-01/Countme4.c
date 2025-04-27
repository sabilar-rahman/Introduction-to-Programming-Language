/* Problem Statement

You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.

Input Format

Input will contain only S.
Constraints

1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Ouput in the format show in the sample output.
Sample Input 0

thefoxisbrave
Sample Output 0

a - 1
b - 1
e - 2
f - 1
h - 1
i - 1
o - 1
r - 1
s - 1
t - 1
v - 1
x - 1
Sample Input 1

dotheyloveme
Sample Output 1

d - 1
e - 3
h - 1
l - 1
m - 1
o - 2
t - 1
v - 1
y - 1 */

// #include <stdio.h>
// int main()
// {
//     int count[26] = {0}; 
//     char s[100]; 
//     scanf("%s", s);
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         count[s[i] - 'a']++; 
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (count[i] != 0)
//         {
//             printf("%c - %d\n", 'a' + i, count[i]); 
//         }
//     }
//     return 0;
// }   

#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    scanf("%s", S);  

    int freq[26] = {0};  // each letter (a to z)

    // Calculate the frequency of each letter
    for (int i = 0; i < strlen(S); i++) {
        freq[S[i] - 'a']++;
    }

    // Print the frequency of each letter
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//    int n;
//    scanf("%d", &n);
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//   scanf("%d", &a[i]);
//    }
   
//    int freq[6] = {0};
//    for (int i = 0; i < n; i++)
//    {
//     int val = a[i];
//     freq[val]++;
//    }
//    for (int  i = 0; i < 6; i++)
//    {
//     printf("%d - %d\n", i, freq[i]);
//    }
   
//     return 0;
// }