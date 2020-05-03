/**
* contains the code for the Rock Paper Scissors game
*
* @author Gary Davies <davies-g2@ulster.ac.uk>
* @license https://www.gnu.org/licenses/gpl-3.0.en.html
* @copyright CDGG 2020
*
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* allows the user to play a game of rock paper scissors with a program instead of another human
*
* When the program runs, the command window should ask the user if they want to play Rock Paper Scissors. If the user enters
* anything other than Y or N (not case-sensitive), the command window should remind them what they should enter in and then
* close. If the user enters N, the command window should say bye and then close. If the user enters Y, the command window
* should tell the user how to play and ask if they still want to play. If the user enters anything other than Y or N
* (not case-sensitive), the command window should remind them what they should enter in and then close. If the user enters
* N, the command window should say bye and then close. If the user enters Y, the command window should prompt the user to
* make a play. If the user enters anything other than R, P or S (not case-sensitive), the command window should remind them
* how to play and close. If the user enters R, P or S (not case-sensitive), the command window should tell the user the
* choice they've made, the program's randomly generated choice and whether the user has won, drawn or lost.
*
* @todo make the code run when placed into a class and functions of its own 
*/
int main(void)
{
    char introquestionChoice;
    char readyquestionChoice;
    char humanChoice;
    int humanNumber = 0;
    srand(time(NULL));
    int computerNumber = rand() % 3 + 1;

    std::cout << "Do you want to play Rock Paper Scissors against a program? Type Y (Yes) or N (No).\n";
    std::cin >> introquestionChoice;

    switch (introquestionChoice)
    {
        case 'Y':
        case 'y':
            std::cout << "Type R (Rock), P (Paper) or S (Scissors) to make a play. Are you ready? Type Y (Yes) or N (No).\n";
            std::cin >> readyquestionChoice;
            switch (readyquestionChoice)
            {
                case 'Y':
                case 'y':
                    std::cout << "Rock, Paper, Scissors, Go!\n";
                    std::cin >> humanChoice;
                    switch (humanChoice)
                    {
                        case 'R':
                        case 'r':
                            humanNumber = 1;
                            break;
                        case 'P':
                        case 'p':
                            humanNumber = 2;
                            break;
                        case 'S':
                        case 's':
                            humanNumber = 3;
                            break;
                        default:
                            std::cout << "You lose. Please type R (Rock), P (Paper) or S (Scissors) next time. Bye.\n";
                            break;
                    }
                    break;
                case 'N':
                case 'n':
                    std::cout << "Okay. Bye then.\n";
                    break;
                default:
                    std::cout << "Please type Y (Yes) or N (No) next time. Bye.\n";
                    break;
            }
            break;
        case 'N':
        case 'n':
            std::cout << "Okay. Bye then.\n";
            break;
        default:
            std::cout << "Please type Y (Yes) or N (No) next time. Bye.\n";
            break;
    }

    if (humanNumber == 1 && computerNumber == 1)
    {
        std::cout << "You play Rock. The program plays Rock. Draw.\n";
    }
    else if (humanNumber == 1 && computerNumber == 2)
    {
        std::cout << "You play Rock. The program plays Paper. You lose.\n";
    }
    else if (humanNumber == 1 && computerNumber == 3)
    {
        std::cout << "You play Rock. The program plays Scissors. You win.\n";
    }
    else if (humanNumber == 2 && computerNumber == 1)
    {
        std::cout << "You play Paper. The program plays Rock. You win.\n";
    }
    else if (humanNumber == 2 && computerNumber == 2)
    {
        std::cout << "You play Paper. The program plays Paper. Draw.\n";
    }
    else if (humanNumber == 2 && computerNumber == 3)
    {
        std::cout << "You play Paper. The program plays Scissors. You lose.\n";
    }
    else if (humanNumber == 3 && computerNumber == 1)
    {
        std::cout << "You play Scissors. The program plays Rock. You lose.\n";
    }
    else if (humanNumber == 3 && computerNumber == 2)
    {
        std::cout << "You play Scissors. The program plays Paper. You win.\n";
    }
    else if (humanNumber == 3 && computerNumber == 3)
    {
        std::cout << "You play Scissors. The program plays Scissors. Draw.\n";
    }
}