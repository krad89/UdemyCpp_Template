#include <iostream>
#include <stdlib.h>

#define LEN_X 10u
#define LEFT 'a'
#define RIGHT 'd'

int main()
{
    bool repeat = true;

    while (repeat)
    {
        unsigned int player = 0;
        unsigned int start = 0;
        unsigned int goal = LEN_X - 1;

        char move;
        bool finished = false;

        while (!finished)
        {
            for (unsigned int i = 0; i < LEN_X; i++)
            {
                if ((i != start) && (i != goal) && (i != player))
                {
                    std::cout << '.';
                }
                else if (i == player)
                {
                    std::cout << 'P';
                }
                else
                {
                    std::cout << '|';
                }
            }

            std::cin >> move;
            system("clear");

            if (LEFT == move)
            {
                if (player > start)
                {
                    player--;
                    std::cout << "You moved left!";
                }
                else
                {
                    std::cout << "You bounced!";
                }
            }
            else if (RIGHT == move)
            {
                if (player < goal)
                {
                    player++;
                    std::cout << "You moved right!";
                }
                else
                {
                    std::cout << "You bounced!";
                }
            }
            else
            {
                std::cout << "Unkrecognized move!" << std::endl;
            }
            if (player == goal)
            {
                finished = true;

                std::cout << "Youn won the game!";
            }
        }

        std::cout << "Play again? (0 = No, 1 = Yes)" << std::endl;
        std::cin >> repeat;

        system("clear");
    }

    return 0;
}
