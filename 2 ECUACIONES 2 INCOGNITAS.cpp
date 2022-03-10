// Andres Alberto Nina Choque
//sistema de ecuaciones
#include <iostream>
using namespace std;

float a, b, c, d, e, f, x, y;
int main()
{
	cout<<"sistema de ecuaciones a resolver:" <<endl;
	cout<<"ax + by = c" <<endl;
	cout<<"dx + ey = f" <<endl;
	cout<<"ingresar los valores que deseas que tenga el sistema de ecuaciones:" <<endl;
	cout<<"ingrese el valor que desea que tenga a" <<endl;
	cin>>a;
	cout<<"ingrese el valor que desea que tenga b" <<endl;
	cin>>b;
	cout<<"ingrese el valor que desea que tenga c" <<endl;
	cin>>c;
	cout<<"ingrese el valor que desea que tenga d" <<endl;
	cin>>d;
	cout<<"ingrese el valor que desea que tenga e" <<endl;
	cin>>e;
	cout<<"ingrese el valor que desea que tenga f" <<endl;
	cin>>f;
	y=((c*d)-(f*a))/((d*b)-(a*e));	//Y es el resultado de despejarla de las 2 ecuaciones, por el metodo suma y resta de sistema de ecuaciones
	cout<<"valor de y=" <<y <<endl;
	x=(c-(b*y))/a;	//es el resultado de despejar x en la primera ecuacion y de sustituir el valor de Y anterior para que todo quede en funcion de X y poder obtener su valor
	cout<<"valor de x="<<x <<endl;
}
