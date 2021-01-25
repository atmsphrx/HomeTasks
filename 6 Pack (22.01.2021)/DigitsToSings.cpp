#include <iostream>
#include <cstdlib>
#include <cstring>

#define N 128

using namespace std;

void convertDigitToSigns(char digit, char tempString[]);
void concatinationStrings(char string1[], char string2[]);

int main(){
	char string[N] = {0};
	char finalString[N] = {0};
	
	cout << "Input your phrase: ";
	
	cin.getline(string, N);
	
	for(int i = 0; i < strlen(string); i++){
		if(string[i] >= '0' and string[i] <= '9'){
			if(string[i] == '0'){
				continue;
			}else{
				char tempStringForSigns[N] = {0};
				
				convertDigitToSigns(string[i], tempStringForSigns);
				concatinationStrings(finalString, tempStringForSigns);
			}
		}else{
			char tempStringForElement[2] = {string[i]};
			
			concatinationStrings(finalString, tempStringForElement);
		}
	}
	
	cout << finalString;	
}

void convertDigitToSigns(char digit, char tempString[]){
	if(digit % 2 != 0){
		for(int j = 0; j < digit - 48; j++){
			tempString[j] = '-';
		}
	}else{
		for(int k = 0; k < digit - 48; k++){
			tempString[k] = '+';
		}
	}		
}

void concatinationStrings(char string1[], char string2[]){
	strcat(string1, string2);
}
