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
	cout<<"listar los productos registrados (apretar 2)"<<endl;
	cout<<"buscar producto (apretar 3)"<<endl;
	cout<<"actualizar datos de un producto (apretar 4)"<<endl;
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
		
		cant++;
	}else if(hacer==2){
		cout<<"productos registrados: "<<endl;
		//hacer un bucle que muestre todos los productos
		for(int i=0; i<cant; i++){
		cout<<i+1 <<"- "<<productos[i].nombre<<endl;
		cout<<i+1 <<"- "<<productos[i].precio<<endl;
		}
	}else if(hacer==3){
		string nombre;
		int k=0;
		cout<<"ingrese el nombre del producto "<<endl;
		cin>>nombre;
		cout<<endl;
		//realizamos un bucle para comparar todos los datos
		for(int i=0; i<cant; i++){
			//condicion para mostrar un registro
			if(nombre==productos[i].nombre){
				cout<<productos[i].nombre<<endl;
				cout<<productos[i].precio<<endl;
				//aumnetados el contador k
				k++;
			}
		}
		if(k==0){
			cout<<"no se encontro el producto ingresado !"<<endl;
		}
	}else if(hacer==4){
		int nuevo;
		string nuevoNom;
		float nuevoPrec;
		//ingresamos que producto desea cambiar
		cout<<"productos: "<<endl;
		for(int i=0; i<cant; i++){
			//mostramos los nombres de los productos
			cout<<i+1<<"- "<<productos[i].nombre<<endl;
		}
		cout<<"que producto deseas cambiar sus datos. ingresa su numero"<<endl;
		cin>> nuevo;
		//agregamos el cin.ignore
		cin.ignore();
		//condicion por si el numero ingresado no se encuentra
		if(nuevo<=cant){
			cout<<"ingrese el nuevo nombre: "<< endl;
			getline(cin, nuevoNom);
			cout<<"ingrese el nuevo precio: "<<endl;
			cin>>nuevoPrec;
			//cambiamos los datos
			productos[nuevo-1].nombre=nuevoNom;
			productos[nuevo-1].precio=nuevoPrec;
		}else{
			cout<<"no se encontro el producto a cambiar! "<<endl;
		}
		
		
	}
	
	
	cout<<"deseas hacer algo mas (si o no) " <<endl;	
	 
	cin>> respuesta;
	}while(respuesta =="si");
	
	
	return 0;
}