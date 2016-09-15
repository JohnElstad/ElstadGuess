#include<iostream>
//John Elstad This is a simple guesssing game. 9/15/16
#include<cstdlib>
using namespace std;
//John Elstad 9/14/16//this keeps track of whether or not the person wants to play again

int main(){
  char answer = 'Y''Y'){// this loop is to play again
  srand(time(NULL));

  while (answer == 'Y'){
    int randNum = rand() % 101;
    int guessCount = 1;
    int guess;
    cout<<randNum<<endl;
    cout<<"Input a guess"<<endl;
    cin>>guess;
    
    while(guess!=randNum){//this loop is to check if their answer is correct
      if(guess>randNum){
	cout<<"Your guess was too large; enter another guess"<<endl;
	guessCount++;
	cin>>guess;
      }
      else if(guess<randNum){
	cout<<"Your guess was too small; enter another guess"<<endl;
	guessCount++;
	cin>>guess;
      }
    }
    cout<<"You won! It only took your "<<guessCount<<" guesses. Would you like to play again?"<< endl;
    cin>>answer;
  }
}
