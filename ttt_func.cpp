#include <iostream>
#include <vector>
void welcoming() {
    std::cout << "Welcome to Tic Tac Toe!" << std::endl;
}

int positionchoice() {
    int choice;
    std::cout << "Choose position:";
    std::cin >> choice;
    std::cout << std::endl;
    return choice;
}

void tttgrid(std::vector<char> board){
    std::cout << "     |     |      \n";

    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";


}

bool winnercheck(std::vector<char> board, bool NotWinners) {
    if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X' || board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
        NotWinners = false;
    }
    else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X' || board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
        NotWinners = false;
    }
    else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X' || board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
        NotWinners = false;
    }
    else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X' || board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {
        NotWinners = false;
    }
    else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X' || board[0] == 'O' && board[1] == 'O' && board[4] == 'O') {
        NotWinners = false;
    }
    else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X' || board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {
        NotWinners = false;
    }
    else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X' || board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
        NotWinners = false;
    }
    else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X' || board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
        NotWinners = false;
    }
    else {
        NotWinners = true;
    }
    return NotWinners;
}