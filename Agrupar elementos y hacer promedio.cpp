#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"Spanish");	
	int mnrs[100],myrs[100],i,prom,suma,sumat,num,menr,mayr;
	sumat=0;
	int elem []={2,3,5,6,8,23,29,4,66,9,10,15,32,55,1};
		for(int i=0;i<15;i++){
			num=sumat;
			sumat=sumat+elem[i];
			/*cout<<"La suma del número "<<elem[i]<<" más el número "<<num<<" es: "<<sumat<<endl;*/
		}
	prom=sumat/15;
	cout<<"El número promedio es: "<<prom<<endl;	
	for(int i=0;i<15;i++){	//Comparar los elementos con el promedio
		if (elem[i]<prom){
			menr=elem[i];
			mnrs[i]=menr;
		}
		else {
			mayr=elem[i];
			myrs[i]=mayr;
		}
	}
	cout<<""<<endl; //Espacios entre líneas
	for(int i=0;i<15;i++){      //Imprimir números menores 
		if (elem[i]<prom){
			cout<<"El elemento "<<mnrs[i]<<" es menor al promedio."<<endl;
		}
	}
	cout<<""<<endl; //Espacios entre líneas
	for(int i=0;i<15;i++){      //Imprimir números mayores
		if (elem[i]>prom){
			cout<<"El elemento "<<myrs[i]<<" es mayor al promedio."<<endl;
		}
	}
return 0;
}
