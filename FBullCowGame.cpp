#include "FBullCowGame.h"
using int32 = int;
FBullCowGame::FBullCowGame()
{
	Reset();
}

void FBullCowGame::Reset()
{
	constexpr int32 Max_tries = 8;
	MyMaxtries = Max_tries;
	const FString Hidden_Word = "planet";
	MyHiddedWord = Hidden_Word;

	MyCurrentTry = 1;

	return;
}

int32 FBullCowGame::GetMaxTries() const
{
	return MyMaxtries;
}

int32 FBullCowGame::GetCurrentTry() const
{
	return MyCurrentTry;
}

int32 FBullCowGame::GetHiddenWordLength() const
{
	return MyHiddedWord.length();
}

bool FBullCowGame::IsGameWOn() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}
//receive the valid guess, increase turn and return count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	//increment the turn number
	MyCurrentTry++;
	//setup a return variables 
	
	FBullCowCount BullCowCount;
	//loop through all letters and in the guess
	int32 HiddenWordLength = MyHiddedWord.length();
	int32 GuessWordLength = Guess.length();
	for (int32 MyHiddenChar = 0; MyHiddenChar < HiddenWordLength; MyHiddenChar++)
	{
		for (int32 MyGuessChar = 0; MyGuessChar < GuessWordLength; MyGuessChar++)    //compare letters against the hidden words;
		{
			if (Guess[MyGuessChar] == MyHiddedWord[MyHiddenChar])                    //if they match then
			{
				if (MyHiddenChar == MyGuessChar)
				{ 
					BullCowCount.Bulls++;                         //if they are in the sa e place increment bulls
				}
				else
				{
					//increment cows
					BullCowCount.Cows ++;
					
				}
			}
		}
	}
	return BullCowCount;
}

