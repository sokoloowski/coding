#include <stdio.h>

#define KROL 0
#define HETMAN 1
#define WIEZA 2
#define GONIEC 3
#define SKOCZEK 4
#define PIONEK 5
#define KROL_K 6
#define HETMAN_K 7
#define WIEZA_K 8
#define GONIEC_K 9
#define SKOCZEK_K 10
#define PIONEK_K 11
#define PUSTE 12

int plansza[8][8] = {
    {WIEZA_K, SKOCZEK_K, GONIEC_K, HETMAN_K, KROL_K, GONIEC_K, SKOCZEK_K, WIEZA_K},
    {PIONEK_K, PIONEK_K, PIONEK_K, PIONEK_K, PIONEK_K, PIONEK_K, PIONEK_K, PIONEK_K},
    {PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE},
    {PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE},
    {PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE},
    {PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE, PUSTE},
    {PIONEK, PIONEK, PIONEK, PIONEK, PIONEK, PIONEK, PIONEK, PIONEK},
    {WIEZA, SKOCZEK, GONIEC, HETMAN, KROL, GONIEC, SKOCZEK, WIEZA}};

/**
 * @brief Place chessman basing on numerical value on chess board
 * 
 * @param field Chess board field
 * @return char chessman
 */
const char *chessman(int pole)
{
    if (pole == KROL)
        return "♛";
    if (pole == HETMAN)
        return "♚";
    if (pole == WIEZA)
        return "♜";
    if (pole == GONIEC)
        return "♝";
    if (pole == SKOCZEK)
        return "♞";
    if (pole == PIONEK)
        return "♟";

    if (pole == KROL_K)
        return "♔";
    if (pole == HETMAN_K)
        return "♕";
    if (pole == WIEZA_K)
        return "♖";
    if (pole == GONIEC_K)
        return "♗";
    if (pole == SKOCZEK_K)
        return "♘";
    if (pole == PIONEK_K)
        return "♙";

    // default fallback
    return "␣";
}

/**
 * @brief Print current chess board
 * 
 * @param board Chess board
 */
void generateBoard(int board[8][8])
{
    printf("   | A | B | C | D | E | F | G | H |\n");
    printf("---+---+---+---+---+---+---+---+---+\n");
    for (int row = 0; row < 8; row++)
    {
        printf(" %d |", row + 1);
        for (int col = 0; col < 8; col++)
        {
            int field = board[row][col];
            printf(" %s |", chessman(field));
        }
        printf("\n---+---+---+---+---+---+---+---+---+\n");
    }
}

/**
 * @brief Get the move of object
 * 
 * @param board Chess board
 */
void getMove(int board[8][8])
{
    int colFrom, rowFrom,
        colTo, rowTo, toMove;
    char tmpFrom, tmpTo, ch;

    printf("Move from: ");
    scanf("%c%d%c", &tmpFrom, &rowFrom, &ch);
    rowFrom--;
    if (tmpFrom >= 'a' && tmpFrom <= 'h')
        colFrom = tmpFrom - 'a';
    else if (tmpFrom >= 'A' && tmpFrom <= 'H')
        colFrom = tmpFrom - 'A';

    if (rowFrom < 0 || rowFrom >= 8 || colFrom < 0 || colFrom >= 8 || board[rowFrom][colFrom] >= KROL_K)
    {
        printf("Invalid value! Try again!\n");
        getMove(board);
    }

    printf("Move to: ");
    scanf("%c%d%c", &tmpTo, &rowTo, &ch);
    rowTo--;
    if (tmpTo >= 'a' && tmpTo <= 'h')
        colTo = tmpTo - 'a';
    else if (tmpTo >= 'A' && tmpTo <= 'H')
        colTo = tmpTo - 'A';

    if (rowTo < 0 || rowTo >= 8 || colTo < 0 || colTo >= 8)
    {
        printf("Invalid value! Try again!\n");
        getMove(board);
    }

    if (board[rowTo][colTo] != PUSTE)
    {
        printf("This field is already taken! Try again!\n");
        getMove(board);
    }

    // int fromXY = {rowFrom, colFrom},
    //     toXY = {rowTo, colTo};
    // if (!canMove(fromXY, toXY))
    // {
    //     printf("This field is already taken! Try again!\n");
    //     getMove(board);
    // }

    board[rowTo][colTo] = board[rowFrom][colFrom];
    board[rowFrom][colFrom] = PUSTE;
}

// int canMove(int from[2], int to[2])
// {
//     return 1;
//     return 0;
// }

int main(void)
{
    generateBoard(plansza);
    int end = 0;
    while (!end)
    {
        getMove(plansza);
        generateBoard(plansza);
    }
    return 0;
}