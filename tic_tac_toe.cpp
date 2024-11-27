#include<iostream>
using namespace std;

char  loc[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice,row,col,i;
char turn='X';
bool draw=false;

void display(){
    cout<<"structure & live user enter position \n";
    cout<<"     |       |       \n";
    cout<< loc[0][0]<<"    |  "<<loc[0][1]<<"    | "<<loc[0][2]<<endl;
    cout<<"_____|_______|_______\n";
    cout<<"     |       |       \n";
    cout<< loc[1][0]<<"    |  "<<loc[1][1]<<"    | "<<loc[1][2]<<endl;
    cout<<"_____|_______|_______\n";
    cout<<"     |       |       \n";
    cout<< loc[2][0]<<"    |  "<<loc[2][1]<<"    | "<<loc[2][2]<<endl;
    cout<<"     |       |       \n";

}

void input()
{
    if(turn=='X')
    cout<<"palyer 1 enter your position [ X ] : ";
    else if (turn=='O')
    cout<<"player 2 enter the position [ O ] : ";

    cin>>choice;
    switch (choice)
    {
        case 1:
            row=0;col=0;
            break;
        case 2:
            row=0;col=1;
            break;
        case 3:
            row=0;col=2;
            break;
        case 4:
            row=1;col=0;
            break;
        case 5:
            row=1;col=1;
            break;
        case 6:
            row=1;col=2;
            break;
        case 7:
            row=2;col=0;
            break;
        case 8:
            row=2;col=1;
            break;
        case 9:
            row=2;col=2;
            break;
        default:
        cout<<"invalid choice!  \n Please try again  ";
            break;
    }
    if(turn=='X' && loc[row][col]!='X' && loc[row][col]!='O')
    {
    loc[row][col]=turn;
    turn='O';
    }
    else if (turn=='O' && loc[row][col]!='X' && loc[row][col]!='O')
    {
        loc[row][col]=turn;
        turn='X';
    }
    else
    {
        cout<<"Already fill the box ";
    }

    display();

    
}

bool result()
{
    for(i=0;i<3;i++)
        if(loc[i][0]==loc[i][1]&&loc[i][0]==loc[i][2] || loc[0][i]==loc[1][i]&&loc[0][i]==loc[2][i] )
        return false;

        else if(loc[0][0]==loc[1][1]&&loc[0][0]==loc[2][2] || loc[0][2]==loc[1][1]&&loc[0][2]==loc[2][0] )
        return false;

        


    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(loc[i][j] != 'X' || loc[i][j] != 'O')
    return true;


        draw=true;
        return false;
}


int main()
{

    cout<<"Tic tec toe game \n  2 players \n enjoy the game  ";
    display();

    while(result())
    {
     display();
    input();
    result();
    }

    if(turn == 'X' && draw == false){
        cout<<"Congratulations!Player with 'O' has won the game";
        return 0;
    }
    else if(turn == 'O' && draw == false){
        cout<<"Congratulations!Player with 'X' has won the game";
        return 0;
    }
    else
    {
        cout<<"Game is draw!!";
    }
    
}