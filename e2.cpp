#include <iostream>

using namespace std;

int sumararray(int * p,int tam){
    if(tam==0) return 0;
    return *p+sumararray((p+1),tam-1);
}
int sumararray2(int a[10],int tam){
    int total;
    for (int i=0;i<tam;i++){
        total = total+a[i];
    }
    return total;
}
int main()
{
    int sumar[10]={1,2,3,4,5,6,7,8,9,10};
    int *ps = sumar;
    int tam = sizeof(sumar)/sizeof(int);
    cout << "La suma recursiva es: " <<sumararray(ps,tam)<<endl;
    cout << "La suma iterativa es: " << sumararray2(sumar,tam);
    return 0;
}
