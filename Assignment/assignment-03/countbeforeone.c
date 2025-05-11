/* Problem Statement

You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.

Input Format

First line will contain N, the size of the array.
Next line will contain the array A.
Constraints

1 <= N <= 1000
0 <= A[i] <= 1000; Here 0 <= i < N
Output Format

Output the number of elements before the first 1.
Sample Input 0

5
5 4 3 1 2
Sample Output 0

3
Sample Input 1

5
1 2 3 4 5
Sample Output 1

0

 */



 #include <stdio.h>
 
 int count_before_one( int array[1000], int size){

    int countToOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 1)
        {
            break;
        }
        countToOne++;
    }
    return countToOne;
 }



 int main(){
    
    int array[1000]; // Array 
    int size; // hold the size

    scanf("%d", &size); // Read size 


    for (int  i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);

    }
    

    count_before_one( array, size); // call function
    printf("%d", count_before_one( array, size));
    return 0;
}