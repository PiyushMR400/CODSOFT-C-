#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    int num,s;
    int input;
    s=rand();
    num=s%100;
    
     cout << "start guessing ";
        do {
    
        cin >> input;

        if (input == num) {
            cout << "you guessed right\n";
             
        } else if (input <num) {
            cout << "Too low\n";
        } else {
            cout << "Too high\n";
        }
       } while (num!=input);

    return 0;
}
