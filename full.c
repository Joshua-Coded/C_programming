#include <stdio.h>
#include <string.h>

char first[100];
char last[100];
char full_name[200];

int main()
{
  printf("Enter first name: ");
  fgets(first, sizeof(first), stdin);
  first[strlen(first) - 1 ] = '\0';
  strcpy(first, first);

  printf("Enter second name: ");
  fgets(last, sizeof(last), stdin);
  last[strlen(last) - 1 ] = '\0';
  strcpy(last, last);
  
  strcpy(full_name, first);

  strcat(full_name, " ");
  strcat(full_name, last);

  printf("The full name is %s\n", full_name);
  return (0);

}
