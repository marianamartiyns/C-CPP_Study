#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int a, b, c;

    cout << "Informe o valor de \"A\": ";
    cin >> a;

    cout << "Informe o valor de \"B\": ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "valor de a: " << a << endl;
    cout << "valor de b: " << b << endl;

    return 0;
}