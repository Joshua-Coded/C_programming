#include <stdio.h>
#include <string.h>

char line[100];

int main()
{
  printf("Enter a text: ");
  fgets(line, sizeof(line), stdin);

  printf("the length of line is: %ld\n", strlen(line));
  return (0);
}
