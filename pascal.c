/*
 * File Name:    pascal_triangle.c
 * Description:  A program that generates Pascal's Triangle based on the number
                 of rows entered by the user using binomial coefficients.
 * Written by:   Muhammad Qasim
 * Date:         March 16, 2026
                                                                                */

#include <stdio.h>

int main()
{
    int n, i, j, k, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            int val = 1;

            for (k = 0; k < j; k++)
            {
                val = val * (i - k) / (k + 1);
            }
            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}
