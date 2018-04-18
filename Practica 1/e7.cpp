#include <iostream>

using namespace std;
void concatenar(char *pt,char *ps){
    if(*pt == '\0') return;
    if(*ps==' ') {
        *ps=*pt;
        pt++;
    }
   ps++;
   concatenar(pt,ps);
}
int main()
{
    char t[] = "hola mundo";
    char s[] = "cadenas           ";
    concatenar(t,s);
    cout << s << endl;
    return 0;
}
