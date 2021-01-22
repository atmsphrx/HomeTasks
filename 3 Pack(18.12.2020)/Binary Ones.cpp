#include <iostream>

using namespace std;

int inputingNumber(int number){
	while(true){
		cout << "Input your number: ";
		cin >> number;
		
		if(number < 1){
			cout << "You inputed wrong number. Please, try again!" << endl << endl;
		}else{
			cout << endl;
			break;
		}
	}
	
	return number;
}

void printNumbers(int number){
	cout << "Your numbers:" << endl;
	
	for(int i = 1; i < number; i = (i * 2) + 1){
		cout << i << " "; 
	}
}

int main()
{
	int number;
	
	cout << "This program shows all natural numbers that contains only 1 in binary number system up to your number." << endl << endl;
	
	number = inputingNumber(number);
		
	printNumbers(number);	
	
	return 0;
}
