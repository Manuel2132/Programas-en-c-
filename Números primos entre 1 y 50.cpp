#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	int primos[15],a,rsd,nmrprimo,m;
	m=0;
	for(int i=1;i<50;i++){
		a=1;
		rsd=0;
		while(a<=i){
			if (i%a==0){
			rsd++;	
			}
		a++;
		}
		if (rsd==2){
			primos[m]=i;
			m++;
		}
	}
	for(int i=0;i<15;i++){
		cout<<"El número "<<primos[i]<<" es primo entre 1 y 50."<<endl;	
	}
	return 0;
}
