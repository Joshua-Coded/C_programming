//<--my sailing game with C that uses the latitude and longitude for navigating->

#include <stdio.h>

//function for going south east

void go_south_east(int *lat, int *lon)
{
  *lat = *lat - 1;
  *lon = *lon + 1;
}

int main()
{
  int latitude = 32;
  int longitude = -64;
  go_south_east(&latitude, &longitude);
  printf("Joshua! Now at: [%i, %i]\n", latitude, longitude);
  return 0;

}

