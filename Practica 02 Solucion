/*Solucion 
2) El programa impreme: 2 246 6 8 10
3)
	3.1)
		1) Declarar un prototipo antes del Main
		2) O subir toda la funcion antes del Main
	3.2)
		1) Declarar el entero en la funcion printNum
		2) Convertir number en una variable tipo global
	
	3.3)
		1) Pasar por Referencia doubleNumber(int &num)
	
	3.4)
		1)Falta retornar diff

	3.5)
		1) Falta declarar el tercer argumento y sumarlo en la funcion.

	3.6)
		1) Falta añadir * en yPtr

4)

	4.1)
		RPTA: Escribir funcion de suma simple con int y otra con double*/
		int sumar(const int a,const int b){
			return a+b;
		}
		double sumar(const double a,const double b){
			return a+b;
		}

/*

	4.2) -

	4.3)
		Escribir una funcion con tres argumentos y otra con 4 argumentos y que devuelvan la suma de sus argumentos
		*/

		int sumar(const int a, const int b, const int c){
			return a+b+c;
		}
		int sumar(const int a, const int b, const int c, const int d){
			return a+b+c+d;
		}

		/*
	4.4) El compilador da error de compilación por que las dos funciones cumplen las condiciones para ejecutarse. Es ambiguo

	4.5)

	*/
	int suma(const int numeros[], const int tam){
    int suma = 0;
    for(int i=0;i<tam;i++){
        suma += numeros[i];
    }
    return suma;
	}

	int main()
	{
	    int numeros[] = {1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	    cout <<suma(numeros,30)<< endl;
	    return 0;
	}

	//4.6 Escribir la funcion anterior en forma recursiva
	int suma(const int numeros[], const int tam){
    if(tam==0) return 0;
    return numeros[0]+suma(numeros+1,tam-1);
	}
	int main()
	{
	    int numeros[] = {1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	    cout <<suma(numeros,30)<< endl;
	    return 0;
	}



	//5.1 Numeros aleatorios X y Y entre 0 y 1
	double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;

	//5.3 Bucle que lanza dardos y suma si esta dentro o no
	#include<math.h>


	srand (time(0));//Semilla
	int dardosdentro=0;
    int dardoslanzados=10;
    for(int i=0;i<dardoslanzados;i++){
        double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
        cout<<"x: "<<x<<"y: "<<y<<endl;
        if(sqrt(x*x+y*y)<1) dardosdentro++;
    }

    cout<<dardosdentro;

    //La funcion para calcular pi
    #include <iostream>
	#include <ctime>
	#include <cstdlib>
	#include<math.h>
	using namespace std;

	double calcularpi(const double dardoslanzados){
	    srand (time(0));//Semilla
	    int dardosdentro=0;
	    for(int i=0;i<dardoslanzados;i++){
	        double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
	        //cout<<"x: "<<x<<"y: "<<y<<endl;
	        if(sqrt(x*x+y*y)<1) dardosdentro++;
	    }
	    return dardosdentro / dardoslanzados * 4;
	}

	int main()
	{

	    cout<<calcularpi(5000000);
	    return 0;
	}
	//// r ^ 2 es 1, y a / 4 = dartsInCircle / n, produciendo esto para pi:


	//6.1 Imprimir Array con comas pero no en el ultimo elemento
	void imprimirarray(int numeros[], int tam){

	    for (int i=0;i<tam;i++){
	        cout<<numeros[i];
	        if(i!=tam-1) cout<<", ";
	    }
	}
	int main()
	{
	    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
	    imprimirarray(numeros,10);
	    return 0;
	}



	//6.2 Invertir array y modificar el array inicial
	void invertirarray(int numeros[], int tam){
    int temnums[tam];
    int temp;
	    for (int i=0;i<tam/2;i++){
	        temp=numeros[i];
	        numeros[i]=numeros[tam-1-i];
	        numeros[i+tam-1]=temp;
	    }
	}


	//7.1 Funcion que calcula el tamaño de una cadena char
	#include <iostream>
	using namespace std;

	int lenghtstring(const char *content){
	    int total=0;
	    while(*content!='\0') {
	        total++;
	        *content++;
	    }
	    return total;
	}
	int main()
	{
	    char content[] = "hola mundo";
	    cout<<lenghtstring(content);
	    return 0;
	}


	//7.2 Cambiar valores por referencia
	#include <iostream>
	using namespace std;

	void cambiarvalores(int &x,int &y){
	    int temp = x;
	    x = y;
	    y = temp;
	}
	int main()
	{
	    int x=5;
	    int y=6;
	    cout<<"x: "<<x;
	    cout<<"y: "<<y<<endl;
	    cambiarvalores(x,y);
	    cout<<"x: "<<x;
	    cout<<"y: "<<y;
	}

	//7.3 La funcion anterior pero usar punteros
	#include <iostream>
	using namespace std;

	void cambiarvalores(int *x,int *y){
	    int temp = *x;
	    *x = *y;
	    *y = temp;
	}
	int main()
	{
	    int x=5;
	    int y=6;
	    int *px = &x;
	    int *py = &y;
	    cout<<"x: "<<x;
	    cout<<"y: "<<y<<endl;
	    cambiarvalores(px,py);
	    cout<<"x: "<<x;
	    cout<<"y: "<<y;
	}


	//7.4 Funcion similar pero cambiar dos punteros señalando los valores de cada uno

	#include <iostream>
	using namespace std;
	void swap(int **x,int **y){
	    int *temp = *x;
	    *x = *y;
	    *y = temp;
	}
	int main()
	{
	int x = 5, y = 6;
	int * ptr1 = &x, * ptr2 = & y;
	swap (& ptr1 , & ptr2 ) ;
	cout << * ptr1 << " " << * ptr2 ; // Prints "6 5"
	}
