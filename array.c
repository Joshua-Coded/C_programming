#include <stdio.h>

float data[5];
float total;
float average;

int main()
{
  data[0] = 324.6;
  data[1] = 657.6;
  data[2] = 43.5;
  data[3] = 763.0;
  data[4] = 45.0;

  total = data[0] + data[1] + data[2] + data[3] + data[4];
  average = total / 5.0;

  printf("Total %f Average %f\n", total, average);
  return (0);

}
