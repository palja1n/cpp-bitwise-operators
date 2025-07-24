#include <iostream>
using namespace std;

int main() {
    int a=13;
    int b=15;
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_not=~a;
    int bitwise_xor=a^b;
    int bitwise_leftshift=a<<2;
    int bitwise_rightshift=b>>1;
    
    
    cout << "Bitwise AND: "<<bitwise_and<<endl;
    cout << "Bitwise OR: "<<bitwise_or<<endl;
    cout << "Bitwise NOT: "<<bitwise_not<<endl;
    cout << "Bitwise XOR: "<<bitwise_xor<<endl;
    cout << "Bitwise Left Shift: "<<bitwise_leftshift<<endl;
    cout << "Bitwise Right Shift: "<<bitwise_rightshift<<endl;

    return 0;
}
