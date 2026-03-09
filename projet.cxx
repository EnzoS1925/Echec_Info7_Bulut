#include <iostream>
using namespace std;

const int SIZE = 8;

enum PIECE {
    VIDE,
    ROI_N, REINE_N, TOUR_N, FOU_N, CAVALIER_N, PION_N,
    ROI_B, REINE_B, TOUR_B, FOU_B, CAVALIER_B, PION_B 
};

using Plateau = PIECE [SIZE][SIZE];

void init_board(PIECE tab[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tab[i][j] = VIDE;
        }
    }
}

void print_board(PIECE tab[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

PIECE get_square(int x, int y,PIECE tab[SIZE][SIZE]) {
    if (x >= 0 && x < SIZE && y >= 0 && y < SIZE) {
        return tab[x][y];
    }
    return VIDE;
}

void set_square(int x, int y, PIECE tab[SIZE][SIZE],PIECE p) {
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        tab[x][y] = p;
    }
}

void start(PIECE tab[SIZE][SIZE]){
    for (int j=0;j<SIZE;j++){
        tab[1][j] = PION_N;
        tab[6][j] = PION_B;
    }

    // A continuer
}

int main() {
    PIECE board[SIZE][SIZE];    
    init_board(board);
    print_board(board);
    cout << endl << get_square(0,0,board) << endl;
    set_square(0,0,board,TOUR_N);
    print_board(board);
    start(board);
    cout << endl;
    print_board(board);
    
    return 0;
}