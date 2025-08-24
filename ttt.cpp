#include "ttt_func.h"
#include <iostream>
#include <vector>
int main(){
    std::vector<char> board = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    bool NotWinners = true;
    int loopcounter = 0;
    while(NotWinners) {
        loopcounter++;
        tttgrid(board);
        int choice;
        if (loopcounter % 2 == 0) {
            choice = positionchoice();
            board[choice] = 'X';
        }
        else {
            choice = positionchoice();
            board[choice] = 'O';
        }
        NotWinners = winnercheck(board, NotWinners);

    }
    if (loopcounter % 2 == 0) {
        std::cout << "El jugador X ha ganado!\n";
    }
    else {std::cout << "El jugador O ha ganado!\n";}
}