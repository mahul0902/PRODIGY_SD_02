#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"---------------------- NUMBER GUESSING GAME -----------------------------\n";
    cout<<"The random number generated is between 1 to 100.\n";
    srand(time(0));
    int random = 1 + (rand()%100);
    int guess,count=0;
    while(true){
        cout<<"Enter the guess"<<endl;
        cin>>guess;
        if(guess == random){
            cout<<"Hurray! You guessed it."<<endl;
            count++;
            break;
        }
        else if(guess<random){
            cout<<"The guess is TOO LOW"<<endl;
            count++;
        }
        else{
            cout<<"The guess is TOO HIGH"<<endl;
            count++;
        }
    }
    cout<<"Number of guesses = "<<count<<endl;
    return 0;
}