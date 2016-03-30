#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
using namespace std;
//variable global m que indica la resta de el numero azar y el mismo dado la vuelta
int m;
int x;
//obtiene un numero al azar "con la semilla del tiempo"
int numero_aleatorio(){
	re:
	srand(time(0));
	x = rand();
	if ( x < 0 ){
		goto re;
	}else{
	m= m*10+(x%10);
	x=x/10;
	m= m*10+(x%10);
	x=x/10;
	return(m);
		}
}
