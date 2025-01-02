//===============================//
//  EXTRA QUESTION FOR INTERVIEW //
//===============================//


C Coding Interview Questions and Answer
1.Write a program to reverse an integer in C.
Ans- In this article, we are going to learn how to write a program to reverse the digits of a given number using a C programming language.

Suppose if someone gives input 123, then our program should provide output 321.

#include <stdio.h>
int main()
 {
   int n, reverse = 0, remainder;
   printf("Enter an integer: ");
   scanf("%d", &n);
   while (n != 0) {
     remainder = n % 10;
     reverse = reverse * 10 + remainder;
     n /= 10;
 }
 
 printf("Reversed number = %d", reverse);

 return 0;
}
Output:

Enter an integer: 2345
Reversed number = 5432

//==============================================================================
//==============================================================================

2. Write a program in C to check given number is prime or not.

Ans- In this tutorial we are going to learn how to write a program to check whether a given integer number by user is a prime number or not in C programming language.

#include <stdio.h>

int main() {
 int n, i, flag = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &n);

 // 0 and 1 are not prime numbers
 // change flag to 1 for non-prime number
 if (n == 0 || n == 1)
   flag = 1;

 for (i = 2; i <= n / 2; ++i) {

   // if n is divisible by i, then n is not prime
   // change flag to 1 for non-prime number
   if (n % i == 0) {
     flag = 1;
     break;
   }
 }

 // flag is 0 for prime numbers
 if (flag == 0)
   printf("%d is a prime number.", n);
 else
   printf("%d is not a prime number.", n);

 return 0;
}
Output:

Enter a positive integer: 29
29 is a prime number.

//==============================================================================
//==============================================================================

3. Write a program in C to print the Fibonacci series using iteration.

Ans- In this article we are going to learn how to print Fibonacci series in a C program using an iterative method.

#include <stdio.h>

int main() {
  int i, n;
  // initialize first and second terms
  int t1 = 0, t2 = 1;
  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;
  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
return 0;
}
Output:

Enter the number of terms: 10
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

//==============================================================================
//==============================================================================

4. Find the largest number among the three numbers.

Ans- In this article we are going to learn how to find the largest number among the three numbers in a C Programming language.

#include <stdio.h>
int main()
{
   int a = 1, b = 2, c = 3;
  // condition for a is greatest
  if (a > b && a > c)
  printf("%d", a);
  // condition for b is greatest
  else if (b > a && b > c)
    printf("%d", b);
    // remaining conditions
    // c is greatest
  else
    printf("%d", c);
return 0;
}
Output:

3

//==============================================================================
//==============================================================================

5. Write a C program to calculate Compound Interest.

Ans- In this article we are going to learn how to Write a c program to calculate compound interest.

#include <stdio.h>

// For using pow function we must
// include math.h
#include <math.h>

// Driver code
int main()
{
 // Principal amount
 double principal = 2300;

 // Annual rate of interest
 double rate = 7;

 // Time
 double time = 4;

 // Calculating compound Interest
 double amount
  = principal * ((pow((1 + rate / 100), time)));
 double CI = amount - principal;

 printf("Compound Interest is : %lf", CI);
 return 0;
}
Output:

Compound Interest is : 714.830823

//==============================================================================
//==============================================================================

6. Write a Program to convert the binary number into a decimal number.

Ans- In this article we are going to learn how to convert binary numbers into a decitmal number.

#include <stdio.h>

int main()
{
 int N = 11011;

 // Initializing base value a to 1
 int a = 1;
 int ans = 0;
 while (N != 0) {
  ans = ans + (N % 10) * a;
  N = N / 10;
  a = a * 2;
 }

 printf("%d", ans);
 return 0;
}
Output:

27

//==============================================================================
//==============================================================================

7. Write a Program to check if the year is a leap year or not.

Ans- In this article we are going to learn how to check if the year is a leap year or not.

#include <stdio.h>

// Function Declaration to check leap year
void leap_year(int year)
{
 // If a year is multiple of 400, then leap year
 if (year % 400 == 0)
  printf("%d is a leap year.\n", year);

 // If a year is multiple of 100, then not a leap year
 else if (year % 100 == 0)
  printf("%d is not a leap year.\n", year);

 // If a year is multiple of 4, then leap year
 else if (year % 4 == 0)
  printf("%d is a leap year.\n", year);

 // Not leap year
 else
  printf("%d is not a leap year.\n", year);
}

int main()
{
 leap_year(2000);
 leap_year(2002);
 leap_year(2008);

 return 0;
}
Output:

2000 is a leap year.
2002 is not a leap year.
2008 is a leap year.

//==============================================================================
//==============================================================================

8. Write a program to Factorial of a Number.

Ans- In this article we are going to learn how to write a program to factorial of a number.

#include <stdio.h>

// Calculating factorial using iteration
void factorial_iteration(int N)
{
 unsigned long long int ans = 1;
 for (int i = 1; i <= N; i++) {
  ans = ans * i;
 }

 printf("Factorial of %d is %lld\n", N, ans);
}

// Calculating factorial using recursion
int factorial(int N)
{
 if (N == 0)
  return 1;

 // Recursive call
 return N * factorial(N - 1);
}

int main()
{
 int n;
 n = 13;
 factorial_iteration(n);

 n = 9;
 printf("Factorial of %d using recursion:%d\n", n,
  factorial(n));

 return 0;
}
Output:

Factorial of 13 is 6227020800
Factorial of 9 using recursion:362880

//==============================================================================
//==============================================================================

9. Check whether a number is a palindrome.

Ans- In this article we are going to learn how to check whether a number is a palindrome.

#include <stdio.h>

// Checking if the number is
// Palindrome number
void check_palindrome(int N)
{
 int T = N;
 int rev = 0; // This variable stored reversed digit

 // Execute a while loop to reverse digits of given
 // number
 while (T != 0) {
  rev = rev * 10 + T % 10;
  T = T / 10;
 }

 // Compare original_number with reversed number
 if (rev == N)
  printf("%d is palindrome\n", N);
 else
  printf("%d is not a palindrome\n", N);
}

int main()
{
 int N = 13431;
 int M = 12345;

 // Function call
 check_palindrome(N);
 check_palindrome(M);

 return 0;
}
Output:

13431 is palindrome
12345 is not a palindrome

//==============================================================================
//==============================================================================

10. Write a C Program to check if two numbers are equal without using the bitwise operator.

Ans- In this article we are going to learn how to write a C Program to check if two numbers are equal without using the bitwise operator.

#include <stdio.h>

int main()
{
 int x = 1;
 int y = 2;

 // Using XOR
 // XOR of two equal numbers is 0
 if (!(x ^ y))
  printf(" %d is equal to %d ", x, y);
 else
  printf(" %d is not equal to %d ", x, y);

 return 0;
}
Output:

1 is not equal to 2

//==============================================================================
//==============================================================================

11. Write a C program to find the LCM of two numbers.

Ans- In this article we are going to learn how to write a C program to find the LCM of two numbers.

#include <stdio.h>

// minimum of two numbers
int Min(int Num1, int Num2)
{
 if (Num1 >= Num2)
  return Num2;
 else
  return Num1;
}

int LCM(int Num1, int Num2, int K)
{
 // If either of the two numbers
 // is 1, return their product
 if (Num1 == 1 || Num2 == 1)
  return Num1 * Num2;

 // If both the numbers are equal
 if (Num1 == Num2)
  return Num1;

 // If K is smaller than the
 // minimum of the two numbers
 if (K <= Min(Num1, Num2)) {

  // Checks if both numbers are
  // divisible by K or not
  if (Num1 % K == 0 && Num2 % K == 0) {

   // Recursively call LCM() function
   return K * LCM(Num1 / K, Num2 / K, 2);
  }

  // Otherwise
  else
   return LCM(Num1, Num2, K + 1);
 }

 // If K exceeds minimum
 else
  return Num1 * Num2;
}

int main()
{
 // Given N & M
 int N = 12, M = 9;

 // Function Call
 int ans = LCM(N, M, 2);

 printf("%d", ans);

 return 0;
}
Output:

36

//==============================================================================
//==============================================================================

12. Write a C Program to find the Maximum and minimum of two numbers without using any loop or condition.

Ans- In this article we are going to learn how to find the maximum and minimum of two numbers without using any loop or condition.

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a = 55, b = 23;

 // return maximum among the two numbers
 printf("max = %d\n", ((a + b) + abs(a - b)) / 2);

 // return minimum among the two numbers
 printf("min = %d", ((a + b) - abs(a - b)) / 2);

 return 0;
}
Output:

max = 55
min = 23

//==============================================================================
//==============================================================================

13. Write a Program in C to Print all natural numbers up to N without using a semi-colon.

Ans- In this article we are going to learn how to print all natural numbers up to N without using a semi-colon.

#include <stdio.h>
#define N 10

int main(int val)
{
 if (val <= N && printf("%d ", val) && main(val + 1)) {
 }
}// C program to print
// all natural numbers
// upto N without using semi-colon
#include <stdio.h>
#define N 10

int main(int val)
{
 if (val <= N && printf("%d ", val) && main(val + 1)) {
 }
}
Output:

1 2 3 4 5 6 7 8 9 10

//==============================================================================
//==============================================================================

14. Write a Program to create a pyramid pattern using C.

Ans- In this article we are going to learn how to create a pyramid pattern using C.

#include <stdio.h>

int main()
{
 int N = 5;

 // Outer Loop for number of rows
 for (int i = 1; i <= N; i++) {

  // inner Loop for space printing
  for (int j = 1; j <= N - i; j++)
   printf(" ");

  // inner Loop for star printing
  for (int j = 1; j < 2 * i; j++)
   printf("*");
  printf("\n");
 }
 return 0;
}
Output:

    *
   ***
  *****
 *******
*********

//==============================================================================
//==============================================================================

15. Write a program to form Pascal Triangle using numbers.

        1   
      1   1   
    1   2   1   
  1   3   3   1   
1   4   6   4   1
Ans- In this article we are going to learn how to write a program to form pascal triangle using numbers.

#include <stdio.h>

int main()
{
 int n = 5;
 
  
 for (int i = 1; i <= n; i++) {
  for (int j = 1; j <= n - i; j++) {
   printf(" ");
  }

  int x = 1;

  for (int j = 1; j <= i; j++) {
   printf("%d ", x);
   x = x * (i - j) / j;
  }
  printf("\n");
 }

 return 0;
}
Output:

        1   
      1   1   
    1   2   1   
  1   3   3   1   
1   4   6   4   1

//==============================================================================
//==============================================================================

16. Write a program to reverse an Array.

Ans- In this article we are going to learn how to write a program to reverse an Array.

#include <stdio.h>

void reverse(int* arr, int n)
{
 // Swapping front and back elements.
 for (int i = 0, j = n - 1; i < j; i++, j--) {
  int ele = arr[i];
  arr[i] = arr[j];
  arr[j] = ele;
 }
}

int main()
{

 int arr[] = { 1, 2, 3, 4, 5 };
 // Function Call
 reverse(arr, 5);

 // reverse array element printing
 for (int i = 0; i < 5; i++)
  printf("%d ", arr[i]);

 return 0;
}
Output:

5 4 3 2 1

//==============================================================================
//==============================================================================

17. Write a program to check the repeating elements in C.

Ans- In this article we are going to learn how to check the repeating elements in C.

#include <stdio.h>

int Sort(int arr[], int size)
{
 for (int i = 0; i < size - 1; i++) {

  for (int j = 0; j < size - i - 1; j++) {
   if (arr[j] > arr[j + 1]) {
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
   }
  }
 }
}

// find repeating element
void findRepeating(int arr[], int n)
{
 int count = 0;
 for (int i = 0; i < n; i++) {

  int flag = 0;
  while (i < n - 1 && arr[i] == arr[i + 1]) {
   flag = 1;
   i++;
  }
  if (flag)
   printf("%d ", (arr[i - 1]));
 }

 return;
}

int main()
{
 int arr[] = { 1, 3, 4, 1, 2, 3, 5, 5 };

 int n = sizeof(arr) / sizeof(arr[0]);
 
 Sort(arr,n);
 
 findRepeating(arr,n);

 return 0;
}
Output:

1 3 5

//==============================================================================
//==============================================================================

18. Write a Program to print the Maximum and Minimum elements in an array.

Ans- In this article we are going to learn how to print the maximum and minimum elements in an array.

#include <stdio.h>

void find_small_large(int arr[], int n)
{
 int min, max;

 // assign first element as minimum and maximum
 min = arr[0];
 max = arr[0];

 for (int i = 1; i < n; i++) {

  // finding smallest here
  if (arr[i] < min)
   min = arr[i]; // finding largest here
  if (arr[i] > max)
   max = arr[i];
 }
 printf("Maximum: %d and Minimum: %d\n", min, max);
}

int main()
{
 int arr[] = { 15, 14, 35, 2, 11, 83 };
 int len = sizeof(arr) / sizeof(arr[0]);

 // Function call
 find_small_large(arr, len);

 return 0;
}
Output:

Smallest: 2 and Largest: 83

//==============================================================================
//==============================================================================

19. Write a Program to sort First half in Ascending order and the Second in Descending order.

Ans- In this article we are going to learn how to sort first half in ascending order and the second half descending order.

#include <stdio.h>

void Sort_asc_desc(int arr[], int n)
{
 int temp;
 for (int i = 0; i < n - 1; i++) {
  for (int j = i + 1; j < n; j++) {
   if (arr[i] > arr[j]) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
 }

 // printing first half in ascending order
 for (int i = 0; i < n / 2; i++)
  printf("%d ", arr[i]);

 // printing second half in descending order
 for (int j = n - 1; j >= n / 2; j--)
  printf("%d ", arr[j]);
}

int main()
{
 int arr[] = { 11, 23, 42, 16, 83, 73, 59 };
 int N = sizeof(arr) / sizeof(arr[0]);

 Sort_asc_desc(arr, N);

 return 0;
}
Output:

11 16 23 83 73 59 42

//==============================================================================
//==============================================================================

20. Write a Program to find the transpose of a matrix.

Ans- In this article we are going to learn how to find the transpose of a matrix.

#include <stdio.h>

// This function stores transpose of A[][] in B[][]
void transpose(int N, int M, int A[M][N], int B[N][M])
{
 int i, j;
 for (i = 0; i < N; i++)
  for (j = 0; j < M; j++)
   B[i][j] = A[j][i];
}

int main()
{
 int M = 3;
 int N = 4;
 
 int A[3][4] = { { 1, 1, 1, 1 },
     { 2, 2, 2, 2 },
     { 3, 3, 3, 3 } };

 // Note dimensions of B[][]
 int B[N][M], i, j;

 transpose(N, M, A, B);

 printf("Result matrix is \n");
 for (i = 0; i < N; i++) {
  for (j = 0; j < M; j++)
   printf("%d ", B[i][j]);
  printf("\n");
 }

 return 0;
}
Output:

Result matrix is 
1 2 3 
1 2 3 
1 2 3 
1 2 3

//==============================================================================
//==============================================================================

21. Write a program to count the sum of numbers in a string.

Ans- In this article we are going to learn how to write a program to count the sum of numbers in a string.

#include <stdio.h>

int main()
{

 char s[] = "124259";

 int ans = 0;
 // iterate through all the number
 for (int i = 0; s[i] != '\0'; i++) {
  int ele = s[i] - 48;
  if (ele <= 9)
   ans += ele;
 }
 
 // print sum of the numbers
 printf("%d", ans);

 return 0;
}
Output:

23