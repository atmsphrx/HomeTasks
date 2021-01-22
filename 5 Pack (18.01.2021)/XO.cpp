#include <iostream>
#include <cstdlib>
#include <ctime>

#define BOARDSIZE 9

using namespace std;

int humanMakesMove();
int computerMakesMove();

void makingMove(int move, int turn);
bool isFieldEmpty(char gameBoard[], int move);
bool hasWon(char player);
void whoIsWinner(char winner);

void printBoards();
void printStartingGameBoard();
void printGameBoard();

char gameBoard[BOARDSIZE] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

int turn1counter = 0;

int main(){
	int turn = 1;
  	int humanMove, computerMove;
  	
	while(true){
		humanMove = humanMakesMove();
		makingMove(humanMove, turn);
		turn++;
			
		if(hasWon('X')){
			printBoards();
			whoIsWinner('X');
			
			return 0;
		}
		
		if(turn == 10){
			printBoards();
			whoIsWinner('D');
				
			return 0;
		}
			
		computerMove = computerMakesMove();
		makingMove(computerMove, turn);
		turn++;
			
		if(hasWon('O')){
			printBoards();
			whoIsWinner('O');
			
			return 0;
		}
	}
}
             
int humanMakesMove(){
	printBoards();
	
	while(true){
		int move;
		
		cout << "Your move: ";  
		cin >> move;
	
		if((move > 0 || move < 8) && gameBoard[move] == ' '){
			return move;
		}else{
			cout << "You inputed wrong position!" << endl << endl;
		}
	}
}
 
void makingMove(int move, int turn){
	if(turn % 2 == 1){
		gameBoard[move] = 'X';
	}else{
		gameBoard[move] = 'O';
	}
}
 
int computerMakesMove(){
	srand(time(0));
	
	if(turn1counter == 0){
		int move = rand() % 9;
		
		turn1counter++;
		
		while(true){
			if(gameBoard[move] != ' '){
				move = rand() % 9;
				
				continue;
			}
			break;
		}
		
		
		return move;
	}
		
	//012
	if(gameBoard[0] == 'O' && gameBoard[1] == 'O' && gameBoard[2] == ' '){
		return 2;
	}else if(gameBoard[0] == 'O' && gameBoard[2] == 'O' && gameBoard[1] == ' '){
        return 1;
	}else if(gameBoard[1] == 'O' && gameBoard[2] == 'O' && gameBoard[0] == ' '){
        return 0;
		                       
	//345	   
	}else if(gameBoard[3] == 'O' && gameBoard[4] == 'O' && gameBoard[5] == ' '){
		return 5; 				   
	}else if(gameBoard[3] == 'O' && gameBoard[5] == 'O' && gameBoard[4] == ' '){
        return 4; 				   
	}else if(gameBoard[5] == 'O' && gameBoard[4] == 'O' && gameBoard[3] == ' '){
        return 3;
	
	//678 			   
	}else if(gameBoard[6] == 'O' && gameBoard[7] == 'O' && gameBoard[8] == ' '){
        return 8;				   
	}else if(gameBoard[6] == 'O' && gameBoard[8] == 'O' && gameBoard[7] == ' '){
        return 7;				                
	}else if(gameBoard[8] == 'O' && gameBoard[7] == 'O' && gameBoard[6] == ' '){
    	return 6;
		
	//036   
	}else if(gameBoard[0] == 'O' && gameBoard[3] == 'O' && gameBoard[6] == ' '){
        return 6;	                                                   
	}else if(gameBoard[0] == 'O' && gameBoard[6] == 'O' && gameBoard[3] == ' '){
        return 3;
	}else if(gameBoard[3] == 'O' && gameBoard[6] == 'O' && gameBoard[0] == ' '){
        return 0;
        
    //147
	}else if(gameBoard[1] == 'O' && gameBoard[4] == 'O' && gameBoard[7] == ' '){
        return 7;	                                                    
    }else if(gameBoard[1] == 'O' && gameBoard[7] == 'O' && gameBoard[4] == ' '){
        return 4;
	}else if(gameBoard[7] == 'O' && gameBoard[4] == 'O' && gameBoard[1] == ' '){
        return 1;
		
	//258	                                          
    }else if(gameBoard[2] == 'O' && gameBoard[5] == 'O' && gameBoard[8] == ' '){
        return 8; 
	}else if(gameBoard[2] == 'O' && gameBoard[8] == 'O' && gameBoard[5] == ' '){
        return 5;
	}else if(gameBoard[8] == 'O' && gameBoard[5] == 'O' && gameBoard[2] == ' '){
        return 2;
		
		
	//048	
	}else if(gameBoard[0] == 'O' && gameBoard[4] == 'O' && gameBoard[8] == ' '){
        return 8;
	}else if(gameBoard[0] == 'O' && gameBoard[8] == 'O' && gameBoard[4] == ' '){
        return 4;			                                                    
    }else if(gameBoard[4] == 'O' && gameBoard[8] == 'O' && gameBoard[0] == ' '){
        return 0; 
		                                                    
    //246
	}else if(gameBoard[2] == 'O' && gameBoard[4] == 'O' && gameBoard[6] == ' '){
        return 6;	                                                    
    }else if(gameBoard[2] == 'O' && gameBoard[6] == 'O' && gameBoard[4] == ' '){
        return 4; 
	}else if(gameBoard[6] == 'O' && gameBoard[4] == 'O' && gameBoard[2] == ' '){
        return 2;
       
	   
	//012 X   
	}else if(gameBoard[0] == 'X' && gameBoard[1] == 'X' && gameBoard[2] == ' '){
        return 2;
    }else if(gameBoard[0] == 'X' && gameBoard[2] == 'X' && gameBoard[1] == ' '){
        return 1;
    }else if(gameBoard[1] == 'X' && gameBoard[2] == 'X' && gameBoard[0] == ' '){
        return 0;
		
		    
    //345 X  
    }else if(gameBoard[3] == 'X' && gameBoard[4] == 'X' && gameBoard[5] == ' '){
        return 5;
    }else if(gameBoard[3] == 'X' && gameBoard[5] == 'X' && gameBoard[4] == ' '){
        return 4;    
    }else if(gameBoard[5] == 'X' && gameBoard[4] == 'X' && gameBoard[3] == ' '){
        return 3;
		
	//678 X	   
    }else if(gameBoard[6] == 'X' && gameBoard[7] == 'X' && gameBoard[8] == ' '){
        return 8;    
    }else if(gameBoard[6] == 'X' && gameBoard[8] == 'X' && gameBoard[7] == ' '){
        return 7;    
    }else if(gameBoard[8] == 'X' && gameBoard[7] == 'X' && gameBoard[6] == ' '){
        return 6;
        
    //036 X
    }else if(gameBoard[0] == 'X' && gameBoard[3] == 'X' && gameBoard[6] == ' '){
        return 6;
    }else if(gameBoard[0] == 'X' && gameBoard[6] == 'X' && gameBoard[3] == ' '){
        return 3;
    }else if(gameBoard[3] == 'X' && gameBoard[6] == 'X' && gameBoard[0] == ' '){
        return 0;
    
    //147 X
    }else if(gameBoard[1] == 'X' && gameBoard[4] == 'X' && gameBoard[7] == ' '){
        return 7;
    }else if(gameBoard[1] == 'X' && gameBoard[7] == 'X' && gameBoard[4] == ' '){
        return 4;
    }else if(gameBoard[7] == 'X' && gameBoard[4] == 'X' && gameBoard[1] == ' '){
        return 1;    
    
    //258 X  
    }else if(gameBoard[2] == 'X' && gameBoard[5] == 'X' && gameBoard[8] == ' '){
        return 8;
    }else if(gameBoard[2] == 'X' && gameBoard[8] == 'X' && gameBoard[5] == ' '){
        return 5;
    }else if(gameBoard[8] == 'X' && gameBoard[5] == 'X' && gameBoard[2] == ' '){
        return 2;   
        
    //048 X
    }else if(gameBoard[0] == 'X' && gameBoard[4] == 'X' && gameBoard[8] == ' '){
        return 8;
    }else if(gameBoard[0] == 'X' && gameBoard[8] == 'X' && gameBoard[4] == ' '){
        return 4;   
    }else if(gameBoard[4] == 'X' && gameBoard[8] == 'X' && gameBoard[0] == ' '){
        return 0;
		
	//246 X 
	}else if(gameBoard[2] == 'X' && gameBoard[4] == 'X' && gameBoard[6] == ' '){
        return 6; 
    }else if(gameBoard[2] == 'X' && gameBoard[6] == 'X' && gameBoard[4] == ' '){
        return 4;
	}else if(gameBoard[4] == 'X' && gameBoard[6] == 'X' && gameBoard[2] == ' '){
        return 2;
    }else{
    	return 0;
    }	
}

bool hasWon(char player){
	
	//012
	if(gameBoard[0] == 'X' && gameBoard[1] == 'X' && gameBoard[2] == 'X'){
        return true;
    }else if(gameBoard[0] == 'O' && gameBoard[1] == 'O' && gameBoard[2] == 'O'){
        return true;
        
    //345
    }else if(gameBoard[3] == 'X' && gameBoard[4] == 'X' && gameBoard[5] == 'X'){
        return true;
    }else if(gameBoard[3] == 'O' && gameBoard[4] == 'O' && gameBoard[5] == 'O'){
        return true;
        
    //678
    }else if(gameBoard[6] == 'X' && gameBoard[7] == 'X' && gameBoard[8] == 'X'){
        return true;
    }else if(gameBoard[6] == 'O' && gameBoard[7] == 'O' && gameBoard[8] == 'O'){
        return true;
        
    //036
    }else if(gameBoard[0] == 'X' && gameBoard[3] == 'X' && gameBoard[6] == 'X'){
        return true;
    }else if(gameBoard[0] == 'O' && gameBoard[3] == 'O' && gameBoard[6] == 'O'){
        return true;
        
    //147
    }else if(gameBoard[1] == 'X' && gameBoard[4] == 'X' && gameBoard[7] == 'X'){
        return true;
    }else if(gameBoard[1] == 'O' && gameBoard[4] == 'O' && gameBoard[7] == 'O'){
        return true;
        
    //258
    }else if(gameBoard[2] == 'X' && gameBoard[5] == 'X' && gameBoard[8] == 'X'){
        return true;
    }else if(gameBoard[2] == 'O' && gameBoard[5] == 'O' && gameBoard[8] == 'O'){
        return true;
        
    //048
    }else if(gameBoard[0] == 'X' && gameBoard[4] == 'X' && gameBoard[8] == 'X'){
        return true;
    }else if(gameBoard[0] == 'O' && gameBoard[4] == 'O' && gameBoard[8] == 'O'){
        return true;
        
    //246
    }else if(gameBoard[2] == 'X' && gameBoard[4] == 'X' && gameBoard[6] == 'X'){
        return true;
    }else if(gameBoard[2] == 'O' && gameBoard[4] == 'O' && gameBoard[6] == 'O'){
        return true;
        
        
    }else{
        return false;
    }
}

void printBoards(){
	system("cls");
	
	printStartingGameBoard();
	printGameBoard();
}

void printStartingGameBoard(){
	cout << "Start Board: " << endl;
	cout << "[0][1][2]" << endl;
	cout << "[3][4][5]" << endl;
	cout << "[6][7][8]" << endl << endl;
}

void printGameBoard(){
	cout << "[" << gameBoard[0] << "][" << gameBoard[1] << "][" << gameBoard[2] << "]" << endl;
	cout << "[" << gameBoard[3] << "][" << gameBoard[4] << "][" << gameBoard[5] << "]" << endl;
	cout << "[" << gameBoard[6] << "][" << gameBoard[7] << "][" << gameBoard[8] << "]" << endl;
}

void whoIsWinner(char winner){
    if(winner == 'X'){
        cout << endl << "You win!";
    }else if(winner == 'O'){
        cout << endl << "Computer win!";
    }else{
        cout << endl << "Draw!";
    }
}







