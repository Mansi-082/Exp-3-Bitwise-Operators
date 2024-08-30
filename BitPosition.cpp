//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, setPos, resetPos;

    // Taking inputs from the user
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> setPos;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> resetPos;

    // Display the input in binary form
    cout << num<<" in binary is: " << bitset<8>(num) << endl;

    // Set the specified bit
    num |= (1 << setPos);
    cout << "Result after setting bit number " << setPos << " is: " << bitset<8>(num) << endl;

    // Reset the specified bit
    num &= ~(1 << resetPos);
    cout << "Result after resetting bit number " << resetPos << " is: " << bitset<8>(num) << endl;

    return 0;
}
