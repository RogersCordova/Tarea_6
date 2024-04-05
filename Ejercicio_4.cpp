#include <iostream>
using namespace std;


struct Estudiante {
	int codigo;
	string nombre;
	int nota;
};
	
main(){	

	Estudiante estudiante;
	cout<<"Ingrese el codigo"<<endl;
	cin>>estudiante.codigo;
	cout<<"Ingrese el nombre"<<endl;
	cin>>estudiante.nombre;
	cout<<"Ingrese la nota"<<endl;
	cin>>estudiante.nota;
	
	cout<<"Codigo "<<estudiante.codigo<<endl;
	cout<<"Nombre "<<estudiante.nombre<<endl;
	cout<<"Nota "<<estudiante.nota<<endl;
	system("pause");
}
