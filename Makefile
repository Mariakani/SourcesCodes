#-*- Makefile -*-

all: output Bullcow


output: CDAMain.o CDAccount.o
	g++ -o output CDAMain.o CDAccount.o 
		
CDAMain.o: CDAMain.cpp
	g++ -c CDAMain.cpp
		
CDAccount.o: CDAccount.cpp CDAccount.h
	g++ -c CDAccount.cpp
Bullcow: Main.o FBullCowGame.o
	g++ -o Bullcow Main.o FBullCowGame.o 

Main.o: main.cpp
	g++ -c Main.cpp 
	
FBullCowGame.o: FBullCowGame.cpp FBullCowGame.h
	g++ -c FBullCowGame.cpp
			
			
clean:
	rm *.o output Bullcow GradingSystem