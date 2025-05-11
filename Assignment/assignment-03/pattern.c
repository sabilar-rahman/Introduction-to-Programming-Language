/* You will be given a positive integer N, you need to print a pattern shown below using this N.

For example: If N=5, the pattern will look like below.

image

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 100
Output Format

Output the pattern.
Sample Input 0

4
Sample Output 0

   #
  ---
 #####
-------
 #####
  ---
   #
Sample Input 1

1
Sample Output 1

#
Sample Input 2

7
Sample Output 2

      #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      # */

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;


    // for lower part
 // star -= 2;
    int star2 = 2 * n - 3;
    int space2 = 1;


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        // char ch = (i % 2 == 1) ? '#' : '-';
        char cha;
        if (i % 2 == 1)
        {
            cha = '#';
        }
        else
        {
            cha = '-';
        }

        for (int j = 1; j <= star; j++)
        {
            printf("%c", cha);
        }
        printf("\n");
        star += 2;
        space--;
    }

    


    // Lower part
    for (int i = 1; i <= n - 1; i++) 
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }

        char lch;
        if ((n + i) % 2 == 1)
        {
            lch = '#';
        }
        else
        {
            lch = '-';
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("%c", lch);
        }

        printf("\n");
        star2 -= 2;
        space2++;
    }

    return 0;
}