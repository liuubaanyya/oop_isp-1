#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    int result = calc.add(3, 4);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
