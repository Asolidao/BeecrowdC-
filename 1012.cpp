#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    double A, B , C;
    
    cin >> A >> B >> C;
    
    cout << setprecision(3)<<fixed;
    cout << "TRIANGULO: " << (A*C)/2 << endl;
    cout << "CIRCULO: " <<  3.14159 * (C * C) << endl;
    cout << "TRAPEZIO: " <<  ((A + B) * C) / 2 << endl;
    cout << "QUADRADO: " <<  B * B << endl;
    cout << "RETANGULO: " <<  A * B << endl;
    
    return 0;
}
