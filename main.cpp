#include <iostream>
using namespace std;

int main() {
    int first;
    int second;
    char next;

    do {
        cout << "Please enter first number: ";
        cin >> first;
        cout << "Please enter second number: ";
        cin >> second;
        cout << first << " AND " << second << " : " << (first & second) << endl <<
                first << " OR " << second << " : " << (first | second) << endl <<
                first << " XOR " << second << " : " << (first ^ second) << endl
                << "Continue? [y/n] : ";
        cin >> next;
    } while (next == 'y');

    return 0;
}
