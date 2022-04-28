#include <iostream>
#include <locale.h>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	string usuarios[100];
	int lectura1[100],lectura2[100],dif[100],pagar[100],tmn,vlrcon1,vlrcon2,vlrcon3,consumo;
	vlrcon1=25000;
	vlrcon2=35000;
	vlrcon3=50000;
	cout<<"¿Cuántos usuarios son?: ";cin>>tmn; //Solicitar la cantidad de usuarios
	usuarios[tmn];
	lectura1[tmn];
	lectura2[tmn];
	for(int i=0;i<tmn;i++){ //Capturar primer y segundo vector
		cout<<"Ingrese el nombre del usuario ["<<i+1<<"]: "; cin>>usuarios[i];
		cout<<"Ingrese la lectura del mes anterior para el usuario "<<usuarios[i]<<": "; cin>>lectura1[i];
		cout<<"Ingrese la lectura actual para "<<usuarios[i]<<": "; cin>>lectura2[i];
		cout<<""<<endl; //Espacio entre lineas
	}
	/*cout<<""; //Espacio entre lineas
	for(int i=0;i<tmn;i++){ //Capturar tercer vector
		cout<<"Ingrese la lectura actual para "<<usuarios[i]<<": "; cin>>lectura2[i];	
	}*/
	cout<<""<<endl; //Espacio entre lineas
	for(int i=0;i<tmn;i++){
		consumo=lectura1[i]-lectura2[i];
		dif[i]=consumo;
		if(consumo<0){
			pagar[i]=vlrcon3;
		}
		else if((consumo>0)&&(consumo<=20)){
			pagar[i]=vlrcon2;
		}
		else if(consumo>20){
			pagar[i]=vlrcon1;
		}
	}
	for (int i=0;i<tmn;i++){ //Imprimir los vectores y la operación
		cout<<"Usuario ["<<i<<"] es: "<<usuarios[i]<<endl;
		cout<<"Su lectura del mes anterior es: "<<lectura1[i]<<endl;	
		cout<<"Su lectura actual es: "<<lectura2[i]<<endl;
		cout<<"La diferencia entre sus lecturas es: "<<dif[i]<<endl;
		cout<<"Su valor a pagar es de "<<pagar[i]<<" pesos."<<endl;
		cout<<""<<endl;		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}



