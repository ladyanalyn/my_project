#include <iostream>
using namespace std;

int main () {
    char answer;

    cout << "1. What is the name of the toy cowboy in Toy Story?" << endl;
    cout << "A. Buzz Lightyear" << endl;
    cout << "B. Woody" << endl;
    cout << "C. Bo Peep" << endl;
    cout << "Enter your choice (A, B, or C): ";
    cin >> answer;

    switch (answer) {
        case 'A':
        case 'a':
           cout << "Incorrect. Buzz Lightyear is toy astronaut." << endl;
           break;
        case 'B':
        case 'b':
           cout << "Correct. Woody is the toy cowboy." << endl;
           break;
        case 'C':
        case 'c':
           cout << "Incorrect. Bo Peep is the girlfriend the toy cowboy." << endl;
           break;
        default:
           cout << "Invalid choice." << endl;
    }

    cout << "2. What animal have eight legs?" << endl;
    cout << "A. Chicken" << endl;
    cout << "B. Cat" << endl;
    cout << "C. Spider" << endl;
    cout << "Enter your choice (A, B, or C): ";
    cin >> answer;

    switch (answer) {
        case 'A':
        case 'a':
           cout << "Incorrect. Chicken have two legs." << endl;
           break;
        case 'B':
        case 'b':
           cout << "Incorrect. Cat have four legs." << endl;
           break;
        case 'C':
        case 'c':
           cout << "Correct. Spider have eight legs." << endl;
           break;
        default:
           cout << "Invalid choice." << endl;
    }

    return 0;
}
