#include <iostream>

using namespace std;
int pasoporvalor(int n){
    return n+1;
}
void pasoporreferencia(int& n){
    n = n+1;
}
int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout << "Valores iniciales"<<endl;
    cout << "a: "<< a<<endl;
    cout << "b: " << b<<endl;
    cout << "c: " << c<<endl;
    c=pasoporvalor(a);
    pasoporreferencia(b);
    cout << "Valores iniciales"<<endl;
    cout << "a: "<< a<<endl;
    cout << "b: " << b<<endl;
    cout << "c: " << c<<endl;
}
