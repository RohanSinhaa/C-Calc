#include <iostream>

float pow(float num_1, float num_2){
    float result = 1;
    for ( float i = 1; i <= num_2; i++){
        result *= num_1;
    }
    return result; 
}
float Sin(float num){
    float sine;
    sine = num - num*num*num/6 + num*num*num*num*num/120 - num*num*num*num*num*num*num/5040;
    return sine;
}
float Cos(float num){
    float cosine;
    cosine = 1 - num*num/2 + num*num*num*num/24 - num*num*num*num*num*num/720;
    return cosine;
}





int main(){
    float num;
    float num2;
    float num3;
    int op;
    int op2;
    int op3;
    int op4;
    char ch = 'y';   
    std::cout << "Enter 1st number: ";
    std::cin >> num;
    while (ch == 'y'){
        std::cout << "For Add, Sub, Mult, Div & Power, enter 1" << std::endl;
        std::cout << "For Sin, Cos, Tan & Exponent, enter 2" << std::endl;
        std::cout << "Enter choice: " << std::endl;
        std::cin >> op2;
        if (op2 == 1){
        std::cout << "Enter other number: ";
        std::cin >> num2;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Exponent" << std::endl;
        std::cout << "Enter your choice for operation: ";
        std::cin >> op;
        if (op == 1){
            num += num2;
        } else if (op == 2){
            num -= num2;
        } else if (op == 3){
            num *= num2;
        } else if (op == 4){
            num /= num2;
        } else if (op == 5){
            num = pow(num,num2);
        } else {
            std::cout << "Invalid entry" << std::endl;
            continue;
        }} else {
        std::cout << "1. Sine" << std::endl;
        std::cout << "2. Cosine" << std::endl;
        std::cout << "3. Tangent" << std::endl;
        std::cout << "4. Exponent" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> op3;
        std::cout << "Enter number: ";
        std::cin >> num3;
        // Addition, Subtraction, Multiplication or Division of trignometric functions.
        std::cout << "Enter choie for 1 Addition,2 Subtraction,3 Multiplication or 4 Division: ";
        std::cin >> op4;
        if (op4 == 1){
        if(op3 == 1){
            num += Sin(num3);
        } else if(op3 == 2){
            num += Cos(num3);
        } else if(op3 == 3){
            num += Sin(num3)/Cos(num3);
        } else if(op == 4){
            num += Exp(num3);
        } else {
            std::cout << "Invalid entry" << std::endl;
            continue;
        }
        } else if(op4 == 2){
        if(op3 == 1){
            num -= Sin(num3);
        } else if(op3 == 2){
            num -= Cos(num3);
        } else if(op3 == 3){
            num -= Sin(num3)/Cos(num3);
        } else if(op == 4){
            num -= Exp(num3);
        } else {
            std::cout << "Invalid entry" << std::endl;
            continue;
        }

        } else if(op4 == 3){
        if(op3 == 1){
            num *= Sin(num3);
        } else if(op3 == 2){
            num *= Cos(num3);
        } else if(op3 == 3){
            num *= Sin(num3)/Cos(num3);
        } else if(op == 4){
            num *= Exp(num3);
        } else {
            std::cout << "Invalid entry" << std::endl;
            continue;
        }
        } else if(op4 == 4){
         if(op3 == 1){
            num /= Sin(num3);
        } else if(op3 == 2){
            num /= Cos(num3);
        } else if(op3 == 3){
            num /= Sin(num3)/Cos(num3);
        } else if(op == 4){
            num /= Exp(num3);
        } else {
            std::cout << "Invalid entry" << std::endl;
            continue;
        }
        }else {
            std::cout << "Invalid entry" << std::endl;
            continue;
        }
            

        }
        std::cout << num << std::endl;
        std::cout << "Do you wish to continue(y/n): ";
        std::cin >> ch;


    }

    return 0;
}
