#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

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


int main()

{
bool PlayAgain = true; //This lets the user play another round if they wish
while (PlayAgain)

{
	int DealerRank;
	int PlayerRank;
	string Player;
	char HiLo, again;


	Card card;
	newCard newCard;


	cout << "Welcome to Hi Lo, What is your name?\n";
	cin >> Player;

	PlayerRank = card.get_rank();
	DealerRank = newCard.get_newrank();

	cout << "You draw a " << card.get_rank_string()
		<< " of " << card.get_suit_string() << "\n";
	cout << "Will the next card be higher or lower? Enter 'h' for higher or 'l' for lower. \n ";
	cin >> HiLo;

	if (HiLo != 'h' && HiLo != 'l')
		do
		{
			cout << "Invalid Response. Please enter 'h' for higher or 'l' for lower. \n";
			cin >> HiLo;
		}

	while (HiLo != 'h' && HiLo != 'l');

		if ((HiLo == 'h' && DealerRank < PlayerRank) ||
			(HiLo == 'l' && DealerRank > PlayerRank))

		{
			cout << "You lose " + Player;
			cout << "\nThe next card was " << newCard.get_newrank_string() << " of " << newCard.get_newsuit_string() << "! Would you like to play again?\n";
			cin >> again;
			if (again != 'y')
			{
				PlayAgain = false;
			}
		}


		else

		{
			cout << "You win, congratulations " + Player;
			cout << "\nThe next card was " << newCard.get_newrank_string() << " of " << newCard.get_newsuit_string() << "! Would you like to play again?\n";
			cin >> again;
			if (again != 'y')
			{
				PlayAgain = false;
			}
		}

}

}


