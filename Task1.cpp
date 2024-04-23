#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
void random(int* num,int n) {
    *num=rand()%n+1;
}

int main() {
    srand(time(nullptr));
    int turns=1,guess,num,n=10;
    random(&num,n);
    while(guess!=num) {
        system("cls");
        cout << "Guess the number between 1 to " <<n<<": ";
        cin >> guess;
        if(guess!=num) {
            turns++;
            if(guess>num) {
                cout << "Your Guess was too high" << endl;
            }
            else {
                cout << "Your Guess was too low" << endl;
            }
        }
        else {
            cout << "Congrats you guessed the number \"" << num <<"\" in "<<turns<<" turns" << endl;
        }
        sleep(1000);
    }
    
} 