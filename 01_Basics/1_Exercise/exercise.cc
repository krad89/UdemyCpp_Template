#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            int sum = i + j;
            std::cout << "i: " << i << " , j: " << j << " := ";

            if (sum % 2 == 0)
            {
                std::cout << "Gerade!" << std::endl;
            }
            else
            {
                std::cout << "Ungerade!" << std::endl;
            }
        }
    }
}
