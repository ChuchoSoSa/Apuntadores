#include<iostream>
#include<conio.h>

using namespace std;

int main(int argc, char** argv){
	int numeros [10],*punteros,mayor=0; //este es el tamaño del arreglo
	punteros=&numeros[0];
	
	for(int i=0, i<10, i++)//Aqui colocamos el ciclo para que realice las repeticiones
	cout<<"Ingresa solo 10 valores: [ " <<i<<" ]:;
	cin>>numeros[i];
	
	for(int*punteros=&numeros[0]; punteros<=&numeros[9]; punteros++){
		if(*punteros>mayor)mayor=*punteros;//Aqui tenmos la sentencia quen nos ayudara a identificar #+
		
	}
	
	cout<<"El valor mayor es: "<<mayor<<endl;
	return 0;
