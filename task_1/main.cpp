/*task_1
 a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
 the user should guess a number from 1 to 100 .
 By: Ahmed mohamed abdellatif
 */

#include <iostream>
#include<cstdlib>
#include<ctime>
using  namespace std ;
int main() {
    int num , guess ;
    bool test = true ;
    srand(time(0)) ;
    num = rand()%100+1 ;
    cout<<" guess a number from 1 to 100 : "<<endl ;
    while ( test )
    {

        cin >> guess ;
        if(guess>num)
        {
            if((guess-num)>50)
                cout<<" your guess is too high try again :";
            else
                cout<<"your guess is higher than the number try again :";
        }
        else if(guess<num)
        {
            if((num-guess)>50)
                cout<<" your guess is too low try again :";
            else
                cout<<"your guess is lower than the number try again :";
        }
        else if(guess==num)
        {
            cout<<"correct answer";
            test = false ;
        }
    }
    return 0;
}
