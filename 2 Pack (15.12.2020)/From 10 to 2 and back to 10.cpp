#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number, temp, counter = 0;
	
	cout << "Input your number: ";
	cin >> number;
	
	temp = number;
	
	while(temp > 0){
		temp /= 2;
		counter++;
	}
	
	int array[counter];

	for(int i = 0; i < counter; i++){
		array[i] = number % 2;
		number /= 2;
	}
	
	cout << "Your number in 2-th system: ";
	
	for(int i = counter - 1; i >= 0; i--){
		cout << array[i] << " ";
	}
	
 	cout << endl;
 	
 	int secondNumber = 0;
 	
 	for(int i = 0; i < counter; i++){
 		secondNumber += array[i] * (pow(2, i));
 	}
 	
 	cout << "Your number in 10-th system: " << secondNumber;
 	
	return 0;
}

