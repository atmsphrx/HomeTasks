#include <iostream>

using namespace std;

bool checkingIsYearLeap(int year){
	bool flag;
	
	if(year % 400 == 0){
    	flag = true;
    }else if(year % 100 == 0){
    	flag = false;
    }else if(year % 4 == 0){
        flag = true;
	}else{
        flag = false;
    }
   
    return flag;
}

int inputDay(){
	int day;
	
	while(true){
		cout << "Input your day: ";
		cin >> day;
			if(day < 1 or day > 31){
				cout << "You inputed wrong day! Please, try again!" << endl << endl;
			}else{
				break;
			}
	}
	
	return day;
}

int inputMonth(int day){
	int month;
	
	while(true){
		cout << "Input your month: ";
		cin >> month;
		
		if(month < 1 || month > 12)
			cout << "You inputed wrong month. Please, try again!" << endl << endl;
		else if((day == 31 || day == 30 ) && month == 2)
			cout << "February has only 28 or 29 days. Please, try again!" << endl << endl;
		else if(day == 31 && month == 4)
			cout << "April has only 30 days. Please, try again!" << endl << endl;
		else if(day == 31 && month == 6)
			cout << "June has only 30 days. Please, try again!" << endl << endl;
		else if(day == 31 && month == 9)
			cout << "September has only 30 days. Please, try again!" << endl << endl;
		else if(day == 31 && month == 11)
			cout << "November has only 30 days. Please, try again!" << endl << endl;
		else
			break;
	}
	
	return month;
}

int inputYear(int day, int month){
	int year;
	bool isYearLeap;
	
	while(true){
		cout << "Input your year: ";
		cin >> year;
		
		isYearLeap = checkingIsYearLeap(year);
		
		if(year < 0){
			cout << "It was very long time ago. Check your data!" << endl << endl;
		}else if(!isYearLeap && month == 2 && day > 28){
			cout << "This year is not leap! That's why February has only 28 days. Check your year!" << endl << endl;
		}else{
			break;
		}
	}
	
	return year;
}

int sumOfDigits(int number){
	int sum = 0, temp = 0;
	
	while(number != 0){
		temp = number % 10;
		number /= 10;
		sum += temp;
	}
	
	return sum;
}

int main()
{
	int day, month, year, fateNumber;
	
	cout << "This program calculate Fate number. This number is a sum of digits of inputed birthday date." << endl << endl;
	
	day = inputDay();
	month = inputMonth(day);
	year = inputYear(day, month);
	
	cout << endl << "Birthday date: " << day << '/' << month << '/' << year << endl << endl;
	
	fateNumber = day + month + year;
	
	while(fateNumber > 9){
		fateNumber = sumOfDigits(fateNumber);
	}
	
	cout << "Your fate number is: " << fateNumber;
		
	return 0;
}
