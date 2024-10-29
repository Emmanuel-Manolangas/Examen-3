/**CÓDIGO DE FACTORIAL Y CAJERO DE BANCO**/
/**Documentación de código que permite calcular el factorial de un número, así como consultar saldo y retirar efectivo de un cajero de banco**/
/**Emmanuel Rodríguez Franco (215822)**/
#include <iostream>

using namespace std;

/**FUNCION DE OPERACIÓN DE FACTORIAL**/
/**Esta función de tipo void se encarga de calcular el factorial de un número "n", para eso utiliza 
un ciclo recursivo en el cual se realiza una operación hasta llegar al "n"**/
void factorial()
{
	long double f;
	int i, p, d1;
	do
	{
	   	cout<<"CODIGO DE FACTORIAL\n\nIntroduce un numero: ";	
		cin>>p;
	   	f=1;
	   	for(i=1;i<=p;i++)
	   	{
	   		f=f*i;	
		}
	   	cout<<endl<<"Numero: "<<p<<endl<<"Factorial de "<<p<<" -> "<<f<<endl;
		cout<<endl<<"Desea realizar algo mas? SI[1]/NO[2]: ";
		cin>>d1;
		system("cls");		
	}while(d1==1);
}

/**FUNCION  DE CAJERO DE BANCO**/
/**Esta es una nueva función agregada, la cual simula el comportamiento de un cajero de banco, dando 
la opción de consultar un saldo inicial de 20000 pesos y retirar saldo de ese mismo monto, se divide en 
un switch que permite elegir al usuario qué acción desea realizar**/
void banco(int ba)
{
	int q, r, d;
	do
	{
		system("cls");
		cout<<"CAJERO DE BANCO\n\nHola que tal, que desea realizar el dia de hoy?: \n\nConsultar saldo[1]\nRetirar efectivo[2]\n\nIngresa el numero correspondiente de la funcion que desees: ";
		cin>>q;
		switch(q)
		{
			case 1:
				cout<<endl<<"Tu saldo actual es de "<<ba<<" pesos.\n";
				break;
			case 2:
				cout<<endl<<"Cuanto dinero desea retirar?: ";
				cin>>r;
				if(r>ba)
				{
					cout<<"Error, la cantidad que ha ingresado es mayor a lo que dispone\n";
				}
				else
				{
					ba=ba-r;
					cout<<"\nSe retiraron "<<r<<" pesos de su saldo, dejando un saldo de "<<ba<<" en su cuenta.\n";
				}
				break;
		}
	cout<<endl<<"Desea realizar algo mas? SI[1]/NO[2]: ";
	cin>>d;		
	}while(d==1);
}

/**FUNCION MAIN**/
/**Esta es la nueva función main, donde se incluye un menú que utiliza una función "switch" para dar 
a elegir al usuario entre dos acciones: Calcular factoriales o ingresar a un cajero de banco, 
además de salir directamente en caso de no necesitar realizar nada**/
int main()
{
	int c, b=20000;
	cout<<"PROGRAMA EXAMEN UNIDAD III"<<endl<<"\nQue funcion desea realizar?: \nCalculo de Factorial[1]\nCajero de banco[2]\nSalir[3]\n\nIngresa el numero correspondiente de la funcion que desees: ";
   	cin>>c;
	switch(c)
   	{
   		case 1:
   			system("cls");
   			factorial();
   			break;
   		case 2:
   			system("cls");
   			banco(b);
   			break;
   		case 3:
   			system("cls");
   			break;
	}   
	cout<<"\nNos vemos, que tenga buen dia";
	return 0;
}