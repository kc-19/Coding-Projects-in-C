#include <cs50.h>
#include <stdio.h>

int get_start_size(void);
int get_end_size(void);
int number_years(void);
int i;
int main(void)
{
    // Prompt for start size
    get_start_size();

    // TODO: Prompt for end size
    get_end_size();

    // TODO: Calculate number of years until we reach threshold
    number_years();

    // TODO: Print number of years
    printf("Years: %i\n", i);
}
int s;
int e;

//prompt user for start more than 9
int get_start_size(void)
{

    do
    {
        s = get_int("What is the start size?\n");
    }
    while (s < 9);
    return s;
}

//prompt user for start more than end
int get_end_size(void)
{
    do
    {
        e = get_int("What is the end size?\n");
    }
    while (e < s);
    return e;
}


//calculate number of years
int number_years(void)
{
    i = 0;
    while (s < e)
    {
        s = s + (s / 3) - (s / 4);
        i++;
    }
    return i;
}
