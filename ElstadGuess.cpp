#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//John Elstad 9/14/16

int main(){
  char answer = 'Y';
  srand(time(NULL));

  while (answer == 'Y'){
    int randNum = rand() % 101;
    int guessCount = 1;
    int guess;
    cout<<randNum<<endl;
    cout<<"Input a guess"<<endl;
    cin>>guess;
    
    while(guess!=randNum){
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
