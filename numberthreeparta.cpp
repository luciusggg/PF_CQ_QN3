#include <iostream>
using namespace std;

int main() {
    int first, last;
    
int sum_from_to(int first, int last);

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the last number: ";
    cin >> last;

    
    cout << "The sum from " << first << " to " << last << " is " << sum_from_to(first, last) << endl;

    return 0;
}
int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; i++) {
        sum += i;
    }
    return sum;
}
