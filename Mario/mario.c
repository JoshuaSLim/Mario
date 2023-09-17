#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {
        for (int k = h; k - i > 1; k--)
        {
            printf(" ");
        }

        for (int j = 0; j - 1< i; j++)
        {
            printf("#");
        }

        for (int m = 0; m < 2; m++)
        {
            printf (" ");
        }

        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        printf("\n");
    }

}