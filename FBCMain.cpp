#include <iostream>
#include <string>
#include "FBullCowGame.h"
using FText = std::string;
using int32 = int;



FBullCowGame BCGame;

void PrintIntroduction();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

int main()
{
	bool bPlayAgain = false;
	do {
		PrintIntroduction();
		PlayGame();

		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0;
}

void PrintIntroduction()
{
	std::cout << "Welcome to Bulls and Cows, a fun word games\n";
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;

}

FText GetGuess()
{
	int MyCurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try " << MyCurrentTry << ". Enter your guess  ";
	FText Guess = "";
	std:: getline(std::cin, Guess);
	return Guess;
}
void PlayGame()
{
	int32 Maxtries = BCGame.GetMaxTries();
	std::cout << Maxtries << std::endl;


	for (int32 count = 1; count <= Maxtries; count++)
	{
		FText Guess = GetGuess();
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		std::cout << "Bulls = " << BullCowCount.Bulls << std::endl;
		std::cout << "Cows = " << BullCowCount.Cows  << std::endl;
		std::cout << std::endl;
	}
	//TODO sumarrize the game
}
bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)?" << std::endl;
	FText Response = "";
	std:: getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');

}
