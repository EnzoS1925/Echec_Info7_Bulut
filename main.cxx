#include <iostream>
#include "view.hpp"
#include "board.hpp"
#include "mask.hpp"
using namespace std;



int main() {
    PIECE board[SIZE][SIZE]; 
    Masque m;   
    int coup_jouer =0;
    int x,y;
    int pts_blanc=0;
    int pts_noir=0;
    init_board(board);
    start(board);
    empty_mask(m); 
    print_board_FEN(board);


    /* TEST DES PIECES QUI PEUVENT BOUGER.
    highlight_movables_pieces(1,board,m);
    print_board_with_mask(board,m);
    clear_mask(m);
    */

    while (pts_blanc != 15 && pts_noir != 15){
        cout << "Quel pièce voulez-vous déplacer ? (ligne et colonne)";
        cin >> x >> y;
        highlight_possible_moves(x,y,board,m);
        print_board_with_mask(board,m);
        move_piece(board,x,y,&pts_noir,&pts_blanc); 
        print_board_FEN(board);
        coup_jouer++;
        cout << "Le nombre de coup déja jouer est : " << coup_jouer << endl;
        cout << "Points Noir : "  << pts_noir << "\t Points Blanc : " << pts_blanc << endl;

    }
    return 0;
}