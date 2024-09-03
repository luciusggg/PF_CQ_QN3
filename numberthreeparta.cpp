#include <iostream>

int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = sum_from_to(1, 5);
    std::cout << "Sum from 1 to 5 is: " << result << std::endl;
    return 0;
}
