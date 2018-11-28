// A Mario pyramid
#include <cs50.h>
#include <stdio.h>



int main(void)
{
    int heights;
    // bring about the height from 1 to 23
    do
    {
        printf("Please tell me what is the height of the pyramid: ");
        heights = get_int();
    }
    // the formula for the height
    while (heights < 0 || heights > 23);

// formula for line, where line is less than heights and if its less then height, you keep adding lines
    for (int line = 0; line < heights; line++)
    {
        // formula for spaces, depending on the int for heights it will be subtracted with the line which is always 0, if it is greater then one it subtracts the spaces
        for (int spaces = heights - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        // formula for hashes
        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }
        // to make new lines for each line of hashes
        printf("\n");
    }

}

