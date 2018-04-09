#include <iostream>
using namespace std;
bool palindromo(char *xs, int n){
    int i=0;
    int k= n;
    int j=k-1;
    while(i < k/2){
        if(*(xs+i)!=*(xs+j)){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char s[]={'a','n','a','s','\0'};
    cout<<palindromo(s,4)<<endl;

}
