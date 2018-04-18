#include <iostream>

using namespace std;
int tamStr(char * ps){
   if (*ps == '\0')
        return 0;
    return 1 + tamStr(ps + 1);
}
int tamStri(char * ps){

    int tam = 0;
   while (*(ps++) != '\0')
       tam++;

   return tam;
}
int main()
{
    char s[] = "Hola Mundo";
    cout << tamStr(s) << endl;
    cout << tamStri(s) << endl;
    return 0;
}
