#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

#define PI 3.14159265 // constante que no cambiara a lo largo del programa
int main()
{
	int opc;
	float a, b, c, A, B, C, Ar, Pe, S;
  //mensaje para el usuario con las instrucciones necesarias
  cout<<"\t==========Bienvenido a la resolucion de triangulos=========="<<endl;
  cout<<"este programa aun se encuentra en la fase beta"<<endl;
  cout<<"rogamos hagas caso a las instrucciones que daremos a continuacion"<<endl;
  cout<<"en este programa te ayudaremos a hallar los lados, angulos, area y superficie del triangulo"<<endl;
  cout<<"escoge una de las siguientes opciones"<<endl;
  cout<<"1.   3 lados conocidos"<<endl;
  cout<<"2.   3 angulos conocidos"<<endl;
  cout<<"3.   2 lados y un angulo conocidos"<<endl;
  cout<<"4.   2 angulos y un lado conocidos"<<endl;
  cout<<"elige una opcion: "; cin>>opc;
  
  /* para el area y el perimetro usaremos la formula de Heron
  donde el perimetro es:
  Pe = A + B + C
  y para el area usaremos el semiperimetro que es
  S = Pe/2
  donde la formula para el area sera;
  Ar = sqrt(S*(S-A)*(S-B)*(S-C)) */
  
  switch(opc)
  {
  	case 1:
  		cout<<"ingrese el lado lado A, B y C" <<endl;
		cout<<"ingrese lado A: "<<endl;
		cin>>A;
		cout<<"ingrese lado B: "<<endl;
		cin>>B;
		cout<<"ingrese lado C: "<<endl;
		cin>>C;
  			
  		a = acos((pow(B,2)+pow(C,2)-pow(A,2))/(2*B*C))*180/PI;
    	b = acos((pow(A,2)+pow(C,2)-pow(B,2))/(2*A*C))*180/PI;
    	c = acos((pow(A,2)+pow(B,2)-pow(C,2))/(2*A*B))*180/PI;
    	Pe = A + B + C;			
    	S = Pe/2;
		Ar = sqrt(S*(S-A)*(S-B)*(S-C));
		
		cout<<"lado A: " <<A <<endl;
		cout<<"lado B: " <<B <<endl;
		cout<<"lado C: " <<C <<endl;
		cout<<"angulo a: " <<a <<endl;
		cout<<"angulo b: " <<b <<endl;
		cout<<"angulo c: " <<c <<endl;
		cout<<"Perimetro: " <<Pe <<endl;
		cout<<"Area: " <<Ar <<endl;	break;
	case 2:
		cout<<"se necesita conocer por lo menos un lado del triangulo" <<endl; break;
	case 3:
		cout<<"ingrese el lado A y B al igual que el angulo c" <<endl;
		cout<<"ingrese lado A: "<<endl;
		cin>>A;
		cout<<"ingrese lado B: "<<endl;
		cin>>B;
		cout<<"ingrese angulo c: "<<endl;
		cin>>c;
		
		C = sqrt(pow(A,2)+pow(B,2)-2*A*B*cos(c));
		//aplicando ley de senos
		b=asin((B/C)*sin(c))*180/PI;
		a=asin((A/C)*sin(c))*180/PI;
		Pe = A + B + C;			
    	S = Pe/2;
		Ar = sqrt(S*(S-A)*(S-B)*(S-C));
		
		cout<<"lado A: " <<A <<endl;
		cout<<"lado B: " <<B <<endl;
		cout<<"lado C: " <<C <<endl;
		cout<<"angulo a: " <<a <<endl;
		cout<<"angulo b: " <<b <<endl;
		cout<<"angulo c: " <<c <<endl;
		cout<<"Perimetro: " <<Pe <<endl;
		cout<<"Area: " <<Ar <<endl;	break;
	case 4:
		cout<<"ingrese el lado A al igual que los angulos a y b" <<endl;
		cout<<"ingrese lado A: "<<endl;
		cin>>A;
		cout<<"ingrese angulo a: "<<endl;
		cin>>a;
		cout<<"ingrese angulo b: "<<endl;
		cin>>b;
		
		c = 180-a-b;
		B = A*(sin(b)/sin(a));
		C = A*(sin(c)/sin(a));
		Pe = A + B + C;			
    	S = Pe/2;
		Ar = sqrt(S*(S-A)*(S-B)*(S-C));
		
		cout<<"lado A: " <<A <<endl;
		cout<<"lado B: " <<B <<endl;
		cout<<"lado C: " <<C <<endl;
		cout<<"angulo a: " <<a <<endl;
		cout<<"angulo b: " <<b <<endl;
		cout<<"angulo c: " <<c <<endl;
		cout<<"Perimetro: " <<Pe <<endl;
		cout<<"Area: " <<Ar <<endl;	break;
  	} 
 
  system("pause");
  return 0;
  
}
