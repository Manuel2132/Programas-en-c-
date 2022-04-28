#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	int numero1[10],numero2[10],numero3[10],prod,j,n;
	prod=0;
	n=0;
	for(int i=0;i<10;i++) //Rellenar primer vector
	{
	cout<<"Ingrese el número para la posición ["<<i+1<<"] del primer vector: "; cin>>numero1[i];
	}
		/*for(int i=0;i<10;i++) //Imprimir primer vector
		{
		cout<<"Para el ["<<i+1<<"] número: " <<numero1[i]<<endl;
		}*/
	cout<<""<<endl;
	for(int i=0;i<10;i++) //Rellenar segundo vector
	{
	cout<<"Ingrese el numero para la posición ["<<i+1<<"] del segundo vector: "; cin>>numero2[i];
	}
	cout<<""<<endl;
		/*for(int i=0;i<10;i++) //Imprimir segundo vector
		{
		cout<<"Para el ["<<i+1<<"] número: " <<numero2[i]<<endl;
		}*/
	for(int i=0;i<10;i++)
	{
		prod=numero1[0+n]*numero2[9-n];
		numero3[i]=prod;
		cout<<"Producto entre los numeros "<<numero1[0+n]<<" y "<<numero2[9-n]<<" es: "<<numero3[i]<<endl;
		n++ ;
	}
	return 0;
}
