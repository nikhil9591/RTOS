#include<stdio.h>
#include "header.h"

int main() {
int  i=0, num, arr[100];

 	printf("enter the numbers\n");
 	
 	while(1)
 	{
 		scanf("%d",&num);
 		
 		if(num==888) break;
 		
 		arr[i] = num;
 		
 		i++;
 	}
 	
 	printf("sum = %d\n",sum(arr,i));
	
	printf("average = %2f\n",average(sum(arr,i),i));
	
	printf("product = %d\n",product(arr,i)); 	
 
 return 0;
 }
