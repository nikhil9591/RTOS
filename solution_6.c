#include<stdio.h>

int main() {

 	FILE *file_pointer_r, *file_pointer_w;

 	file_pointer_r = fopen("read.txt","r"); 	
        
        file_pointer_w = fopen("write.txt","w");
        
        char ch[100] ;
        
        if(file_pointer_r == NULL && file_pointer_w == NULL){
        
        	printf("files does not exists\n");
        
        }
        
        else{
      
        while(fgets(ch,100,file_pointer_r)!=NULL){
              
              fputs(ch,file_pointer_w);
        
        }
 	
 	fclose(file_pointer_r);
	
	fclose(file_pointer_w);
 	
 	}
 	
 	return 0;

 }
