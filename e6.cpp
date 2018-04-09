#include <iostream>

using namespace std;
void copys(char *pt,char *ps){
    if(*pt == '\0') return;
    *ps = *pt;
   pt++;
   ps++;
   copys(pt,ps);
}
int main()
{
    char t[] = "hola mundo";
    char s[] = "          ";
    copys(t,s);
    cout << s << endl;
    return 0;
}
