#include <iostream>
using namespace std;
void display(char arr[3][3], char player)
{
    cout<<"-------\n";
    for(int i=0; i<3; i++)
    {
        cout<<'|';
        for(int j=0 ; j<3; j++)
        {
            cout<<arr[i][j]<<'|';
        }
        if(i<2)
            cout<<"\n--+-+--\n";
        else
            cout<<"\n-------\n";
    }
    if(player!=' ')
        cout<<"Player: "<<player<<" Enter your move"<<'\n';
}
bool isValidMove(int x,int y, char arr[3][3])
{
    if(x<0 || y<0 || x>2 || y>2 || arr[x][y]!=' ')
        return false;
    else
        return true;
}
bool isWinner(char arr[3][3], char player)
{
    //Rows
    for(int r=0; r<3; r++)
    {
        if(arr[r][0]==player&&arr[r][1]==player&&arr[r][2]==player)
            return true;
    }
    //Colnums
    for(int c=0; c<3; c++)
    {
        if(arr[0][c]==player&&arr[1][c]==player&&arr[2][c]==player)
            return true;
    }
    //Left digonal
    if(arr[0][0]==player&&arr[1][1]==player&&arr[2][2]==player)
        return true;
    //right diagonal
    if(arr[0][2]==player&&arr[1][1]==player&&arr[2][0]==player)
        return true;
    return false;
}
bool isDraw(char arr[3][3])
{
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
            if(arr[r][c]==' ')
                return false;

    }
    return true;
}
void XO_game()
{
    char player='X';
    char grid[3][3]=
    {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '},
    };
    cout<<"X-O Game\n";
    while(true)
    {
        display(grid,player);
        int x, y;
        cin>>x>>y;
        x--, y--;
        if(isValidMove(x,y, grid)==false)
        {
            cout<<"Enter valid move\n";
        }
        else
        {
            grid[x][y]=player;
            if(isWinner(grid,player)==true)
            {
                cout<<"Player "<<player<<" is winner\n";
                display(grid,' ');
                break;
            }
            if(isDraw(grid)==true)
            {
                cout<<"Game is Draw\n";
                display(grid,' ');
                break;
            }
            /* if(player=='X')
                 player='O';
             else
                 player='X'; */
            player=((player=='X')?'O':'X');
        }
    }

}
int main()
{
    XO_game();
    return 0;
}
