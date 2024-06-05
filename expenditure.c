/*
    Lab 1
    Revisiting C
    1.  Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified.
        Use arrays to construct a table, display the table of expenditure and find the sum and average.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int start_year, end_year;

    printf("Enter the start year: ");
    scanf("%d", &start_year);

    printf("Enter the end year: ");
    scanf("%d", &end_year);

    int num_of_years = end_year - start_year + 1;
    int expenditure[12][3];

    char months[12][5] = {"Jan.", "Feb.", "Mar.", "Apr.", "May", "Jun.",
                          "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec."};

    // Read the expenditures
    for (int i = 0; i < num_of_years; ++i)
    {
        printf("\nEnter the expenditures for months of the year %d\n", start_year + i);

        for (int j = 0; j < 12; ++j)
        {
            printf("%s: ", months[j]);
            scanf("%d", &expenditure[j][i]);
        }
    }

    // Display the expenditure table
    printf("\nExpenditure table:\n");

    // Top border
    for (int i = 0; i < 136; ++i)
    {
        putchar('-');
    }

    printf("\n| %4s |", "Year"); // Occupy 6 blocks before '|'

    for (int i = 0; i < 12; ++i)
    {
        printf("%6s%2c|", months[i], ' ');
    }

    printf("%6s%3c|", "Sum", ' ');
    printf("%6s%3c|\n", "Avg", ' ');

    // Bottom border
    for (int i = 0; i < 136; ++i)
    {
        putchar('-');
    }

    // Print the expenditure table
    for (int i = 0; i < num_of_years; ++i)
    {
        printf("\n| %4d |", start_year + i);

        int year_sum = 0;
        for (int j = 0; j < 12; ++j)
        {
            printf("%7d |", expenditure[j][i]);
            year_sum += expenditure[j][i];
        }

        printf("%8d |%8.2f |\n", year_sum, year_sum / 12.0f);

    }

   
}