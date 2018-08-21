#-*- Makefile -*-

all: output bisection


output: CDAMain.o CDAccount.o
	g++ -o output CDAMain.o CDAccount.o

CDAMain.o: CDAMain.cpp
	g++ -c CDAMain.cpp

CDAccount.o: CDAccount.cpp CDAccount.h
	g++ -c CDAccount.cpp

#Bullcow: FBCMain.o FBullCowGame.o
	#g++ -o Bullcow Main.o FBullCowGame.o

#FBCMain.o: FBCMain.cpp
	#g++ -c FBCMain.cpp

#FBullCowGame.o: FBullCowGame.cpp FBullCowGame.h
	#g++ -c FBullCowGame.cpp

bisection: Bisection.o
	g++ -o bisection Bisection.o

Bisection.0: Bisection.cpp
	g++ -c Bisection.cpp

clean:
	rm *.o output GradingSystem bisection
