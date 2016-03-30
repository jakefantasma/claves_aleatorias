#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include "nazar.h"
using namespace std;
//este es un programa creado por Carlos Sebastian Caballeros Valle
//2/8/2016
//7:34 PM
//esta variable contiene el numero alzar
int y;
//esta varible es la cantidad de contraseñas que necesitan
int a;
//variables de bucle if de maximo y minimo
int p1=0;
int p2=0;
int p3=0;
//variables de decoracion
string by="jf";
string e="*****************************************************";
string er="#####################################################";
//variables caracter
char n1;
char l;
char lm;
char ca;
char ny=164;
//varible de salida de archivo
ofstream fout("claves.txt");
//funcion maximo y minimo general pero no para caracter 
void cantidad_minima(int z, int minimo){
	re1:
	if ( y <= minimo ){
			if ( p1 == 0 ){
				y=y+11;
				p1=1;
				p3=0;
				goto re1;
			}
			if ( p2 == 0 ){
				y=y+7;
				p2=1;
				goto re1;
			}
			if ( p3 == 0 ){
				y=y+3;
				p3=1;
				p2=0;
				p1=0;
				goto re1;
			}
			p1=0;
			p2=0;
			p3=0;
					}
}
void cantidad_maxima(int z, int maximo){
	re1:
	if ( y >= maximo ){
			if ( p1 == 0 ){
				y=y-7;
				p1=1;
				p3=0;
				goto re1;
			}
			if ( p2 == 0 ){
				y=y-3;
				p2=1;
				goto re1;
			}
			if ( p3 == 0 ){
				y=y-2;
				p3=1;
				p2=0;
				p1=0;
				goto re1;
			}
			p1=0;
			p2=0;
			p3=0;
					}
}
//funcion maxima y minima de caracter para que sea mayor a 33 y menor o igual a 38
void cantidad_minima_caracter(int z, int minimo){
	re1:
	if ( y <= minimo ){
			if ( p1 == 0 ){
				y=y+1;
				p1=1;
				p3=0;
				goto re1;
			}
			if ( p2 == 0 ){
				y=y+2;
				p2=1;
				goto re1;
			}
			if ( p3 == 0 ){
				y=y+1;
				p3=1;
				p2=0;
				p1=0;
				goto re1;
			}
			p1=0;
			p2=0;
			p3=0;
					}
}
void cantidad_maxima_caracter(int z, int maximo){
	re1:
	if ( y >= maximo ){
			if ( p1 == 0 ){
				y=y-1;
				p1=1;
				p3=0;
				goto re1;
			}
			if ( p2 == 0 ){
				y=y-2;
				p2=1;
				goto re1;
			}
			if ( p3 == 0 ){
				y=y-1;
				p3=1;
				p2=0;
				p1=0;
				goto re1;
			}
			p1=0;
			p2=0;
			p3=0;
					}
}
//esta funcion llena las variables char con un valor de tal manera que llena y revisa cada variable a colocar
void colocar(){
	//letra mayuscula
	y = numero_aleatorio();
	cantidad_minima(y,65);
	cantidad_maxima(y,90);
	lm=y;
	
	//caracater
	y = numero_aleatorio();
	cantidad_minima_caracter(y,33);
	cantidad_maxima_caracter(y,38);
	ca=y;

	//numero
	y = numero_aleatorio();
	cantidad_minima(y,48);
	cantidad_maxima(y,57);
	n1=y;

	//letra minuscula
	y = numero_aleatorio();
	cantidad_minima(y,97);
	cantidad_maxima(y,122);
	l=y;
	}
void contra(){
	colocar();
	fout << lm << ca  << n1 << l ;
	colocar();
	fout << lm << ca  << n1 << l << "" <<endl;
}
void creacion(int a){
	int b=0;
	r:
	if ( b < a  ){
		contra();
		b=b+1;
		goto r;
	}

	system("cls");
	cout << e << endl;
	cout << "se han creado las "<< a <<" contrase"<<ny<<"as !!"<<endl;
	cout <<"by:"<<by<<endl;
	cout << e << endl;
	getch();
}
void rev_error(int a){
}
int main(){
	otra:
	system("cls");
	system("color F0");
	cout <<e<< endl;
	cout << "indique la cantidad de contrase"<< ny <<"as que necesita: ";
	cin>>a;
	cout <<e<< endl;
	if ( a >= 10 ){
	system("cls");
	cout << "la peticion tomara unos minutos porfavor espere  !!!" << endl;
	}
	if ( a <= 0 ){
		cout << er <<endl;
		cout << "el numero "<<a<<" no es valido ingrese un numero mayor a 0" << endl;
		getch();
		goto otra;
		cout << er <<endl;
	}
	creacion(a);
	system("exit");
}
//ultima modificacion del codigo realizada el 2/19/2016
//se agrego cantidad_minima_caracter y cantidad_maxima_caracter para arreglar lo de los caracters
//ya que no se usan despues de 38 por que son muy complicados de hacer !!! 
