// Magical Tree

// Problem Statement

// Jingle Bells, Jingle Bells — It’s Christmas today! Ranja, our little friend, is all excited, but there’s just one thing missing: a Christmas tree.

// Ranja will provide us with the size of the tree, N, and we’ll work our holiday magic to print out that perfect tree. Let’s make Ranja’s Christmas tree dreams come true!

// You should see the sample input output to understand how the tree looks like.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 21 ; and N is odd.
// Output Format

// Output the tree of size N.


//Answer
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>


// int main() {
//     int input,stars = 1;
//     scanf("%d", &input);
//     int triangleLines = ((input - 1) / 2) + 6;
   
// //upper part
//     for (int i = 0; i < triangleLines; i++) {
//         int spaces = triangleLines - 1 - i;
//         for (int j = 0; j < spaces; j++) {
//             printf(" ");
//         }
//         for (int j = 0; j < stars; j++) {
//             printf("*");
//         }
//         printf("\n");
//         stars += 2;
//     }

//     // lower part
//     for (int i = 0; i < 5; i++) {
//         // Calculate spaces
//         int lowerSpaces = triangleLines - (input + 1) / 2;
//         for (int j = 0; j < lowerSpaces; j++) {
//             printf(" ");
//         }
//         // Print
//         for (int j = 0; j < input; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int input,stars = 1;
    scanf("%d", &input);
    int triangleLines = ((input - 1) / 2) + 6;
   
//upper part
    for (int i = 0; i < triangleLines; i++) {
        int spaces = triangleLines - 1 - i;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
        stars += 2;
    }

    // lower part
    for (int i = 0; i < 5; i++) {
     int inp= (input + 1) / 2;
        // Calculate spaces
        int lowerSpaces = triangleLines - inp;
        for (int j = 0; j < lowerSpaces; j++) {
            printf(" ");
        }
        // Print
        for (int j = 0; j < input; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



