#include <iostream>
#include <fstream>

class Logger {
public:
    void log(const std::string& message) {
        // Логіка запису повідомлення до файлу журналу
        std::ofstream logFile("logfile.txt", std::ios::app);
        logFile << message << std::endl;
        logFile.close();
    }
};

class Calculator {
public:
    int add(int a, int b) {
        int result = a + b;
        std::string logMessage = "Operation: " + std::to_string(a) + " + " + std::to_string(b) + " = " + std::to_string(result);
        logger.log(logMessage);
        return result;
    }

private:
    Logger logger;
};

int main() {
    Calculator calc;
    int result = calc.add(3, 4);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
