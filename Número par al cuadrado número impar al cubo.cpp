#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	int array1[10],array2[10],par,impar;
	for (int i=0;i<10;i++){ //Primer vector
		cout<<"Ingrese el número ["<<i+1<<"]: ";cin>>array1[i];
	}
	cout<<""<<endl; //Espacio entre lineas
	for(int i=0;i<10;i++){ //Segundo vector
		if(array1[i]%2==0){
			par=pow(array1[i],2);
			array2[i]=par;		
		}
		else{
			impar=pow(array1[i],3);
			array2[i]=impar;
		}
	}
	for(int i=0;i<10;i++){ //Imprimir primer vector
		cout<<"El número ["<<i+1<<"] ingresado es: "<<array1[i]<<endl;
	}
	cout<<""<<endl; //Espacio entre lineas
	for(int i=0;i<10;i++){ //Imprimir segundo vector
		cout<<"El resultado para el valor ingresado en ["<<i+1<<"] es: "<<array2[i]<<endl;
	}
		return 0;
}
