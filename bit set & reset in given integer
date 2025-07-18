#include <iostream>
using namespace std;

int main() {
    int i=30, set, reset;
    int bit_to_be_set;
    int bit_to_be_reset;
    
    cout << "Enter bit to be set: ";
    cin >> bit_to_be_set;
    set=i|(1<<bit_to_be_set);
    
    cout << "Enter bit to be reset: ";
    cin >> bit_to_be_reset;
    reset=i&(~(1<<bit_to_be_reset));
    
    cout<<"Your number is: "<< set << endl;
    cout<< "Your number is: "<< reset << endl;

    return 0;
}
