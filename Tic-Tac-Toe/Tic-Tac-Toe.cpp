/*
 task_3 :-
 a simple Tic-Tac-Toe game that allows two players to play against each other
 By: ahmed mohamed abdellatif
 */
#include <iostream>
#include <stdlib.h>
using namespace std ;

char mat[3][3]={'1','2','3'
                ,'4','5','6'
                ,'7','8','9',};
char play = 'x';
void base() {
    cout<<endl<<"****** Tic-Tac-Toe ******"<<endl;
    cout<<"---------"<<endl;
    for(int r=0 ; r<3 ; r++)
    {
        cout<<"|"<<" ";
        for(int c=0 ; c<3 ; c++)
        {
            cout<<mat[r][c]<<" ";
        }
        cout<<"|"<<endl;
    }
    cout<<"---------"<<endl;
}
//------------------------------------------------------
void replace(){
    char pos ;
    cout<<"enter your position ("<<play<<")"<<endl;
    cin>> pos ;
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            if(mat[r][c]==pos)
            { mat[r][c]=play ; }
        }
    }
    if(play=='x')
    {
        play= 'o';
    }
    else
    {
        play='x';
    }
}
//--------------------------------------------------------
char winner(){
    int x=0 ; int o=0 ; int counter = 0 ;
    for(int r=0 ; r<3 ; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (mat[r][c] == 'x')
                x++;
             if (mat[r][c] == 'o')
                o++;
            if (x == 3)
                return 'x';
             if (o == 3)
                return 'o';
        }
        x=0 ; o=0 ;

    }

    //----------------------------
    for(int c=0 ; c<3 ; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (mat[r][c] == 'x')
                x++;
             if (mat[r][c] == 'o')
                o++;
             if (x == 3)
                return 'x';
             if (o == 3)
                return 'o';

        }
        x=0 ; o=0 ;

    }


    //-------------------------------
    if(mat[0][0]=='x' && mat[1][1]=='x' && mat[2][2]=='x')
        return 'x';
    if(mat[0][0]=='o' && mat[1][1]=='o' && mat[2][2]=='o')
        return 'o';
    //--------------------------------
    if(mat[0][2]=='x' && mat[1][1]=='x' && mat[2][0]=='x')
        return 'x';
    if(mat[0][2]=='o' && mat[1][1]=='o' && mat[2][0]=='o')
        return 'o';
    //-------------------------------
    for(int r=0 ; r<3 ; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (mat[r][c] != 'x' && mat[r][c] != 'o')
                counter++;
        }
    }
    if(counter==0)
        return '=' ;
    else
        return '!' ;

}

int main()
{
    while(winner()=='!')
    {
    base();
    replace();
    winner();
    }
    base();
    if(winner()=='x')
        cout<<"winner is player x"<<endl;
    if(winner()=='o')
        cout<<"winner is player o"<<endl;
    if(winner()=='=')
        cout<<"no winner"<<endl;
    return 0 ;
}

