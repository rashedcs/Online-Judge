#include <iostream>
using namespace std;

void print_hex(int value)
{
    if (value == 0)
        return;

    int rem = value % 16;
    value /= 16;
    print_hex(value); //first execute recurency and print next value

    //after return print the less significant digit
    if (rem > 9)
        cout << (char)(rem - 10 + 'A');
    else
        cout << rem;
}

int main() 

    cout << "enter decimal number: ";
    long dec;
    cin >> dec;
    print_hex(dec);
    cout << endl;
    return 0;
}
