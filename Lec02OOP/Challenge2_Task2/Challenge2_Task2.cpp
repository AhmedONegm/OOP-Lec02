#include <iostream>
int power_rec(int num1, int *pow) {
    int sum = num1;
    if (*pow >= 0) {
        num1 *= sum;
        (*pow)--;
        power_rec(num1, pow);
    }
    return num1;
}
    int main()
    {
        int num = 2;
        int power = 3;
        std::cout << power_rec(2, &power);
    }
    /*
    int  power(int num, int pow) {
        int i, sum = 1;
        for (i = 1; i <= pow; i++) {
            sum = sum * num;
        }
        return sum;
    }
    */