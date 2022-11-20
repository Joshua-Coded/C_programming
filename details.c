#include <stdio.h>
#include <string.h>
//program for printing name

//char *name;

char name[20];
int  ssn;
int  date_of_birth;


int main()
{
  //name = "Joshua";

  strcpy(name, "Joshua Alana");
  printf("my name is %s\n", name);

  ssn = 1234545;
  printf("my social security number is %d\n", ssn);

  date_of_birth = 19102001;
  printf("my date of birth is %d\n", date_of_birth);
  
return (0);
}
