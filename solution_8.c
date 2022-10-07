#include<stdio.h>
struct Student{

	int roll_No;
	char name[50];
	int age;
	char branch[30];
	char gender;
};

struct Student s1, s2;

int main()
{

  struct Student S1;
  
  scanf("%d\n", &S1.roll_No);
  scanf("%s\n", S1.name);
  scanf("%d\n", &S1.age);
  scanf("%s\n", S1.branch);
  scanf("%c\n", &S1.gender);
  
  printf("%d\n",S1.roll_No);
  printf("%s\n",S1.name);
  printf("%d\n",S1.age);
  printf("%s\n",S1.branch);
  printf("%c\n",S1.gender);

  return 0;
    
}
