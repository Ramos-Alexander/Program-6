#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, digit, sum = 0;
    
    cout << "Enter a positive number: ";
    cin >> number;
    
    originalNumber = number;
    
    do {
        digit = number % 10;
        sum += digit;
        number /= 10;
    } while (number > 0);
    
    cout << "The sum of the digits is : " << sum << endl;
    
    if (originalNumber % 2 == 0)
        cout << originalNumber << " is divisible by 2" << endl;
    else
        cout << originalNumber << " is not divisible by 2" << endl;
    
    if (originalNumber % 3 == 0)
        cout << originalNumber << " is divisible by 3" << endl;
    else
        cout << originalNumber << " is not divisible by 3" << endl;
    
    if (originalNumber % 4 == 0)
        cout << originalNumber << " is divisible by 4" << endl;
    else
        cout << originalNumber << " is not divisible by 4" << endl;
    
    if (originalNumber % 5 == 0)
        cout << originalNumber << " is divisible by 5" << endl;
    else
        cout << originalNumber << " is not divisible by 5" << endl;
    
    if (originalNumber % 6 == 0)
        cout << originalNumber << " is divisible by 6" << endl;
    else
        cout << originalNumber << " is not divisible by 6" << endl;
    
    if (originalNumber % 7 == 0)
        cout << originalNumber << " is divisible by 7" << endl;
    else
        cout << originalNumber << " is not divisible by 7" << endl;
    
    if (originalNumber % 8 == 0)
        cout << originalNumber << " is divisible by 8" << endl;
    else
        cout << originalNumber << " is not divisible by 8" << endl;
    
    if (originalNumber % 9 == 0)
        cout << originalNumber << " is divisible by 9" << endl;
    else
        cout << originalNumber << " is not divisible by 9" << endl;
    
    return 0;
}
