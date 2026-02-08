#include <cs50.h>
#include <stdio.h>

// prototype
void buildStair(int h);

int main(void)
{
    int h = 1;
    do
    {
        h = get_int("Height of stair: \n");
    }
    while (1 > h || h > 8);

    buildStair(h);
}

void buildStair(int h)
{
    // loop that builds the stair at the right direction
    for (int i = 1; i <= h; i++)
    {
        for (int k = h; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
