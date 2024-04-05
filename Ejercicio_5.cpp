#include <iostream>
using namespace std;


struct Estudiante {
	int codigo[4];
	string nombre[4];
	int nota[4];
};
	
main(){	

	Estudiante estudiante;
	for(int i=0;i<4;i++){
		cout<<"Ingrese el codigo"<<endl;
	cin>>estudiante.codigo[i];
	cout<<"Ingrese el nombre"<<endl;
	cin>>estudiante.nombre[i];
	cout<<"Ingrese la nota"<<endl;
	cin>>estudiante.nota[i];
	
	cout<<"Codigo "<<estudiante.codigo[i]<<endl;
	cout<<"Nombre "<<estudiante.nombre[i]<<endl;
	cout<<"Nota "<<estudiante.nota[i]<<endl;	
	}

	system("pause");
}
