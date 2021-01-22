#include <iostream>
#define N 46
using namespace std;

int fibonacciSequence[N];

int inputingNumber(){
	int number;
	
	while(true){
		cout << "Input position number in the sequence(From 1 to 46): ";
		cin >> number;
		
		if(number < 1 or number > N){
			cout << "You inputed wrong number. Please, try again!" << endl << endl;
		}else{
			cout << endl;
			break;
		}
	}
	
	return number;
}

void calculateSequence(int size){
	fibonacciSequence[0] = 1;
	fibonacciSequence[1] = 1;
	
	for(int i = 2; i < size; i++){
		fibonacciSequence[i] = fibonacciSequence[i - 2] + fibonacciSequence[i - 1];
	}
} 

int calculateSumOfNumbers(int size){
	int sumoOfNumbers = 0;
	
	for(int i = 0; i < size; i++){
		sumoOfNumbers += fibonacciSequence[i];
	}
	
	return sumoOfNumbers;
}

void printSequence(int size){
	for(int i = 0; i < size; i++){
		cout << fibonacciSequence[i] << " ";
	}
	
	cout << endl << endl;
}

int main()
{
	int number, sumOfNumbers = 0;
	
	cout << "This program shows you number in the Fibonacci sequence and sum of the numbers up to chosen one." << endl << endl;
	
	number = inputingNumber();
	calculateSequence(number);
	
	cout << "On this position stays number: " << fibonacciSequence[number - 1] << endl << endl;
	cout << "The sequence up to your number: " << endl;
		
	printSequence(number);
	sumOfNumbers = calculateSumOfNumbers(number);
	
	cout << "The sum of the numbers up to that number: " << sumOfNumbers;
	
	return 0;
}
