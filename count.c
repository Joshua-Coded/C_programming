// the count game for numbers and letters
#include <stdio.h>
#include <stdlib.h>

int main()

{

  char card_name[3];
  puts("Enter a count");
  scanf("%2s", card_name);

  // initialize our value starting from 0

  int val = 0;
  if(card_name[0] == 'Q')

    {

      val = 10;
    } else if(card_name[0] == 'K'){
      val = 10;
    } else if(card_name[0] == 'T')
{
  val = 10;
 } else if(card_name[0] == 'A')
    {
      val = 11;
    } else{
    val = atoi(card_name);
  }

  // check if the value is between 3 and 6
  if((val > 2) && (val < 7)) 
    puts("Count has gone high");

  else if(val == 10)
    puts("Count has come down");

  return 0;


}
