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
				int main(); {

					cout << "Try to put code here\n\n";  // Try to input your code here (without int main as its already there)
				};                                       // Replace the quotation marks
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



