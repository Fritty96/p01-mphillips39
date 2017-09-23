#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main(){

int Guess;


cout << "Guess a Number between One and Ten." << endl;
cin >> Guess;





srand  (time(NULL));
int randomNumber;
randomNumber = rand() % 10 + 1;

int Dif = randomNumber - Guess;
Dif= abs(Dif);


    if (randomNumber == Guess){
    cout << "You guessed correctly! You Win!" << endl;
    }
    else {
    cout << "You were off by " << Dif << ". Sorry, you lose." << endl;
    }







return 0;

}
