#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n = 0;
    int x;
    double i;
    double a;
    int fact = 1;
    int res = 1;
    int b;
    double c;
    cout<< "Введите значение х"<< endl;
cin>>x;
i = cos(x);
do
{
    for (b = 1; b <= fact; b++)
    {
        res = res * b;
    }
a = pow(-1,n)*pow(x,2*n)/res;
n+=1;
fact =2*n;
c = abs(i -a);
}
while ((c>= 0.01) && (c<= 0.000001));


cout << "Приблизительно значение cos(x)="<< a<< endl;
cout << "Количество итераций- "<< n<< endl;

    return 0;
}
