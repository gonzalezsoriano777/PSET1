#include <cs50.h>
#include <stdio.h>


// int main(void)
// {
//  int multipleWhiles(int anAmount)
// {
//    int change = anAmount;
//    int coins = 0;

//   while(change >= 25)
//   {
//     change -= 25;
//     coins++;
//   }
//   while(change >= 10)
//   {
//    change -= 10;
//    coins++;
//   }
//   while(change >= 5)
//   {
//    change -= 5;
//    coins++;
//   }
//   while(change >= 1)
//   {
//     change -= 1;
//     coins++;
//   }
//   return coins;
//  }
// }



int main(void)
{
    float cash;
    int num;
    int change;

    while (true, "\n")
    {
        // Takes the input of the changed owed back
        printf("Hello kind sir! How much change is owed back?\n");
        cash = get_float();

        if (cash > 0)
        {
            break;
        }
    }

    // to be able to convert a decimal into an integer..
    num = cash * 100;

    // to actually change the number of coins
    change = 0;

    // while loops for quarter
    while (num >= 25)
    {
        // changes the number of quarters then, switches to the next available coin for the change.. continuing thr loop until the change is given properly.
        change += 1;
        num = num - 25;
    }

    while (num >= 10)
    {
        change += 1;
        num = num - 10;
    }

    while (num >= 5)
    {
        change += 1;
        num = num - 5;
    }

    printf("%i\n", change + num);
    // prints the integer in a new line, adding both change (change of number of coins) and num (converted into an int with the number of cents available for change)

    return 0;
}