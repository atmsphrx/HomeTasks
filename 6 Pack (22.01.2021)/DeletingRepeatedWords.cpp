#include <iostream>
#include <cstring>

#define N 128

using namespace std;

bool isSeparator(char c);

int main(){
    char text[N], word[N], firstWord[N], secondWord[N];
    int counter = 0, wordsCounter = 0;

    cout << "Input text: ";
    cin.getline(text, N);

    for(int i = 0; text[i] != '\0'; i++){
        if(!isSeparator(text[i])){
            word[counter] = text[i];
            counter++;
            
            if(isSeparator(text[i + 1]) or text[i + 1] == '\0'){
                word[counter] = '\0';
                wordsCounter++;
                
                if(wordsCounter == 1){
                	strcpy(firstWord, word);
                	
                	cout << firstWord << ' ';
                	
                	strlwr(firstWord);
                }else{
                	char tempString[N];
                	
                	strcpy(secondWord, word);
                	strcpy(tempString, word);
                	strlwr(tempString);
                	
                	if(strcmp(firstWord, tempString)){
                		cout << secondWord << ' ';
                	}
                	
                	strcpy(firstWord, secondWord);
                }
                
                counter = 0;
            }
        }
    }
    return 0;
}

bool isSeparator(char letter){
    char endOfWord[] = ",.! ?";
    
    for(int i = 0; endOfWord[i] != '\0'; i++){
        if(letter == endOfWord[i]){
            return true;
        }
	}
	
    return false;
}
