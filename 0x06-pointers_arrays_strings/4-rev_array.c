#include "holberton.h"
/*
* void reverse_array - reverses the content of,
* an array of integers
* return - none
*/void reverse_array(int *a, int n)
{
int i;
int j;
if (n % 2 == 0)
   {
     for (i = 1; i < n / 2; i++)
       {
	 j = a[i - 1];
	 a[i - 1] = a[n - i];
	 a[n - i] = j;
       }
   }
 else
   {
     for (i = 1; i < n / 2 + 1; i++)
       {
	 j = a[i - 1];
	 a[i - 1] = a[n - i];
	 a[n - i] = j;
     }
   }
return;
}
