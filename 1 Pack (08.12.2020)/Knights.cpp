#include <iostream>
#include <cmath>
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
	int firstKnightX, firstKnightY;
	int secondKnightX, secondKnightY;
	
	cout << "This program shows whether knights beat each other or not." << endl << endl;
	
	while(true){
		cout << "Input first Knight line position(Number from 1 to 8): ";
		cin >> firstKnightY;
		
		if(firstKnightY < 1 or firstKnightY > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
	
		cout << "Input first Knight column position(Number from 1 to 8): ";
		cin >> firstKnightX;
		
		if(firstKnightX < 1 or firstKnightX > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
		
		cout << endl;
		break;
	}
	
	switch(firstKnightY){
		case 8: 
			array8[firstKnightX - 1] = 'F';
			break;
		case 7: 
			array7[firstKnightX - 1] = 'F';
			break;
		case 6: 
			array6[firstKnightX - 1] = 'F';
			break;
		case 5: 
			array5[firstKnightX - 1] = 'F';
			break;
		case 4: 
			array4[firstKnightX - 1] = 'F';
			break;
		case 3: 
			array3[firstKnightX - 1] = 'F';
			break;
		case 2: 
			array2[firstKnightX - 1] = 'F';
			break;
		case 1: 
			array1[firstKnightX - 1] = 'F';
			break;
	}
	
	while(true){
		cout << "Input second Knight line position(Number from 1 to 8): ";
		cin >> secondKnightY;
		
		if(secondKnightY < 1 or secondKnightY > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
		
		cout << "Input second Knight column position(Number from 1 to 8): ";
		cin >> secondKnightX;
		
		if(secondKnightX < 1 or secondKnightX > 8){
			cout << "You inputed wrong position. Try again!" << endl << endl;
			continue;
		}
		
		if((firstKnightX == secondKnightX) and (firstKnightY == secondKnightY)){
			cout << "Your knights are in one point. Input any other position for second Knight!" << endl << endl;
			continue;
		}
		
		cout << endl;
		break;
	}
	
	switch(secondKnightY){
		case 8: 
			array8[secondKnightX - 1] = 'S';
			break;
		case 7: 
			array7[secondKnightX - 1] = 'S';
			break;
		case 6: 
			array6[secondKnightX - 1] = 'S';
			break;
		case 5: 
			array5[secondKnightX - 1] = 'S';
			break;
		case 4: 
			array4[secondKnightX - 1] = 'S';
			break;
		case 3: 
			array3[secondKnightX - 1] = 'S';
			break;
		case 2: 
			array2[secondKnightX - 1] = 'S';
			break;
		case 1: 
			array1[secondKnightX - 1] = 'S';
			break;
	}
								
	int dX = abs(firstKnightX - secondKnightX);
	int dY = abs(firstKnightY - secondKnightY);
	
	if(dX * dY == 2){
	   cout << "Yes!" << endl;
	}else{
	   cout << "No!" << endl;
	}
	
	cout << endl << "Take a look: " << endl << endl;
	cout << "Annotation: " << endl;
	cout << "**********************************************************" << endl;
	cout << "F - first Knight." << endl << "S - second Knight." << endl;
	cout << "**********************************************************" << endl;
	
	cout << "  ";
	for(int i = 0; i < 8; i++){
		cout << '(' << i + 1 << ')';
	}
	
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
