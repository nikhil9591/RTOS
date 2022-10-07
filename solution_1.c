
#include<stdio.h>

#include "header.h"

#include<stdlib.h>

int main(int argc, char* argv[])
{

 	 int add, prdt; 
 
         float avg;
 
         int i ,size = argc-1, temp, arr[size];
 
 	for(i=1; i<=size; i++)
 	{
 		temp = atoi(argv[i]);
 		
 		arr[i-1] = temp;
 	}
 
        add = sum(arr,size);
   
        avg = average(add,size);
   
        prdt = product(arr,size);
 
        printf("sum = %d,average = %2f, product = %d\n",add,avg,prdt);
 

 	return 0;

 }
