// WAP to find all the prime numbers between two numbers using functions

#include <stdio.h>
 int start, end;

 int main()
 {
 printf("Enter the starting number: ");
 scanf("%d", &start);
 printf("Enter the ending number: ");
 scanf("%d", &end);


 printf("Prime numbers between %d and %d are:\n", start, end);
 for (int num = start; num <= end; num++)
{
 if (Prime(num))
{
 printf("%d ", num);
 }
}
 printf("\n");

 return 0;
 }

 int Prime(int n) {

 if (n < 2) 
{
 return 0;
}

 for (int i = 2; i < n; i++) 
{
 if (n % i == 0) 
{
 return 0;
}
}
 return 1;
}
