#include <bits/stdc++.h>
using namespace std;
    int target=56;
    int user_attempts=0;
    string result;
     int user_input;
int guessGame(int user_inputs)
{
    if(user_inputs==target)
      {
        return 56;
      }
    else
       {
        user_attempts++; //1
        cout<<"\nTry again...";
         cin>>user_inputs;//56
         user_input=user_inputs;
         if(user_input<0 && user_input>=100)
         {
            cout<<"\nOops! That’s not a valid guess. The secret lies somewhere between 1 and 100..";
            cin>>user_inputs;
            user_input=user_inputs;
         }
         return user_input;
       }
       
}
int main() {
    //Guess game
    string name;
    cout<<"Hi, Enter your Name to Start your Game :  ";
    cin>>name;
    cout<<"\nRemember You have only 10 attempts\n";
    cout<<"\nGuess the number between 1 to 100 : ";
    cin>>user_input;
    
    while(1)
    {
       int result=guessGame(user_input); //33
       //cout<<result;
       if(result!=56)
       {
                 if(user_attempts!=10) //2!=11
                     {
                        cout<<"\nYou have only "<<10-user_attempts<<" Attempts left !\n";
              
                     }
                else
                      {
                          cout<<"\nSorry you lost the Game!..\n\nGood luck on Next Time\n\n";
                          cout<<"\n\nYou Exceeded total Attempts :  "<<user_attempts<<"\n\n";
                          break;
                      }
          
       }
       else
       {
        cout<<"\nHey..You win the Game  "<<name<<"\n\n";
        cout<<"Congratulations!!";
        cout<<"\n\n";
        break;
       }
        
    }
     return 0;
}