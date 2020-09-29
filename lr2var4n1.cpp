#include <iostream>
using namespace std;

int main()
{
    int b=0;
    for (int x = 0; x<=255; x++){     
        cout << b << "   " << static_cast<char>(x) << endl;
        b++;
    }
    return 0;
}
