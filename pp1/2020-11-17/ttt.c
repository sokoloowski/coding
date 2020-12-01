#include <stdio.h>
#define WYGRANA 1
#define PRZEGRANA -1

int ocena(char pl[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        // rzędy
        if ((pl[x][0] != ' ') && (pl[x][0] == pl[x][1]) && (pl[x][0] == pl[x][2]))
        {
            if (pl[x][0] == 'x')
                return WYGRANA;
            else if (pl[x][0] == 'o')
                return PRZEGRANA;
        }
        // kolumny
        if ((pl[0][x] != ' ') && (pl[0][x] == pl[1][x]) && (pl[0][x] == pl[2][x]))
        {
            if (pl[0][x] == 'x')
                return WYGRANA;
            else if (pl[0][x] == 'o')
                return PRZEGRANA;
        }
    };
    // lewa góra do prawy dół
    if ((pl[0][0] != ' ') && (pl[0][0] == pl[1][1]) && (pl[0][0] == pl[2][2]))
    {
        if (pl[0][0] == 'x')
            return WYGRANA;
        else if (pl[0][0] == 'o')
            return PRZEGRANA;
    }
    // lewy dół do prawa góra
    if ((pl[2][0] != ' ') && (pl[2][0] == pl[1][1]) && (pl[2][0] == pl[0][2]))
    {
        if (pl[2][0] == 'x')
            return WYGRANA;
        else if (pl[2][0] == 'o')
            return PRZEGRANA;
    }
    // gdy remis
    return 0;
}

int minimax(char pl[3][3], int gl, char zn)
{
    int oc = ocena(pl);
    //zakończenie rekurencji
    if (oc == WYGRANA || oc == PRZEGRANA)
        return oc;
    if (gl == 0)
        return 0;

    if (zn == 'x')
    {
        int wmax = -5;
        int war;
        int brak_ruchu = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (pl[i][j] == ' ')
                {
                    pl[i][j] = 'x';
                    war = minimax(pl, gl - 1, 'o');
                    pl[i][j] = ' ';
                    if (war > wmax)
                    {
                        wmax = war;
                    }
                    brak_ruchu = 0;
                }
            }
        }
        if (brak_ruchu)
            return 0;
        else
            return wmax;
    }
    else
    {
        int wmin = 5;
        int war;
        int brak_ruchu = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (pl[i][j] == ' ')
                {
                    pl[i][j] = 'o';
                    war = minimax(pl, gl - 1, 'x');
                    pl[i][j] = ' ';
                    if (war < wmin)
                    {
                        wmin = war;
                    }
                    brak_ruchu = 0;
                }
            }
        }
        if (brak_ruchu)
            return 0;
        else
            return wmin;
    }
}

void ruchy(char pl[3][3], int gl, char zn, int *ri, int *rj)
{
    int war;
    int wmax = -5;
    if (zn == 'x')
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (pl[i][j] == ' ')
                {
                    pl[i][j] = 'x';
                    war = minimax(pl, gl - 1, 'o');
                    pl[i][j] = ' ';
                    if (war > wmax)
                    {
                        wmax = war;
                        *ri = i;
                        *rj = j;
                    }
                }
            }
        }
    }
}

void wypisz(char pl[3][3])
{

    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
                printf("%d ", i);
            printf("%c ", pl[i][j]);
            if (j == 2)
                printf("\n");
        }
    }
}

int main(void)
{
    char pl[3][3] = {"   ", "   ", "   "};
    int i = 0;
    while (i < 5)
    {
        int oc = ocena(pl);
        if (oc == WYGRANA)
        {
            printf("\nWygrywa x\n");
            break;
        }
        if (oc == PRZEGRANA)
        {
            printf("\nWygrywa o\n");
            break;
        }
        int ruch_i, ruch_j, moj_i, moj_j;
        ruchy(pl, 9, 'x', &ruch_i, &ruch_j);
        pl[ruch_i][ruch_j] = 'x';
        printf("\nRuch komputera: \n");
        wypisz(pl);
        oc = ocena(pl);
        if (oc == WYGRANA)
        {
            printf("\nWygrywa X\n");
            break;
        }
        if (oc == PRZEGRANA)
        {
            printf("\nWygrywa O\n");
            break;
        }
        if (i == 4)
        {
            printf("\nRemis!\n");
            wypisz(pl);
            break;
        }
        printf("\nTwoj ruch: \n");
        scanf("%d %d", &moj_i, &moj_j);
        if (pl[moj_i][moj_j] == ' ')
            pl[moj_i][moj_j] = 'o';
        oc = ocena(pl);
        i++;
    }
    return 0;
}