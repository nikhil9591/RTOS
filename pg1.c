#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fptr1,*fptr2,*fptr3;	//file pointer declaration
	char word1[50],word2[50];	
	int result;
	char read_file1[10],read_file2[10],write_file[10]; //file name variables
	
	printf("Enter the first file name to read\n");
	scanf("%s",read_file1);
	
	printf("Enter the second file name to read\n");
	scanf("%s",read_file2);
	
	printf("Enter the file name to write\n");
	scanf("%s",write_file);
	
	fptr1 = fopen(read_file1,"r");	//read mode of file
	fptr2 = fopen(read_file2,"r");	
	fptr3 = fopen(write_file,"w");	//write mode of file
	
	
	if(fptr1 == NULL || fptr2 == NULL)
	{
		printf("error\n");
		exit(0);
	} 
	else
	{
		while((fscanf(fptr1,"%s",word1)==1) && (fscanf(fptr2,"%s",word2)==1))
		{
			
			result = strcmp(word1,word2);
			
			if((result == 0))
			continue;
			else		
			fprintf(fptr3,"%s %s",word1,word2);
			
		}
	}
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	return 0;
}
