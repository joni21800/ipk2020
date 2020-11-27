#include <iostream>
#include <cmath>

double Miternachtsformel(double a, double b, double c) {
    if (a == 0) {
        std::cout << "Durch 0 geteilt" << "\n";
        return 1;
    }
    if (a == b) {
        std::cout << "Keine Eindeutige Lösung" << "\n";
        return 1;
    }
    if ((b * b - 4 * a * c) < 0) {
        std::cout << "Lösung Komplex!" << "\n";
        return 1;
    }
    double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    std::cout << "x1: " << x1 << "\n";
    std::cout << "x2: " << x2 << "\n";
    return x1, x2;

}

void use_Mitternacht() {
    double a, b, c;
    std::cout << "enter a:";
    std::cin >> a;
    std::cout << "enter b:";

    std::cin >> b;
    std::cout << "enter c:";
    std::cin >> c;
    Miternachtsformel(a, b, c);
}

void collatz_Vermutung(int number) {
    while (true) {
        std::cout << number << "\n";
        if (number % 2 == 0) {
            number /= 2; //number = number/2
        } else {
            number = number * 3 + 1;
        }
        if (number == 1 or number == 0 or number == -5 or number == -17) {
            break;
        }
    }
    std::cout << "Ergebnis: " << number << "\n";

}

void fibonacci(int n) {
    long long int a = 0;
    long long int b = 1;
    if (n >= 1) {
        if (n == 1) {
            std::cout << 0;
        } else {
            std::cout << "0" << ", 1";
            for (int i = 2; i < n; i++) {
                long long int c = a + b;
                a = b;
                b = c;
                std::cout << ", " << c;

            }
        }
    }else{
        std::cout<<"Ungültige eingabe!"<< "\n";
    }

}

void use_Fibbonaci() {
    int a;
    std::cout << "enter f(n)";
    std::cin >> a;
    fibonacci(a);
}
int fibonacci_rekursiv(int n){
    if(n== 1) {
        std::cout << 0;
        return 0;
    }else if(n== 2){
        std::cout <<1;
        return 1;
    }else{
        std::cout<< fibonacci_rekursiv(n-1)+ fibonacci_rekursiv(n-2);
        return 0;
    }
}

int main() {

    //use_Mitternacht();
    //collatz_Vermutung(34);
    use_Fibbonaci();
    fibonacci_rekursiv(7);

}