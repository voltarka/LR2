#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cout << "Введите значение х"<< endl;
    cin >> x;
    switch (x % 5){
    case 0:
        cout << "y(x)=-1"<< endl;
        break;
    case 1:
        cout << "y(x)= x = "<< x<< endl;
        break;
    case 2:
        cout<< "y(x)= 1/x =  "<< 1/x << endl;
        break;
    case 3:
        cout<< "y(x)= -x = -"<<x<< endl;
        break;
    case 4:
        cout<< "y(x)= x^2= " << pow(x,2)<< endl;
        break;
    default:
    cout << "Значение функции y(x) найти не удалось"<< endl;
    break;
    }




    return 0;
}
