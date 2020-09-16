#include <iostream>

using namespace std;
int main(){
    char a;
    cout << "Введите любой символ"<< endl;
    cin >> a;
    if (a >= '0' && a <= '9')
    cout << "Это цифра"<< endl;
    else if (a >= 'A' && a <= 'Z')
         cout << "Это буква" << endl;
        else if (a>= 'a' && a<= 'z')
    cout << "Это буква" << endl;
    else
    cout << "Это неизвестный символ"<< endl;
    return 0;
}
