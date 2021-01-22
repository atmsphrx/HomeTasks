#include <iostream>

using namespace std;

int main()
{
	int mutants, increasePercent, killingInNight, firstNightAmount, dayCounter = 0;
	
	cout << "This program calculate can DzKH win mutants or not." << endl;
	
	while(true){
		cout << "Input how many mutants attacking the city: ";
		cin >> mutants;
		if(mutants < 0){
			cout << "You inputed wrong amount of mutants. Try again!" << endl;
			continue;
		}else if(mutants == 0){
			cout << "If you want to see DzKH vs Mutants add some mutants, please!" << endl;
			continue;
		}else{
			cout << endl;
			break;
		}	
	}
	
	while(true){
		cout << "Input how many percents they increase every night: ";
		cin >> increasePercent;
		if(increasePercent < 0){
			cout << "You inputed wrong percents. Try again!" << endl;
			continue;
		}else if(increasePercent == 0){
			cout << "If you don't want to watch short movie add some percents, please!" << endl;
			continue;
		}else{
			cout << endl;
			break;
		}	
	}
	
	while(true){
		cout << "Input how many mutants DzKH kills every day: ";
		cin >> killingInNight;
		if(killingInNight < 0){
			cout << "You inputed wrong number. Try again!" << endl;
			continue;
		}else if(killingInNight == 0){
			cout << "If we would be in Mortal Kombat it will be Flawless Victory. Add power to DzKH!" << endl;
			continue;
		}else{
			cout << endl;
			break;
		}	
	}
	
	firstNightAmount = mutants;
	
	while(true){	
		mutants = (mutants * (100 + increasePercent)) / 100;
		mutants -= killingInNight;
		
		if(mutants == firstNightAmount){
			cout << "It will be Infinity War!";
			break;
		}else if(mutants > firstNightAmount){
			cout << "DzKH cannot do it. Run fools!";
			break;
		}else{
			dayCounter++;

			if(mutants > 0){
				cout << "Amount of mutants after " << dayCounter << " night: " << mutants << endl;
			}else{
				cout << "All mutants will be killed at " << dayCounter << " night.";
				break;
			}
		}
	}
	return 0;
}
