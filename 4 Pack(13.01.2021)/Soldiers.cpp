#include <iostream>
#include <cstdlib>
#include "windows.h"
#define N 5

using namespace std;

void changeDirection (char array[]);
void printArray(char array[]);

int main()
{
	char array[N] = {'>', '<', '>', '<', '>'};
	
	cout << "First line: ";
	printArray(array);
	
	cout << endl << endl;
	
	changeDirection(array);
	
	cout << "Final line: ";
	printArray(array);
	
	return 0;
}

void changeDirection (char array[]){
	for(int j = 0; j < N - 1; j++){
		for(int i = 0; i < N - 1; i++){
			if(array[i] == '>' and array[i + 1] == '<'){
				array[i] = '<';
				array[i + 1] = '>';
			}
		}
		printArray(array);
		
		Sleep(1000);
		
		cout << endl << endl;
	}
}

void printArray(char array[]){
	for(int i = 0; i < N; i++){
		cout << array[i] << ' ';
	}
}
