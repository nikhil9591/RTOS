#include<stdio.h>
#include "header.h"

int main() {

 	FILE *fptr;

 	fptr = fopen("Entry.txt","w+");
 	
 	char c;

 	while(1)
 	{
 	  c = fgetc(stdin);
 	  
 	  if(c == 10) break;
 	  
 	  fputc(c,fptr);
 	}

	fclose(fptr);
 	return 0;

 }
