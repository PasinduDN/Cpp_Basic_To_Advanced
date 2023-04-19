/* 

+ Addituion - Adds together two values
- Subtraction - Subtracts one value from another
* Multiplication - Multiplies two values
/ Division - Divides one value by another
% Modulus - Returns the division remainder
++ Increment - Increases the value of a variable by 1
-- Decrement - Decreases the value of a variable by 1

*/

#include <iostream>
using namespace std;

int main(){
    int x=20;
    int y=10;

    cout << " Addition: " << x+y << endl;
    cout << " Subtraction: " << x-y << endl;
    cout << " Multiplication: " << x*y << endl;
    cout << " Division: " << x/y << endl;
    cout << " Modulus: " << x%y << endl;
    cout << " Increment: " << ++x << endl;
    cout << " Decrement: " << --y << endl;
    return 0;
}