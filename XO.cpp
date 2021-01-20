#include <iostream>
#include <cstdlib>

#define BOARDSIZE 9
#define COLS 3

using namespace std;

void printStartingGameBoard();
void printGameBoard();
void printBoards();
void whoIsWinner(char winner);
bool isFieldEmpty(char gameBoard[], int move);
int humanMakesMove();
int computerMakesMove();
void makingMove(int move, int turn);
char hasWon();

int possibleMoves[BOARDSIZE] = {4, 3, 5, 7, 1, 0, 6, 8, 2};
char gameBoard[BOARDSIZE] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

int main(){
	int turn = 1;
	int humanMove, computerMove;
	
	while(true){
		humanMove = humanMakesMove();
		makingMove(humanMove, turn);
		turn++;
		
		if(hasWon() == 'X'){
			printBoards();
			whoIsWinner('X');
			return 0;
		}
		
		computerMove = computerMakesMove();
		makingMove(computerMove, turn);
		turn++;
		
		if(hasWon() == 'O'){
			printBoards();
			whoIsWinner('O');
			return 0;
		}
		
		if(turn == 10){
			printBoards();
			whoIsWinner('D');
			
			return 0;
		}
	}
}

void printBoards(){
	system("cls");
	
	printStartingGameBoard();
	printGameBoard();
}

void printStartingGameBoard(){
	cout << "Start Board: " << endl;
	cout << "[7][8][9]" << endl;
	cout << "[4][5][6]" << endl;
	cout << "[1][2][3]" << endl << endl;
}

void printGameBoard(){
	cout << "[" << gameBoard[6] << "][" << gameBoard[7] << "][" << gameBoard[8] << "]" << endl;
	cout << "[" << gameBoard[3] << "][" << gameBoard[4] << "][" << gameBoard[5] << "]" << endl;
	cout << "[" << gameBoard[0] << "][" << gameBoard[1] << "][" << gameBoard[2] << "]" << endl;
}

char hasWon(){
	int winConditions[][COLS] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
	
	for (int i = 0; i < 8; i++){
        if((gameBoard[winConditions[i][0]] == 'X' or gameBoard[winConditions[i][0]] == 'O') and
            gameBoard[winConditions[i][0]] == gameBoard[winConditions[i][1]] and
            gameBoard[winConditions[i][0]] == gameBoard[winConditions[i][2]])
            {
                return gameBoard[winConditions[i][0]];
            }
    }
    
    return 0;
}

int humanMakesMove(){
	printBoards();
	
	while(true){
		int move;
		
		cout << "Your move: ";  
		cin >> move;
	
		if(isFieldEmpty(gameBoard, move)){
			return move;
		}else{
			cout << "You inputed wrong position!" << endl << endl;
		}
	}
}

int computerMakesMove(){
	printBoards();
	
	int movesCounter = 0, move;
	
	while (movesCounter < BOARDSIZE){
        move = possibleMoves[movesCounter];
        
        if(isFieldEmpty(gameBoard, move + 1)){
            return move;
        }
        
		movesCounter++;
    }
}
		
void makingMove(int move, int turn){
	if(turn % 2 != 0){
		gameBoard[move - 1] = 'X';
	}else{
		gameBoard[move] = 'O';
	}
}

bool isFieldEmpty(char gameBoard[], int move){
    if (gameBoard[move - 1] == ' '){
        return true;
    }

    return false;
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







