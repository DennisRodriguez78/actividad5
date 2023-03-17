#include <iostream>
using namespace std;

main(){
	
	
	cout<<"______ Array Bidimensional ______"<<endl;
	
	int fila=0,columna=0;
	cout<<"Ponga Filas:";
	cin>>fila;
	cout<<"Ponga Columnas:";
	cin>>columna;
	
	int tabla[fila][columna];
	
	for (int i=0;i<fila;i++){
		
		cout<< "__________ Filas: "<<i<<"_____________"<<endl;
		for(int ii=0;ii<columna;ii++){
			int ingreso=0;
		cout<<"fila ["<<i<<"]"<<"Columnas ["<<ii<<"]: ";
		cin>>ingreso;
		tabla[i][ii]= ingreso;
		}
		
	}
cout<< "__________ Enseñar Tabla_____________"<<endl;	
	for (int i=0;i<fila;i++){
		cout<< "__________ Filas: "<<i<<"_____________"<<endl;
		for(int ii=0;ii<columna;ii++){
		cout<<"fila ["<<i<<"]"<<"Columnas ["<<ii<<"]: "<<tabla[i][ii]<<endl;
		}
	}
	
	
	
	system("pause");
}
