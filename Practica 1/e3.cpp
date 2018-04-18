#include <iostream>

using namespace std;
void insertion_sort(int s[], int n)
{
  int i,tmp;
  for (i=1; i<n; i++) {
    while ((i>0) && (s[i] < s[i-1])) {//Verificamos a partir de la segunda posicion y vamos preguntando si el
                                        //numero actual es menor que el anterior para intercambiarlos
        tmp = s[i];
        s[i] = s[i-1];
        s[i-1] = tmp;
        i--;                      //despues retrocedemos una posicion para seguir comprobando
    }
  }
}
int main()
{
    int vect[10] = {9,5,7,8,4,3,2,5,6,1};
    for (int i=0;i<10;i++)
    {
        cout<<vect[i];
    }
    cout<<' '<<endl;
    insertion_sort(vect,10);
    for (int i=0;i<10;i++)
    {
        cout<<vect[i];
    }
}
