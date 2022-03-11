#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool test_square (int square_part[3][3])
{
    int sum, x_hort, y_vert;

    sum = square_part[0][0] + square_part[0][1] + square_part[0][2];

    for (x_hort = 1; x_hort < 3; x_hort++){
        if ((square_part[x_hort][0] + square_part[x_hort][1] + square_part[x_hort][2]) != sum)
        {
            return false;
        }
    }

    for (y_vert = 0; y_vert < 3; y_vert++)
    {
        if ((square_part[0][y_vert] + square_part[1][y_vert] + square_part[2][y_vert]) != sum)
        {
            return false;
        }
    }

    if ((square_part[0][2] + square_part[1][1] + square_part[2][0]) != sum)
    {
        return false;
    }

    if ((square_part[0][0] + square_part[1][1] + square_part[2][2]) != sum)
    {
        return false;
    }

    return true;
}

int main ()
{
    int square[3][3];
    long long total_squares = 0;
    int square_num, x_hort, y_vert;

    bool one = false;
    bool two = false;
    bool three = false;
    bool four = false;
    bool five = false;
    bool six = false;
    bool seven = false;
    bool eight = false;
    bool nine = false;

    time_t t;

    srand((unsigned) time(&t));

    build_square:

    one = false;
    two = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;

    for (x_hort = 0; x_hort < 3; x_hort++)
    {
        for (y_vert = 0; y_vert < 3; y_vert++)
        {
            add_number:

            square_num = ((rand() % 9) + 1);

            switch (square_num)
            {
                case 1:

                    if (one == true)
                    {
                        goto add_number;
                    }
                    one = true;
                    square[x_hort][y_vert] = 1;
                    break;

                case 2:

                    if (two == true)
                    {
                        goto add_number;
                    }
                    two = true;
                    square[x_hort][y_vert] = 2;
                    break;

                case 3:

                    if (three == true)
                    {
                        goto add_number;
                    }
                    three = true;
                    square[x_hort][y_vert] = 3;
                    break;

                case 4:

                    if (four == true)
                    {
                        goto add_number;
                    }
                    four = true;
                    square[x_hort][y_vert] = 4;
                    break;

                case 5:

                    if (five == true)
                    {
                        goto add_number;
                    }
                    five = true;
                    square[x_hort][y_vert] = 5;
                    break;

                case 6:

                    if (six == true)
                    {
                        goto add_number;
                    }                    
                    six = true;
                    square[x_hort][y_vert] = 6;
                    break;

                case 7:

                    if (seven == true)
                    {
                        goto add_number;
                    }
                    seven = true;
                    square[x_hort][y_vert] = 7;
                    break;

                case 8:

                    if (eight == true)
                    {
                        goto add_number;
                    }
                    eight = true;
                    square[x_hort][y_vert] = 8;
                    break;

                case 9:

                    if (nine == true)
                    {
                        goto add_number;
                    } 
                    nine = true;
                    square[x_hort][y_vert] = 9;
                    break;
            }
        }
    }

    total_squares++;

    if (test_square(square) == true)
    {
        printf ("Total number of squares generated and tested before success: %d\n", total_squares);
        printf ("\n");
        printf ("[%d %d %d]\n", square[0][0], square[0][1], square[0][2]);
        printf ("[%d %d %d]\n", square[1][0], square[1][1], square[1][2]);
        printf ("[%d %d %d]\n", square[2][0], square[2][1], square[2][2]);
    }
    else
    {
        goto build_square;
    }
    
    return 0;
}