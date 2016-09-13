





#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  cout << "Enter a guess";
  //guessing game
  srand(time(NULL));
  int guess;
  cin >> guess;
  int guessCounter = 0;
  int randNumber = rand() % 100+1;
  cout << randNumber << endl;
  
}
