#include <stdio.h>
#include <stdlib.h>
int main ()
{ int n;
		printf("\nGenerator of random numbers \n\n\n");
		printf("Enter the number of positive integers: n = ");
 scanf ("%d", &n);
 printf("\n\n The objectives of random numbers in the interval [-1000,500]:\n");
 for (int i=0; i<n; i++)
 { if (i%10==0) printf("\n");// Генерація цілого випадкового числа:
 int number = rand()%1000-500;
 printf("%7d", number);
 }
 int m;
 printf("\n\n Enter the number of valid numbers: m = ");
 scanf ("%d", &m);
 printf("\n\n Random valid numbers in the interval [5,10]:\n");
 for (int i=0; i<m; i++)
 { if (i%10 == 0) printf("\n");//Генерація дійсного випадкового числа:
 float number = (float)rand()/RAND_MAX*5.0-10.0;
 printf("%7.1f", -number);
 }
 return 0;
}
