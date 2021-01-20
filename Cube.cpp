#include <iostream>
#include <cstdlib>

#define CUBESIZE 3

using namespace std;

void fillingCubeWithRandomNumbers(int array[CUBESIZE][CUBESIZE][CUBESIZE]);
void printCube(int array[CUBESIZE][CUBESIZE][CUBESIZE]);
void isRayThrough(int array[CUBESIZE][CUBESIZE][CUBESIZE], char side);
void printGraph();

int main(){
	int cube[CUBESIZE][CUBESIZE][CUBESIZE];

	fillingCubeWithRandomNumbers(cube);
	printGraph();
	printCube(cube);
	
	isRayThrough(cube, 'X');
	isRayThrough(cube, 'Y');
	isRayThrough(cube, 'Z');
	
	return 0;
}

void isRayThrough(int array[CUBESIZE][CUBESIZE][CUBESIZE], char side){
	int	counterForZeroes = 0;
	
	if(side == 'X'){
		for(int j = 0; j < CUBESIZE; j++){
			for(int k = 0; k < CUBESIZE; k++){
				counterForZeroes = 0;
			
				for(int i = 0; i < CUBESIZE; i++){
					if(array[i][j][k] == 0){
						counterForZeroes++;
						
						if(counterForZeroes == CUBESIZE){
							cout << "Sideview X. The ray go through cube: " << j + 1 << " row and " << k + 1  << " column." << endl ;
						}
					}
				}
			}	
		}
		cout << endl;
	}else if(side == 'Y'){
		for(int i = 0; i < CUBESIZE; i++){
			for(int j = 0; j < CUBESIZE; j++){
				counterForZeroes = 0;
				
				for(int k = 0; k < CUBESIZE; k++){
					if(array[i][j][k] == 0){
						counterForZeroes++;
						
						if(counterForZeroes == CUBESIZE){
							cout << "Sideview Y. The ray go through cube: " << i + 1 << " dimension and " << j + 1 << " row." << endl;
						}
					}
				}
			}	
		}
		cout << endl;
	}else{
		for(int i = 0; i < CUBESIZE; i++){
			for(int k = 0; k < CUBESIZE; k++){
				counterForZeroes = 0;
				
				for(int j = 0; j < CUBESIZE; j++){
					if(array[i][j][k] == 0){
						counterForZeroes++;
						
						if(counterForZeroes == CUBESIZE){
							cout << "Sideview Z. The ray go through cube: " << i + 1 << " dimension and " << k + 1 << " column." << endl;
						}
					}
				}
			}	
		}	
	}
}

void fillingCubeWithRandomNumbers(int array[CUBESIZE][CUBESIZE][CUBESIZE]){
	for(int i = 0; i < CUBESIZE; i++){
		for(int j = 0; j < CUBESIZE; j++){
			for(int k = 0; k < CUBESIZE; k++){
				array[i][j][k] = rand() % 2;
			}
		}	
	}
}	

void printCube(int array[CUBESIZE][CUBESIZE][CUBESIZE]){
	for(int i = 0; i < CUBESIZE; i++){
		cout << i + 1 << " dimension: " << endl;
	
		for(int j = 0; j < CUBESIZE; j++){
			for(int k = 0; k < CUBESIZE; k++){
				cout << array[i][j][k] << " ";
			}
			cout << endl;
		}	
		cout << endl;
	}
}

void printGraph(){
	char x = 25;
	char y = 26;
	char z = 24;
	
	cout << "	|  " << z << " Z side " << endl;
	cout << "	|" << endl;
	cout << "	|_ _ _" << endl;
	cout << "       /    " << y << " Y side" << endl; 
	cout << "      /     " << endl;   
	cout << "     / " << x << " X side" << endl << endl << endl;  
}
