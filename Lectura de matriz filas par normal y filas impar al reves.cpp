#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	 int matriz[4][4],n;
    for (int i=0; i<4;i++){
        for (int j=0; j<4;j++){
            cout<<"Ingrese el número para ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
        }
    }
    n=3;
    for (int i=0; i<4;i++){
        for (int j=0; j<4;j++){
            if (i%2==0){
                cout<<matriz[i][j]<<" ";
            }
            else{
                cout<<matriz[i][n-j]<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}
