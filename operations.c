#include "header.h"
#include<stdio.h>
int sum(int arr[], int size)//sum of array elements
{
	int i, sum_of_elem=0;
	for(i=0; i<size; i++)
	{
		sum_of_elem+=arr[i];
	}

	return sum_of_elem;
}

float average(int sum,int size)
{
	float result=0;
	return	result =(float) sum/size;
}

int product(int arr[], int size)
{
	int i, product_of_elements=1;
	for(i=0; i<size; i++)
	{
		product_of_elements*=arr[i];
	}
	return product_of_elements;
}

int char_count(char str[])

{

	int i=0;
	
	while(str[i]!='\0')

	{
		i++;
	}

	return i;

}
