/**CÓDIGO DE FACTORIAL**/
/**Emmanuel Rodríguez Franco (215822)**/
#include <iostream>

using namespace std;

/**FUNCION DE OPERACIÓN DE FACTORIAL**/
/**Esta función de tipo void se encarga de calcular el factorial de un número "n", para eso utiliza 
un ciclo recursivo en el cual se realiza una operación hasta llegar al "n"**/
void factorial(int p)
{
	long double f;
	int i;
   	f=1;
   	for(i=1;i<=p;i++)
   	{
   		f=f*i;	
	}
   	cout<<endl<<"Numero: "<<p<<endl<<"Factorial de "<<p<<" -> "<<f<<endl;	
}

/**FUNCION MAIN**/
/**Esta es la función main, la cual se encarga de recopilar los datos que utilizará el programa para
calcular el factorial, siendo en este caso únicamente el número**/
int main()
{
   	int n;
   	cout << "CODIGO DE FACTORIAL\n\nIntroduce un numero: ";
   	cin >> n;
   	factorial(n);
	return 0;
}