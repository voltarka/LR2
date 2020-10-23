#include <iostream>
#include <cmath>
using namespace std;
int fact(int &n){
    int res,i;
    res = 1;
    for (i = 1; i <= n; i++)
        res = res * i;
    return res;
}
int main(){
    double eps = 0, cos = 0, x = 0, a;
    int n,iterations, factories;
    bool flag = true;
    while (flag){
        std::cout << "Введите х от -1 до 1 "  ;
        std::cin >> x;
        if ((x > -1) || (x <= 1))
            flag = false;
        else
            std::cout << "Неверное значение х" << std::endl;
    }
    for (int i = -2; i > -7; i--){
        eps = pow(10,i);
        n = 0; iterations = 0; a = 1, cos = 0;
        while (abs(a) > eps){
            factories = fact(n);
            a = pow(-1,n)*pow(x,2*n)/factories;
            cos += a;
            n++;
            iterations++;
        }
        std::cout << "cos x = " << cos << " с точностью = " <<
        eps << ", посчитан с " << iterations << " количеством итераций" << std::endl;
    }
    return 0;
}
