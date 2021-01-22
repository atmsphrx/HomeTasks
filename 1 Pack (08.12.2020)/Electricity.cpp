#include <iostream>

using namespace std;

int main()
{
	double kwH, costOf1KwH = 0.10;
	
	cout << "This program helps your family calculate cost of electricity for last month." << endl;
	
	while(true){
		cout << "Please, input KW amount: ";
		cin >> kwH;
		
		if(kwH < 0){
			cout << "You inputed wrong amount. Try again!" << endl;
		}else if(kwH == 0){
			cout << "Inspection is coming to you. Input something more than 0." << endl;
			continue;
		}else{
			break;
		}
	}
	
	cout << "Total cost is: " << kwH * costOf1KwH << " rubles";
	
	return 0;
}
