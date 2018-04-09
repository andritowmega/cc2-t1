#include <iostream>

using namespace std;
void intercambior(char *pt,char *ps){
    char aux;
    if(*pt == '\0') return;
    aux=*ps;
    *ps = *pt;
    *pt = aux;
   pt++;
   ps++;
   intercambior(pt,ps);
}

int main()
{
    char t[] = "t contenido t cadena t";
    char s[] = "s contenido s cadena s";
    intercambior(t,s);
    cout << "Contenido S - " << s << endl;
    cout << "Contenido T - " << t << endl;
    return 0;
}
