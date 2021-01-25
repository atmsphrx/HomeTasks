#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <windows.h>

#define N 128

using namespace std;

void choosingWordAndQuestionToGuess(int randomChoice);
void assignmentLengthOfWordToSignArray(char wordToGuess[]);
void startOfTheGame();
void printString(char string[]);
void printIntroduce();
void guessingLetters();
bool isWordHasBeenGuessed();
void jakubovicJoking();
void finalOfTheGame();


char wordToGuess[N];
char questionToAnswer[N];
char singsArray[N];

int main(){
	srand(time(0));
	
	choosingWordAndQuestionToGuess(rand() % 5);
	assignmentLengthOfWordToSignArray(wordToGuess);
	
	while(true){
		startOfTheGame();
		printString(singsArray);
		guessingLetters();
		
		if(isWordHasBeenGuessed()){
			finalOfTheGame();
			
			return 0;
		}
	}
}

void choosingWordAndQuestionToGuess(int randomChoice){
	if(randomChoice == 0){
		char tempForWord[N] = "apple";
		char tempForQuestion[N] = "What is the name of company that has been created by Steve Jobs?";
		
		strcpy(wordToGuess, tempForWord);
		strcpy(questionToAnswer, tempForQuestion);
	}else if(randomChoice == 1){
		char tempForWord[N] = "intel";
		char tempForQuestion[N] = "What is the name of company that make processors?";
		
		strcpy(wordToGuess, tempForWord);
		strcpy(questionToAnswer, tempForQuestion);
	}else if(randomChoice == 2){
		char tempForWord[N] = "nvidia";
		char tempForQuestion[N] = "What is the name of company that make graphics card?";
		
		strcpy(wordToGuess, tempForWord);
		strcpy(questionToAnswer, tempForQuestion);
	}else if(randomChoice == 3){
		char tempForWord[N] = "microsoft";
		char tempForQuestion[N] = "What is the name of company has been created by Bill Gates?";
		
		strcpy(wordToGuess, tempForWord);
		strcpy(questionToAnswer, tempForQuestion);
	}else{
		char tempForWord[N] = "samsung";
		char tempForQuestion[N] = "What is the name of company that locate in South Corea?";
		
		strcpy(wordToGuess, tempForWord);
		strcpy(questionToAnswer, tempForQuestion);
	}
}

void assignmentLengthOfWordToSignArray(char wordToGuss[]){
	for(int i = 0; i < strlen(wordToGuess); i++){
		singsArray[i] = '*';
	}
}

void startOfTheGame(){
	system("cls");
		
	printIntroduce();
	printString(questionToAnswer);
	
	cout << endl;
}

void printIntroduce(){
	cout << "You are in the game 'Field of Miracles'!" << endl;
	cout << "Try to guess the word!" << endl << endl;
	cout << "This is a question: " << endl;
}

void printString(char string[]){
	cout << string << endl;
}

void guessingLetters(){
	char letter;

	letter = getchar();
	
	for(int i = 0; i < strlen(wordToGuess); i++){
		if(letter == wordToGuess[i]){
			singsArray[i] = letter;	
		}
	}	
}

bool isWordHasBeenGuessed(){
	for(int i = 0; i < strlen(singsArray); i++){
		if(singsArray[i] == '*'){
			return false;
		}
	}
	
	return true;
}

void jakubovicJoking(){
	cout << "What did Michael Jackson call his denim store?" << endl;
	
	for(int i = 0; i < 10; i++){
		cout << '.';
		
		Sleep(1000);
	}
	
	cout << endl << endl << "Billie Jeans!";
}

void finalOfTheGame(){
	startOfTheGame();
	
	cout << wordToGuess << endl << endl;
	cout << "Congratulations, you did it!" << endl << endl;
	cout << "And now the Joke :" << endl;
	
	jakubovicJoking();	
}



