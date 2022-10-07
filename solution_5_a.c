#include<stdio.h>
#include "header.h"

int main() {

 	FILE *file_pointer1,*file_pointer2, *file_pointer3;

 	file_pointer1 = fopen("input.txt","r");
 	file_pointer2 = fopen("even.txt","w");
 	file_pointer3 = fopen("odd.txt","w");
 	
 	char buffer[100];
 	
 	while(fscanf(file_pointer1,"%s",buffer)!=EOF){
 			
 		if(char_count(buffer)%2==0){
 		   
 			fputs(buffer,file_pointer2);
 		}else{
 			fputs(buffer,file_pointer3);
 		} 
 	}
 	return 0;

 }
