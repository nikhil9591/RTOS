#include<stdio.h>
#include "header.h"

int main() {

 	FILE *fptr;

 	fptr = fopen("ex.txt","r");

 	char string[100];
 	
 	if(fptr == NULL){
 		printf("file does not exist\n");
 	}
 	else{

 	while(fscanf(fptr,"%s",string)!=EOF)

 	printf("number of charecter in a string is %i \n",char_count(string));
	}
 	return 0;

 }
