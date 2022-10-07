#include<stdio.h>
#include "header.h"

int main() {

 	FILE *fptr;

 	fptr = fopen("input.txt","r");

 	char string[100];
 	
 	int count = 0;
 	
 	if(fptr == NULL){
 		printf("file does not exist\n");
 	}
 	else{

 	while(fscanf(fptr,"%s",string)!=EOF)

 		 count += char_count(string);
	
	}
	printf("number of charecter in a string is %i \n",count);
	
	fclose(fptr);
	
 	return 0;

 }
