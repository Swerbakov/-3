#include <iostream>

int main() {
    int a, b, c;
    
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;
    
    int max1 = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    int min1 = (a <= b) ? ((a <= c) ? a : c) : ((b <= c) ? b : c);
    int mid = (a + b + c) - max1 - min1;
    
    std::cout << "Результат: " << max1 << " " << mid << " " << min1 << std::endl;
    
    return 0;
}
