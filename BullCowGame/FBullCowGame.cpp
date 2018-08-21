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

FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{

	MyCurrentTry++;


	FBullCowCount BullCowCount;

	int32 HiddenWordLength = MyHiddedWord.length();
	int32 GuessWordLength = Guess.length();
	for (int32 MyHiddenChar = 0; MyHiddenChar < HiddenWordLength; MyHiddenChar++)
	{
		for (int32 MyGuessChar = 0; MyGuessChar < GuessWordLength; MyGuessChar++)   
		{
			if (Guess[MyGuessChar] == MyHiddedWord[MyHiddenChar])
			{
				if (MyHiddenChar == MyGuessChar)
				{
					BullCowCount.Bulls++;
				}
				else
				{

					BullCowCount.Cows ++;

				}
			}
		}
	}
	return BullCowCount;
}
