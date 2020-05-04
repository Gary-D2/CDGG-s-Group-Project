// Main Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
/**
* @copyright CDGG 2020
* Menu layout Reference from: cplusplus.com/forum/beginner/179939/ - Main Menu
* 
* @license https://www.gnu.org/licenses/gpl-3.0.en.html - RPS Game
* All going well, this should display 5 games and produce the code for them.
* allowing you to exit after completion.
* There is "some" form of Data Validation.
*
*
*
*/

#include <iostream>   // Allows files to be read.
#include <string>     // Allows strings to be read (and not appear as Hexe's (?)).
#include <stdlib.h>   // Standard libary of functions (via header file).
#include <time.h>     // Allows games that rely on time specific functions to run.
using namespace std;  // eliminates the need to write "std::" everytime.


class Card //Gavin: This Card class is used to generate a virtual card 
{
private:
	int rank; //These class members can only be accessed by the Card class
	int suit;

public: //These functions will be called later on in the code
	Card() {
		srand(time(NULL));
		//Srand is seeded with time to generate a psuedo random number
		rank = (1 + (std::rand() % (int)(13))); // Generates a number between 1 and 13 representing the rank of the card
		suit = (1 + (std::rand() % (int)(4))); // Generates a number between 1 and 4 representing the 4 different suits

	}

	int get_rank()
	{
		return rank;

	}

	string get_rank_string() //Converts the given generated rank to the face value of the card
	{
		if (rank == 1) return "Ace";
		if (rank == 2) return "Two";
		if (rank == 3) return "Three";
		if (rank == 4) return "Four";
		if (rank == 5) return "Five";
		if (rank == 6) return "Six";
		if (rank == 7) return "Seven";
		if (rank == 8) return "Eight";
		if (rank == 9) return "Nine";
		if (rank == 10) return "Ten";
		if (rank == 11) return "Jack";
		if (rank == 12) return "Queen";
		if (rank == 13) return "King";
	}

	int get_suit() {
		return suit;
	}
	string get_suit_string() //Converts the generated suit integer to one of the four suits
	{
		if (suit == 1) return "Diamonds";
		if (suit == 2) return "Hearts";
		if (suit == 3) return "Spades";
		if (suit == 4) return "Clubs";
	}

};

class newCard //This class is for selecting the dealers card
{             // Not ideal using a seperate class for the dealers card, but I ran into some issues
private:
	int newrank;
	int newsuit;

public:
	newCard()

	{
		newrank = (1 + (std::rand() % (int)(13)));
		newsuit = (1 + (std::rand() % (int)(4)));
	}
	int get_newrank()
	{
		return newrank;
	}
	string get_newrank_string() {
		if (newrank == 1) return "Ace";
		if (newrank == 2) return "Two";
		if (newrank == 3) return "Three";
		if (newrank == 4) return "Four";
		if (newrank == 5) return "Five";
		if (newrank == 6) return "Six";
		if (newrank == 7) return "Seven";
		if (newrank == 8) return "Eight";
		if (newrank == 9) return "Nine";
		if (newrank == 10) return "Ten";
		if (newrank == 11) return "Jack";
		if (newrank == 12) return "Queen";
		if (newrank == 13) return "King";
	}

	int get_newsuit()
	{
		return newsuit;
	}

	string get_newsuit_string()
	{
		if (newsuit == 1) return "Diamonds";
		if (newsuit == 2) return "Hearts";
		if (newsuit == 3) return "Spades";
		if (newsuit == 4) return "Clubs";
	}


};




int main()                                 // Starts Program's Main Menu
{

	unsigned short int response = 0;       // Allows user selection (Short non-minus value only)
	bool menuQuit = false;                 // Can only be a true or false statement
										   // and if false will terminate the program early
	while (menuQuit == false)              // While the program is not closed...
	{
		do
		{
			cout << "What game would you like to play?\n"
				<< " 1) Rock, Paper Sissors!\n"               //@ Gary Davies <davies-g2@ulster.ac.uk>
				<< " 2) Text Adventure!\n"                    //@ Dayo Law <law-D4@ulster.ac.uk>
				<< " 3) Hangman!\n"                           //@ -
				<< " 4) Hi-Lo Card Game!\n"                   //@ Gavin Slane <slane-g1@ulster.ac.uk>
				<< " 5) Close Program\n"
				<< ": ";

			// Data Validation with OR operator "||". Not sure how to do it any other way tbh...
			// (correct input) and then a bunch of gibberish will still work, but will only count the
			// correct input.

			for (cin >> response; response > 5 || !response; cin.clear(), cin.ignore(256, '\n'), cin >> response)
				cout << "Please input the value preceeding the program you wish to open\n";  // Invalid input warning
		} while (response > 5);                   // If the response is valid...

		switch (response)                         // It will select one of the 5 (cases) options

		{

		case 1:                                   // Option 1 - Contains the code for the Rock Paper Scissors game
			cout << "Rock, Paper, Sissors has been selected!\n\n";
			{
				int main(void);
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

					/**When the program runs, the command window should ask the user 
					    *if they want to play Rock Paper Scissors.If the user enters
						* anything other than Y or N(not case-sensitive), the command
						* window should remind them what they should enter inand then
						* close.If the user enters N, the command window should say byeand then close.
						* If the user enters Y, the command window
						* should tell the user how to playand ask if they still want to play.If the user enters anything
						* other than Y or N
						* (not case-sensitive), the command window should remind them what they should enter inand then close.
						* If the user enters
						* N, the command window should say byeand then close.If the user enters Y, the command window should prompt
						* the user to
						* make a play.If the user enters anything other than R, P or S(not case-sensitive), the command window
						* should remind them
						* how to play and close.If the user enters R, P or S(not case-sensitive), the command window should tell
						* the user the
						* choice they've made, the program's randomly generated choice and whether the user has won, drawn or lost.
						*
						*@todo make the code run when placed into a class and functions of its own
						*/

				};

				unsigned int choice;                              // Enabling user selection after code (game) is finished
				cout << "Do you want to return to main menu?\n";
				cout << "(1 = Close Application/2 = Main Menu)\n";

				// Same Data Validation, but with another variable (user selection) instead

				for (cin >> choice; choice > 2 || !choice; cin.clear(), cin.ignore(256, '\n'), cin >> choice)
					cout << "Please input the value preceeding the option you wish to select\n";

				switch (choice) {                                                                 // Presents 2 more choices

				case 1: cout << "Closing Application, Thank you for playing", (menuQuit = true);  // Ends Program
					break;
				case 2: (menuQuit = false);                                                       // Returns to while loop
					break;
				};

			};

			break;

		case 2:                                                                                  // Option 2
			cout << "Text Adventure has been selected!\n\n";

			{
				int main(); {

					cout << "Having some trouble encorperating my own code sorry.\n\n";
				};
				unsigned int choice;
				cout << "Do you want to return to main menu?\n";
				cout << "(1 = Close Application/2 = Main Menu)\n";

				for (cin >> choice; choice > 2 || !choice; cin.clear(), cin.ignore(256, '\n'), cin >> choice)
					cout << "Please input the value preceeding the option you wish to select\n";

				switch (choice) {

				case 1: cout << "Closing Application, Thank you for playing", (menuQuit = true); // Ends program
					break;
				case 2: (menuQuit = false);                                                      // Return to while loop above
					break;
				};
			};

			break;

		case 3:                                                                                  // Option 3
			cout << "Hangman has been selected!\n\n";

			{
/**
 *
 * HangmanGame.cpp
 * @author Ciara
 * @copyright CDGG 2020
 * @license GNU public license
 * referencing from www.cplusplus.com: www.cplusplus.com/forum/beginner/251608/  and www.cplusplus.com/forum/beginner/221193/
 *
 */
#include <iostream>
#include <string.h>
#include <stdlib.h>

#define MAXWORDSIZE 11

//a big issue with my code is that it has stopped allowing user input and automatically returns 0
class HangmanGame{
/**
 *
 *  @author Ciara
 *  This first section of code stores the 'gameboard' which will be shown throughout the game as
     the player attempts the game of Hangman
 *  The game will start with just one line ( | ) under the dashed line ( _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _)
      and characters e.g '0' or  '---' will be added as incorrect guesses are made throughout the duration of the game
 *
 *  This first section also contains the game instructions which will be shown on screen for the player and ends with 'std::cin >> start;' allowing the player to press any key and begin the game
 */

private:
    int GameStructure(){ //contains the layout of the Hangman lines and introduction
        
       char start{}; //allows user input of any character to begin game
       
       std::cout << "      Hangman      " << std::endl;
       std::cout << "___________________" << std::endl;
       std::cout << "|        |         " << std::endl;
       std::cout << "|        O         " << std::endl;
       std::cout << "|     ___|___      " << std::endl;
       std::cout << "|        |         " << std::endl;
       std::cout << "|        |         " << std::endl;
       std::cout << "|      _| |_       " << std::endl;
       std::cout << "|                  " << std::endl;
       std::cout << "|__________________" << std::endl;
       std::cout << "This is a simple game of Hangman!/n" << std::endl;
       std::cout << " You have seven guesses/n" << std::endl;
       std::cout << "The word has 11 letters... Good luck!!/n"<< std::endl;
       std::cout << " Please press any key to start.../n" << std::endl; //prompts user
     
       std::cin >> start; //allows user to type a character, allowing them to begin the game
       
       //attempt to prompt user input on console when running game
        return 0;
    };
    
 // Variables
    
    int Tries{6}; //stores number of attempts user is allowed: starts at 0 so even though there are 7             guesses the number is 6
    
    std::string word = "Mischevious"; // stores word which the user will be guessing

    
  // Correct/Incorrect Letters
       
    const char Correct  = ('M' | 'I' | 'S' | 'C' | 'H' | 'E' | 'V' | 'O' | 'U'); // guesses that would be correct

    const char Incorrect = ('A' | 'B' | 'D' |'F' | 'G' | 'J' | 'K' | 'L' | 'N' | 'P' | 'Q' | 'R' | 'T' | 'W' | 'X' | 'Y' | 'Z' ); //incorrect guesses

    
    
// Guess Inputs
    
    std::string lastguess{}; //allows word input before losing the game
    
    char guess{}; // for std::cin so that user can make a guess

    ///
    /**
     *
     * @author Ciara
     * The  section of code below contains the loops for game play
     *
     *
     * The idea is that as the player makes incorrect guesses a new line will be added to the screen, indicating that they have one less guess
     *   the player was told at the start of the game that they have 7 lives, so they will have 6 attempts to guess the letters and then will be prompted to guess
     *   the word
     *
     * If the player does not guess the word correctly they will be shown  "   GAME OVER   "
     * If the player guesses corectly they will see " YOU WIN!"
     *
     *If the player makes a correct guess the letter will be shown in mystery word area on the last line of the screen
     *  The loops should run through each of the letters as long as the player has attempts left
     */
   

    int Play(){
        
        std::cout << "Enter your guess! (Answer in capital letters please..)"; //prompts the player to enter a guess
        std::cin >> guess; // allows the player to input a letter
   
        
        while (Tries >= 0) //allows code to execute if there are still tries left
        if (guess == Correct ) //if the word contains the players guess it will show on screen
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|     M__________  " << std::endl; //If guess is M
            break;
            }
        else
            
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    _I_____I___   " << std::endl; // if guess is I
            break;
            }
     else
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    __S_______S   " << std::endl; // if guess is S
            break;
            }
    else
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    ___C_______   " << std::endl; // if guess is C
            break;
        }
    else
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    ____H______   " << std::endl; // if guess is H
            break;
            }

    else
        if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    _____E_____   " << std::endl; // if guess is E
            break;
            }
    else
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    ______V____   " << std::endl; //if guess is V
            break;
            }
    else
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    ________O__   " << std::endl; // if guess is O
            break;
            }
    else
            if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    _________U_   " << std::endl;// if guess is U
            break;
            }
    else
        if (guess == Correct)
            {
            std::cout << "      Hangman      " << std::endl;
            std::cout << "___________________" << std::endl;
            std::cout << "|        |         " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|                  " << std::endl;
            std::cout << "|    __________S   " << std::endl; //if guess is S
           
            std::cout << "YOU WIN!";  //This is in the wrong place as if they guessed s first it would show
            break;
                ;
            };
        
    
        
                 std::cout << "Enter your guess! (Answer in capital letters please..)"; //prompts the player to enter a guess
                 std::cin >> guess; // allows the player to input a letter
            
         if (guess == Incorrect)
    while (Tries >= 0)
        {
            switch (Tries)  {
            case 6:
             {
             std::cout << "      Hangman      " << std::endl;
             std::cout << "___________________" << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|        0         " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|__________________" << std::endl;
             std::cout << " You  have 6 tries left!"<< std::endl;
             break;
             }
             case 5:
             {
             std::cout << "      Hangman      " <<std::endl;
             std::cout << "___________________" <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|        O         " <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|__________________" <<std::endl;
             std::cout << " You  have 5 tries left!"<< std::endl;
             break;
             }
             case 4:
             {
             std::cout << "      Hangman      " <<std::endl;
             std::cout << "___________________" <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|        O         " <<std::endl;
             std::cout << "|        |___      " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|__________________" <<std::endl;
             std::cout << " You  have 4 tries left!"<< std::endl;
             break;
             }
             case 3:
             {
             std::cout << "      Hangman      " <<std::endl;
             std::cout << "___________________" <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|        O         " <<std::endl;
             std::cout << "|     ___|___      " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|__________________" <<std::endl;
             std::cout << " You  have 3 tries left!"<< std::endl;
             break;
             }
             case 2:
                    
             {
             std::cout << "      Hangman      " <<std::endl;
             std::cout << "___________________" <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|        O         " <<std::endl;
             std::cout << "|     ___|___      " <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|        |         " <<std::endl;
             std::cout << "|                  " <<std::endl;
             std::cout << "|__________________" <<std::endl;
             std::cout << " You  have 2 tries left!"<< std::endl;
             break;
             }
             case 1:
                    std::cout << "This is you last guess.. try and guess the word!";
                    std::cin >> lastguess;
             {
             std::cout << "      Hangman      " << std::endl;
             std::cout << "___________________" << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|        O         " << std::endl;
             std::cout << "|     ___|___      " << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|         |_       " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|__________________" << std::endl;
             break;
             }
              case 0:
                    
             {
             std::cout << "      Hangman      " << std::endl;
             std::cout << "___________________" << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|        O         " << std::endl;
             std::cout << "|     ___|___      " << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|        |         " << std::endl;
             std::cout << "|      _| |_       " << std::endl;
             std::cout << "|                  " << std::endl;
             std::cout << "|__________________" << std::endl;
             std::cout << "      GAME OVER    " << std::endl;
             break;
                 {
                     
            
                 }
             }
        }
           
        };
    
        
        std::cin.get();
        return 0;
}; //issue the code is not prompting user input and therefore automatically returning 0

};
                  
				unsigned int choice;
				cout << "Do you want to return to main menu?\n";
				cout << "(1 = Close Application/2 = Main Menu)\n";

				for (cin >> choice; choice > 2 || !choice; cin.clear(), cin.ignore(256, '\n'), cin >> choice)
					cout << "Please input the value preceeding the option you wish to select\n";

				switch (choice) {

				case 1: cout << "Closing Application, Thank you for playing\n\n", (menuQuit = true);
					break;
				case 2: (menuQuit = false);
					break;
				};
			};

			break;

		case 4:                                                      // Option 4 - Gavin's Hi-Lo Game
			cout << "Hi-Lo selected!\n\n";

			{
				bool PlayAgain = true; //This lets the user play another round if they wish
				while (PlayAgain)
				{
					int main();
					{
						int DealerRank;
						int PlayerRank;
						string Player;
						char HiLo, again;
						Card card;
						newCard newCard;


						cout << "Welcome to Hi Lo, What is your name?\n"; //Simply type in your name
						cin >> Player;

						PlayerRank = card.get_rank(); //Calling functions from the classes card and newCard
						DealerRank = newCard.get_newrank();




						cout << "You draw a " << card.get_rank_string() //Pulling the information on the randomly generated player card
							<< " of " << card.get_suit_string() << "\n";
						cout << "Will the next card be higher or lower? Enter 'h' for higher or 'l' for lower. \n ";
						cin >> HiLo;

						if (HiLo != 'h' && HiLo != 'l') //Ensures the player indicates higher or lower
							do
							{
								cout << "Invalid Response. Please enter 'h' for higher or 'l' for lower. \n";
								cin >> HiLo;
							}

						while (HiLo != 'h' && HiLo != 'l'); //Entering 'h' or 'l' will continue the game

							if ((HiLo == 'h' && DealerRank < PlayerRank) || //The code then decides whether the player is right or wrong
								(HiLo == 'l' && DealerRank > PlayerRank))

							{
								cout << "You lose " + Player; //The code is pulling the information on the dealers card
								cout << "\nThe next card was " << newCard.get_newrank_string() << " of " << newCard.get_newsuit_string() << "! Enter 'y' if you wish to play again\n";
								cin >> again;
								if (again != 'y')
								{
									PlayAgain = false;
								}
							}


							else

							{
								cout << "You win, congratulations " + Player;
								cout << "\nThe next card was " << newCard.get_newrank_string() << " of " << newCard.get_newsuit_string() << "! Enter 'y' if you wish to play again\n";
								cin >> again;
								if (again != 'y') //Selecting 'y' will run the game again with new cards
								{
									PlayAgain = false;
								}
							}
					}


				}  // Try to input your code here (without int main)
			};                                                                  // Replace the quotation marks
			unsigned int choice;
			cout << "Do you want to return to main menu?\n";
			cout << "(1 = Close Application/2 = Main Menu)\n";

			for (cin >> choice; choice > 2 || !choice; cin.clear(), cin.ignore(256, '\n'), cin >> choice)
				cout << "Please input the value preceeding the option you wish to select\n";

			switch (choice) {

			case 1: cout << "Closing Application, Thank you for playing", (menuQuit = true);
				break;
			case 2: (menuQuit = false);
				break;
			};


			break;

		case 5:
			cout << "Thank You for playing!\n\n";                    // Exits the Main Menu
			menuQuit = true;
			break;

		default:                                                     // Basically replaced it with
			cout << "\n** Invalid Menu Selection!! **\n\n";          // that "for loop" statement for data validation purposes.
			break;
			// If the answer provided was big enough, it would glitch.
		}                                                            // However I don't want to break this menu thing so...
	}

	return 0;
};



