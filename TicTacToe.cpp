#include <iostream>
using namespace std;
char Matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
void Draw()
{
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << Matrix[i][j] << " ";
        }
    }
}
void Input()
{
    int a;
    cout <<endl << "Press the number of the field: ";
    cin >> a;
    if (a == 1)
        Matrix[0][0] = player;
    if (a == 2)
        Matrix[0][1] = player;
    if (a == 3)
        Matrix[0][2] = player;
    if (a == 4)
        Matrix[1][0] = player;
    if (a == 5)
        Matrix[1][1] = player;
    if (a == 6)
        Matrix[1][2] = player;
    if (a == 7)
        Matrix[2][0] = player;
    if (a == 8)
        Matrix[2][1] = player;
    if (a == 9)
        Matrix[2][2] = player;
}
void Toggleplayer()
{
    if (player == 'X')
    {
        player = 'O';
    }
    else
        player = 'X';
}
/*  123
    456
    789*/
char Win()
{
    if (Matrix[0][0] == 'X' && Matrix[0][1] == 'X' && Matrix[0][2] == 'X')
        return 'X';
    if (Matrix[1][0] == 'X' && Matrix[1][1] == 'X' && Matrix[1][2] == 'X')
        return 'X';
    if (Matrix[2][0] == 'X' && Matrix[2][1] == 'X' && Matrix[2][2] == 'X')
        return 'X';
    if (Matrix[0][0] == 'X' && Matrix[1][0] == 'X' && Matrix[2][0] == 'X')
        return 'X';
    if (Matrix[0][1] == 'X' && Matrix[1][1] == 'X' && Matrix[2][1] == 'X')
        return 'X';
    if (Matrix[0][2] == 'X' && Matrix[1][2] == 'X' && Matrix[2][2] == 'X')
        return 'X';  
    if (Matrix[0][0] == 'X' && Matrix[1][1] == 'X' && Matrix[2][2] == 'X')
        return 'X';
    if (Matrix[0][2] == 'X' && Matrix[1][1] == 'X' && Matrix[2][0] == 'X')
        return 'X';  
    


    if (Matrix[0][0] == 'O' && Matrix[0][1] == 'O' && Matrix[0][2] == 'O')
        return 'O';
    if (Matrix[1][0] == 'O' && Matrix[1][1] == 'O' && Matrix[1][2] == 'O')
        return 'O';
    if (Matrix[2][0] == 'O' && Matrix[2][1] == 'O' && Matrix[2][2] == 'O')
        return 'O';
    if (Matrix[0][0] == 'O' && Matrix[1][0] == 'O' && Matrix[2][0] == 'O')
        return 'O';
    if (Matrix[0][1] == 'O' && Matrix[1][1] == 'O' && Matrix[2][1] == 'O')
        return 'O';
    if (Matrix[0][2] == 'O' && Matrix[1][2] == 'O' && Matrix[2][2] == 'O')
        return 'O';  
    if (Matrix[0][0] == 'O' && Matrix[1][1] == 'O' && Matrix[2][2] == 'O')
        return 'O';
    if (Matrix[0][2] == 'O' && Matrix[1][1] == 'O' && Matrix[2][0] == 'O')
        return 'O';  
}
int main()
{
    while (1)
    {
        Input();
        cout << endl;
        Draw();
        if (Win() == 'X')
        {
            cout <<endl << "X wins";
            break;
        }
        else if (Win() == 'O')
        {
            cout <<endl << "O wins";
            break;
        }
        Toggleplayer();
    }
    return 0;
}
