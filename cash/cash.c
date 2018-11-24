#include <cs50.h>
#include <stdio.h>

int main(void)
 {
       float cash;
       int num;
      int count;

      while(true)
      {
          // Takes the input of the changed owed back
         printf("Hello kind sir! How much change is owed back?\n");
        cash = get_float();

      if(cash > 0)
      {
          break;
      }
     }

     // to be able to convert a decimal into an integer..
     num = cash * 100;

     // to actually count the number of coins
     count= 0;

    // while loops for quarter
     while (num >= 25)
     {
      // counts the number of quarters then, switches to the next available coin for the change.. continuing thr loop until the change is given properly.
      count += 1;
      num = num - 25;
     }

     while (num >= 10)
     {
      count += 1;
      num = num - 10;
     }

     while (num >= 5)
     {
      count += 1;
      num = num - 5;
     }

        printf("%i\n", count + num); // prints the integer in a new line, adding both count (count of number of coins) and num (converted into an int with the number of cents available for change)

        return 0;
}