#pragma once
#include <string>
using FString = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};


class FBullCowGame {
	
public:
	FBullCowGame();

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength()const;


	void Reset();
	
	bool IsGameWOn() const;
	
	bool CheckGuessValidity(FString);  //TODO make a more rich return value
	//counts bulls and cows and increase the tries
	FBullCowCount SubmitGuess(FString);

	//provide a method for counting bulls and cows and increase the turn #
private:
	int32 MyCurrentTry;
	int32 MyMaxtries ;
	FString MyHiddedWord;
};