#include<stdio.h>
#include "header.h"

int main() {

 	FILE *fptr,*fptr2;

 	fptr = fopen("ex.txt","r");
 	fptr2 = fopen("ex.txt","r");
 	

	int words = 0, lines=0;
 	char string[100], buffer[100];

 	while(fgets(string,100,fptr)!=NULL)
 	{
 		lines++;
 		 
 	}
 	
 	while(fscanf(fptr2,"%s",buffer)!=EOF)
 	{
 		words++;
 		//if(*string == '\n') lines++;
 	}

 	printf("number of Words = %i and Lines = %i in a file\n",words, lines);

 	return 0;

 }
