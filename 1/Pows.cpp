#include <iostream>
#include <cmath>

#define SIZE 31
#define N 10

using namespace std;

int main(){
	int arrayForPowsOf2[SIZE] = {1};	// 1 is 2 in 0 power
	int arrayOfNumbers[N] = {5, 2, 4, 6, 8, 10, 1};
	int counterForCapableNumbers = 0;
	
	for(int i = 1; i < SIZE; i++){
		arrayForPowsOf2[i] = pow(2, i);
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < SIZE; j++){
			if(arrayOfNumbers[i] == arrayForPowsOf2[j]){
				cout << arrayOfNumbers[i] << " ";
				counterForCapableNumbers++;
				break;
			}
		}
	}
	
	if(counterForCapableNumbers == 0){
		cout << "Your array has no capable numbers!";
	}
	
	return 0;
}


	
