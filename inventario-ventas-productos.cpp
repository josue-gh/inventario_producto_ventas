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
	const int max=50;
	int cant=0;
	producto productos[max];
	venta ventas[max];
	//condicion para saber si desea hacer algo mas
	do{
	cout<<"menu_:"<<endl;
	cout<<endl;
	cout<<"registrar un nuevo producto (apretar 1)"<<endl;
	//ingresamos que desea hacer el ususario
	cout<<"que deseas hacer? "<<endl;
	cin>>hacer;
	//aplicar el cin.ingonre
	cin.ignore();
		//realizamos una condicion
	if(hacer==1){
		//agregamos un producto
		cout<<"ingrese el nombre del producto: "<<endl;
		getline(cin, productos[cant].nombre);
		cout<<"ingrese el precio del producto: "<<endl;
		cin>>productos[cant].precio;
		
	}
	
	
	
	cout<<"deseas hacer algo mas (si o no) " <<endl;	
	 
	cin>> respuesta;
	}while(respuesta =="si");
	
	
	return 0;
}