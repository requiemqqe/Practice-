#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int mysteryNum = rand() % 21;

    int guess;
    int attempts = 0;

    while(true) {
        cout << "Enter the num between 0-20: ";
        cin >> guess;

        if(guess < 0 || guess > 20) {
            cout << "Error";
            continue;
        }

        attempts++;

        if(guess < mysteryNum) {
            cout << "Your num is less than intended num." << endl;
        } else if(guess > mysteryNum) {
            cout << "Your num is bigger than intended num." << endl;
        } else {
            cout << "Your`re guessed right num!!";
            break;
        }
    }

    return 0;
}