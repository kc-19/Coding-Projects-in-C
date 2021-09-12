#include <cs50.h>
#include <stdio.h>

int get_height(void);
void space(int n);
void hash(int m);

int height;
int main(void)
{
    //prompt for height
    get_height();

    //new variable to increment
    int user = height - 1;
    int i = 1;
    do
    {
        space(user);
        hash(i);
        printf("  ");
        hash(i);
        printf("\n");
        user--;
        i++;
    }
    while (user >= 0);
}

//prompt for user input
int get_height(void)
{
    do
    {
        height = get_int("Height: \n");
    }
    while (height > 8 || height < 1);
    return height;
}

void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void hash(int m)
{
    for (int j = 0; j < m; j++)
    {
        printf("#");
    }
}
