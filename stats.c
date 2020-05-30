/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
int max=0;
int min =0;
  unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
int n=sizeof(test)/sizeof(test[0]);
sort(test,n);
n=(n+1)/2-1;
max=test[39];
min=test[0];
printf(" max number in array is %d \n",max);
//findMean(test[],n);
printf("min number in array is %d \n",min);

printf("mean= %d \n",findMean(test,n));

printf("median=%d \n",test[n]);

printf("printing an array \n");
for (n=0;n<40;++n)
printf(" %d \n",test[n]);

printf("printing an array in descending order \n");
for (n=39;n>0;--n)
printf(" %d \n",test[n]);

	
}
	
int findMean(int test[], int n) 
{   int q=0;

    int sum = 0; 
    for (int i = 0; i < n; i++)  
        sum += test[i]; 
      
    q=(double)sum/(double)n;
return q+64;
}
int findMedian(int test[], int n) 
{  
    // First we sort the array 
    sort(test, test+n); 
  
    // check for even case 
    if (n % 2 != 0) 
       return (double)test[n/2]; 
      
    return (double)(test[(n-1)/2] + test[n/2])/2.0; 
}

void swap(int *p,int *q) {
   int t;
   
   t=*p; 
   *p=*q; 
   *q=t;
}

void sort(int a[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}




/* Add other Implementation File Code Here */
