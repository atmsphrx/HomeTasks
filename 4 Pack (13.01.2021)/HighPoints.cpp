#include <iostream>
#define N 10

using namespace std;

int main(){
    int array[N] = {1, -4, -5, -3, -5, 0, 6, 4, 2, 9};

    int max = array[0];
    int downhillPoint;
    bool firstDownhillMove = false , deepesetVisiblePoint = false;

    for(int i = 1; i < N; i++){
        if(array[i] > max){
            max = array[i];
        }else if(max == array[0] and array[i] < max){
            if(!firstDownhillMove){
                downhillPoint = array[i];
                firstDownhillMove = true;
            }else if(downhillPoint > array[i] and deepesetVisiblePoint == false){
                downhillPoint = array[i];
            }else if(downhillPoint < array[i]){
                downhillPoint = array[i];
                deepesetVisiblePoint = true;
            }else{
                cout << array[i] << " ";
            }
        }else{
            cout << array[i] << " ";
        }
    }

    return 0;
}
