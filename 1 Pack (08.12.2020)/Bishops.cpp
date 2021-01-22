#include <iostream>
#define N 8
using namespace std;

int main()
{
	char array8[N] = {'#',' ','#',' ','#',' ','#',' '};
	char array7[N] = {' ','#',' ','#',' ','#',' ','#'};
	char array6[N] = {'#',' ','#',' ','#',' ','#',' '};
	char array5[N] = {' ','#',' ','#',' ','#',' ','#'};
	char array4[N] = {'#',' ','#',' ','#',' ','#',' '};
	char array3[N] = {' ','#',' ','#',' ','#',' ','#'};
	char array2[N] = {'#',' ','#',' ','#',' ','#',' '};
	char array1[N] = {' ','#',' ','#',' ','#',' ','#'};
	
	int axisY = 8;
	char axisX = 'A';
	int firstBishopX, firstBishopY;
	int secondBishopX, secondBishopY;
	
	cout << "This program shows whether bishops beat each other or not." << endl << endl;
	
	while(true){
		cout << "Input first Bishop axis Y: ";
		cin >> firstBishopY;
		
		if(firstBishopY < 1 or firstBishopY > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
	
		cout << "Input first Bishop axis X: ";
		cin >> firstBishopX;
		
		if(firstBishopX < 1 or firstBishopX > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
		
		cout << endl;
		break;
	}
	
	switch(firstBishopY){
		case 8: 
			array8[firstBishopX - 1] = 'F';
			break;
		case 7: 
			array7[firstBishopX - 1] = 'F';
			break;
		case 6: 
			array6[firstBishopX - 1] = 'F';
			break;
		case 5: 
			array5[firstBishopX - 1] = 'F';
			break;
		case 4: 
			array4[firstBishopX - 1] = 'F';
			break;
		case 3: 
			array3[firstBishopX - 1] = 'F';
			break;
		case 2: 
			array2[firstBishopX - 1] = 'F';
			break;
		case 1: 
			array1[firstBishopX - 1] = 'F';
			break;
	}
	
	while(true){
		cout << "Input second Bishop axis Y: ";
		cin >> secondBishopY;
		
		if(secondBishopY < 1 or secondBishopY > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
		
		cout << "Input second Bishop axis X: ";
		cin >> secondBishopX;
		
		if(secondBishopX < 1 or secondBishopX > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
		
		if((firstBishopX == secondBishopX) and (firstBishopY == secondBishopY)){
			cout << "Your bishops are in one point. Input any other position for second bishop!" << endl << endl;
			continue;
		}
		
		cout << endl;
		break;
	}
	
	switch(secondBishopY){
		case 8: 
			array8[secondBishopX - 1] = 'S';
			break;
		case 7: 
			array7[secondBishopX - 1] = 'S';
			break;
		case 6: 
			array6[secondBishopX - 1] = 'S';
			break;
		case 5: 
			array5[secondBishopX - 1] = 'S';
			break;
		case 4: 
			array4[secondBishopX - 1] = 'S';
			break;
		case 3: 
			array3[secondBishopX - 1] = 'S';
			break;
		case 2: 
			array2[secondBishopX - 1] = 'S';
			break;
		case 1: 
			array1[secondBishopX - 1] = 'S';
			break;
	}
								
	if ((firstBishopX + firstBishopY == secondBishopX + secondBishopY) or (firstBishopX - firstBishopY == secondBishopX - secondBishopY)){
		cout << "Yes!" << endl;
	}else{
		cout << "No!" << endl;
	}
	
	cout << endl << "Take a look: " << endl << endl;
	
	cout << "   ";
	for(int i = 0; i < 8; i++){
		cout << axisX << "  ";
		axisX++;
	}
	axisX = 'A';
	
	cout << endl << axisY << " ";
	for(int i = 0; i < 8; i++){
		cout << "[" << array8[i] << "]" ;
	}
	cout << " " << axisY;
	axisY--;
	cout << endl;
	
		cout << axisY << " ";
		for(int i = 0; i < 8; i++){
			cout << "[" << array7[i] << "]";
		}
		cout << " " << axisY;
		axisY--;
		cout << endl;

			cout << axisY << " ";
			for(int i = 0; i < 8; i++){
				cout << "[" << array6[i] << "]";
			}
			cout << " " << axisY;
			axisY--;
			cout << endl;
			
				cout << axisY << " ";
				for(int i = 0; i < 8; i++){
					cout << "[" << array5[i] << "]";
				}
				cout << " " << axisY;
				axisY--;
				cout << endl;
				
					cout << axisY << " ";
					for(int i = 0; i < 8; i++){
						cout << "[" << array4[i] << "]";
					}
					cout << " " << axisY;
					axisY--;
					cout << endl;
					
						cout << axisY << " ";
						for(int i = 0; i < 8; i++){
							cout << "[" << array3[i] << "]";
						}
						cout << " " << axisY;
						axisY--;
						cout << endl;
						
							cout << axisY << " ";
							for(int i = 0; i < 8; i++){
								cout << "[" << array2[i] << "]";
							}
							cout << " " << axisY;
							axisY--;
							cout << endl;
							
								cout << axisY << " ";
								for(int i = 0; i < 8; i++){
									cout << "[" << array1[i] << "]";
								}
								cout << " " << axisY;
								axisY--;
								cout << endl;
								
	cout << "   ";
	for(int i = 0; i < 8; i++){
		cout << axisX << "  ";
		axisX++;
	}		
								
	return 0;
}
