#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Spanish");
	int cant_estu,fallasjust,fallasinjust;
	float sumafallas,totalfallasjust,totalfallasinjust,prom;
	
	//Pedir número de estudiantes
	cout<<"Ingrese la cantidad de estudiantes: "; cin>>cant_estu;
	string nombre_estudiantes[cant_estu],apellido_estudiantes[cant_estu];
	float trabajo1[cant_estu],trabajo2[cant_estu],trabajo3[cant_estu],trabajo4[cant_estu],trabajo5[cant_estu],id[cant_estu],nota,promedio[cant_estu];
	float evidencia_lab1[cant_estu],evidencia_lab2[cant_estu],evidencia_lab3[cant_estu],evidencia_lab4[cant_estu],nota_asistencia[cant_estu];
	
	//Pedir todos los datos e imprimir la nota de asistencia y el promedio 
	for (int i=0;i<cant_estu;i++)
	{
		cout<<"Ingrese el número del ID para el estudiante ["<<i+1<<"]: ";cin>>id[i];	
		cout<<"Ingrese el nombre del estudiante ["<<i+1<<"]: ";cin>>nombre_estudiantes[i];
		cout<<"Ingrese el apellido del estudiante ["<<i+1<<"]: ";cin>>apellido_estudiantes[i];	
		cout<<"Ingrese la nota del trabajo 1 para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>trabajo1[i];
		cout<<"Ingrese la nota del trabajo 2 para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>trabajo2[i];
		cout<<"Ingrese la nota del trabajo 3 para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>trabajo3[i];
		cout<<"Ingrese la nota del trabajo 4 para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>trabajo4[i];
		cout<<"Ingrese la nota del trabajo 5 para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>trabajo5[i];
		cout<<"Ingrese la nota 1 de laboratorio para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>evidencia_lab1[i];
		cout<<"Ingrese la nota 2 de laboratorio para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>evidencia_lab2[i];
		cout<<"Ingrese la nota 3 de laboratorio para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>evidencia_lab3[i];
		cout<<"Ingrese la nota 4 de laboratorio para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>evidencia_lab4[i];
		cout<<"Ingrese la cantidad de fallas justificadas para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>fallasjust;
		cout<<"Ingrese la cantidad de fallas injustificadas para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<": ";cin>>fallasinjust;
		nota=5.0;
		totalfallasjust=fallasjust*0.25;
		totalfallasinjust=fallasinjust*0.5;
		sumafallas=totalfallasinjust+totalfallasjust;
		nota_asistencia[i]=nota-sumafallas;
		cout<<"La nota de asistencia del estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<" es: "<<nota_asistencia[i]<<endl;
		prom=(trabajo1[i]+trabajo2[i]+trabajo3[i]+trabajo4[i]+trabajo5[i]+evidencia_lab1[i]+evidencia_lab2[i]+evidencia_lab3[i]+evidencia_lab4[i]+nota_asistencia[i])/10;
		promedio[i]=prom;		
		cout<<"El promedio para el estudiante "<<nombre_estudiantes[i]<<" "<<apellido_estudiantes[i]<<" es: "<<promedio[i]<<endl;
		cout<<""<<endl; //Espacio entre lineas
	}
	return 0;
}

