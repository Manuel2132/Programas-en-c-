#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	int caracol[100][100],tam,vartam,totaltam,i,inicial,cont,j;
	cout<<"Ingrese el tamaño de la matriz: ";cin>>tam;
	
	//Asignar variables
	inicial=0;
	vartam=tam;
	totaltam=tam*tam;
	cont=1;
	i=0;
	
	//Llenar la matriz
	while(cont<=totaltam)
	{
		//Derecha
		for(j=inicial;j<vartam;j++)
		{
			caracol[i][j]=cont;
			cont++;
		}
		//Abajo
		for(i=inicial+1;i<vartam;i++)
		{
			caracol[i][j-1]=cont;
			cont++;
		}
		//Izquierda
		for(j=vartam-1;j>inicial;j--)
		{
			caracol[i-1][j-1]=cont;
			cont++;
		}
		//Arriba
		for(i=vartam-1;i>inicial+1;i--)
		{
			caracol[i-1][j]=cont;
			cont++;
		}
		inicial++;
		vartam--;		
	}
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			if(caracol[i][j]<10)
			{
				cout<<" "<<caracol[i][j]<<" ";
			}
			else
			{
				cout<<caracol[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
