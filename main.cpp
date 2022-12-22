#include <iostream>

struct Calculator {
    int number;
};
    int add(Calculator first, Calculator second){
        return first.number + second.number;
    };

    int sub(Calculator first, Calculator second){
        return first.number - second.number;
    };

    int multi(Calculator first, Calculator second){
        return first.number * second.number;
    };

    int degree(Calculator first, Calculator second){
        int k = first.number;
        for(int i = 1; i < second.number; i++){
            k = k * first.number;
        }
        return k;
    };

    int fact(Calculator first){
        int k = 1;
        for(int i = 1; i < first.number + 1; i++){
            k = k * i;
        }
        return k;
    };

    int invoke(Calculator first, Calculator second, int (*func)(Calculator, Calculator)){
        return func(first, second);
    };



int main() {
    int a,b;
    char k;
    std::cout << "What kind of operation do you want to do?" << std::endl;
    std::cin >> k;
    switch (k){
        case '+':{
            std::cout << "Enter first number" << std::endl;
            std::cin >> a;
            std::cout << "Enter second number" << std::endl;
            std::cin >> b;
            Calculator first{a};
            Calculator second{b};
            std::cout << "Result: " << std::endl;
            std::cout <<invoke(first, second, &add);
            break;
        }
        case '-':{
            std::cout << "Enter first number" << std::endl;
            std::cin >> a;
            std::cout << "Enter second number" << std::endl;
            std::cin >> b;
            Calculator first{a};
            Calculator second{b};
            std::cout << "Result: " << std::endl;
            std::cout <<invoke(first, second, &sub);
            break;
        }
        case '*':{
            std::cout << "Enter first number" << std::endl;
            std::cin >> a;
            std::cout << "Enter second number" << std::endl;
            std::cin >> b;
            Calculator first{a};
            Calculator second{b};
            std::cout << "Result: " << std::endl;
            std::cout <<invoke(first, second, &multi);
            break;
        }
        case '^':{
            std::cout << "Enter first number" << std::endl;
            std::cin >> a;
            std::cout << "Enter second number" << std::endl;
            std::cin >> b;
            Calculator first{a};
            Calculator second{b};
            std::cout << "Result: " << std::endl;
            std::cout <<invoke(first, second, &degree);
            break;
        }
        case '!':{
            std::cout << "Enter number" << std::endl;
            std::cin >> a;
            Calculator first{a};
            std::cout << "Result: " << std::endl;
            std::cout << fact(first);
            break;
        };

    }
    return 0;
}
