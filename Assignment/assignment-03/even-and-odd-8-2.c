/* Problem Statement

You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.

Input Format

First line will contain N.
Next line will contain the array A.
Constraints

1 <= N <= 1000
0 <= A[i] <= 10^9; Where 0 <= i < N
Output Format

First print the number of even elements, then the number of odd elements separated by a space.
Sample Input 0

5
1 2 3 4 5
Sample Output 0

2 3
Sample Input 1

6
0 4 0 6 5 3
Sample Output 1

4 2 */




// #include <stdio.h>

// void odd_even(int arr[], int SizeOfArray) // Function to count even and odd numbers
// {
//     int even = 0, odd = 0; 
//     for (int i = 0; i < SizeOfArray; i++) // Loop to iterate over the array
//     {
//         if (arr[i] % 2 == 0)  // Check if the number is even
//             even++;
//         else
//             odd++;
//     }
//     printf("%d %d", even, odd);
// }

// int main()
// {
//     int arr[1000];  // Maximum size
//     int SizeOfArray; // Size of the array
//     scanf("%d", &SizeOfArray); // Read the size of the array
    
//     for (int i = 0; i < SizeOfArray; i++) // Read the  array
//     {
//         scanf("%d", &arr[i]); // Read each element
//     }
    
//     odd_even(arr, SizeOfArray); // Pass the array and its size to the function
//     return 0;
// }


#include <stdio.h>

void odd_even() // Function takes input inside and does not return anything
{
    int arr[1000];      // Array to store values
    int SizeOfArray;    // Variable to hold the size

    scanf("%d", &SizeOfArray); // Read size inside the function

    for (int i = 0; i < SizeOfArray; i++) // Read array elements
    {
        scanf("%d", &arr[i]);
    }

    int even = 0, odd = 0; // Counters for even and odd numbers

    for (int i = 0; i < SizeOfArray; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("%d %d", even, odd); // Print counts
}

int main()
{
    odd_even(); // Just call the function
    return 0;
}