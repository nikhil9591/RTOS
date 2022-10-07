#include<stdio.h>
#include "header.h"

int main(int argc, char *argv[]) {

 	FILE *file_pointer1, *file_pointer2, *file_pointer3;

 	file_pointer1 = fopen(argv[1],"r");
 	
 	file_pointer2 = fopen(argv[2],"w");
 	
 	file_pointer3 = fopen(argv[3],"w");
 	
 	char buffer[100];
 	
 	int count = 0;
 	
 	if(file_pointer1 == NULL && file_pointer2 == NULL && file_pointer3 == NULL){
 	
 		printf("file does not exist\n");
 	
 	}
 	
 	else{
 	
 	while(fscanf(file_pointer1,"%s",buffer) != EOF){
 	   	
 	   	count++;
 	   	
 	   	if(count%2 == 0)
 		
 		fprintf(file_pointer2,"%s ",buffer);
 		
 		else
 		
 		fprintf(file_pointer3,"%s ",buffer);
 		
 	}
 	
 	fclose(file_pointer1); 
 	
 	fclose(file_pointer2); 
 	
 	fclose(file_pointer3);
 	
 	}
 	
 	return 0;

 }
