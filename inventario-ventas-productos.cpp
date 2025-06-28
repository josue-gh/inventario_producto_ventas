#include<iostream>
#include<string>

using namespace std;
 //creamos una estructura producto
struct producto{
	
	string nombre;
	float precio;
};

//creamos otra estructura llamada venta
struct venta{
	
	int idVenta;
	string producto;
	int cantidad;
	float precioTotal;
	
};

int main(){
	string respuesta;
	int hacer;
	producto productos[10];
	
	venta ventas[10];
	//condicion para saber si desea hacer algo mas
	do{
	//ingresamos que desea hacer el ususario
	cout<<"menu_:"<<endl;
	cout<<endl;
	cout<<"registrar un nuevo producto (apretar 1)"<<endl;
	
	cin>>hacer;
		
	cout<<"deseas hacer algo mas? (si o no)"<<endl;
	cin>> respuesta;
		
	}while(respuesta =="si");
	
	
	return 0;
}