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



// took int main() outside of class HangmanGame so that it could be more easily incorporated into the group menu
int main() {
    return 0;
};
