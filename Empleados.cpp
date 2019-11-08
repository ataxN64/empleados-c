 
/*
----------------
Incluimos nuestras librerias programa de empleados // CARLOS DANEIL LOPEZ HERNANDEZ  // 5190-19-5203 // umg
----------------
*/ 
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
#include<time.h>//libreria de tiempo
#include <locale.h>//libreria para caracteres especiales
 
int opcion;
int contador;
void ingresar();
void buscar();
void mostrar();
void menu();

int a;
 
struct trabajadores{
	char nombre[50], apellido[50], DPI[20], Puesto[50], fecha [20], pais[30], Salario[30] ;
	
};
trabajadores dato[100];
char cmp[40];//Dato para comparar cadenas en busquedas
 
void main(){
contador=0;
a=0;
clrscr();
menu();
}
 
void menu(){

//para caracteres especiales
	char *str;
    setlocale(LC_ALL, "en_US.utf8");

do{
clrscr();
cout<<"'Programa para control de empleados'\n";
cout<<"\n";
cout<<"Carlos Daniel Lopez Hernandez \n";
cout<<"5190-19-5203 \n";
cout<<"\n";
cout<<"PORFAVOR ELIJA UNA OPCION\n";
cout<<"1. Ingresar un empleado\n";
cout<<"2. Buscar un empleado\n";
cout<<"3. Mostrar resultados ingresados\n";
cout<<"4. Salir del programa\n";
cin>>opcion;
	switch(opcion){
		case 1:{
			ingresar();
			break;
			}//case 1 switch1
		case 2:{
			buscar();
			break;
			}//case 2 switch1
		case 3:{
			mostrar();
			break;
			}//case5 switch1

	}//fin de switch
 }while(opcion!=4);
}//fin de la funcion menu
 
void ingresar(){
	// para caracteres especiales
char *str;
   setlocale(LC_ALL, "en_US.utf8");

clrscr();
cout<<"Puedes agregar caracteres especial como : comas, tildes \n";
cout<<"\n";
cout<<"Ingrese nombre\n";
gets(dato[contador].nombre);
cout<<"Ingrese Apellido\n";
gets(dato[contador].apellido);
cout<<"Ingrese su numero de DPI\n";
gets(dato[contador].DPI);
cout<<"fecha de nacimiento\n";
gets(dato[contador].fecha);
cout<<"Puesto\n";
gets(dato[contador].Puesto);
cout<<"pais\n";
gets(dato[contador].pais);
cout<<"Salario\n";
gets(dato[contador].Salario);
cout<<"Presione Enter para continuar";
contador++;
getch();
}
 
void buscar(){
	//para caracteres espsciales
	char *str;
    	setlocale(LC_ALL, "en_US.utf8");

int op;
clrscr();
cout<<"Que Desea Buscar?\n";
cout<<"1. PDI\n";
cout<<"2. Nombre\n";
cin>>op;
	 switch(op){
	  case 1:{
			 clrscr();
			 cout<<"Ingrese el numero de DIN\n";
			 gets(cmp);
			 for(int i=0;i<=contador;i++){
			 if(strcmp(dato[i].DPI,cmp)==0){

			cout<<"Los Resultados de busqueda de : "<<dato[i].nombre<<"\n";
			cout<<"\n";
			cout<<"Nombre : "<<dato[i].nombre<<"\n";
			cout<<"Apellido : "<<dato[i].apellido<<"\n";
			cout<<"Pais : "<<dato[i].pais<<"\n";
			cout<<"Puesto : "<<dato[i].Puesto<<"\n";
			cout<<"salario  : Q"<<dato[i].Salario<<"\n";
			
			}//fin de condicional for
 
			}//fin de ciclo for
		 break;
		 }//fin de case 1
	case 2:{
	  clrscr();
	  cout<<"Ingrese el Nombre\n";
		 gets(cmp);
		  for(a=0;a<=contador;a++){
			if(strcmp(dato[a].nombre,cmp)==0){
			
			cout<<"Los Resultados de busqueda de : "<<dato[a].nombre<<"\n";
			cout<<"\n";
			cout<<"Nombre : "<<dato[a].nombre<<"\n";
			cout<<"Apellido : "<<dato[a].apellido<<"\n";
			cout<<"Pais : "<<dato[a].pais<<"\n";
			cout<<"Puesto : "<<dato[a].Puesto<<"\n";
			cout<<"salario : Q"<<dato[a].Salario<<"\n";
			
			}//fin de condicional if
 
		  }//fin de ciclo for
		break;
	  }//Fin de case 2
}//fin de switch
 
getch();
}//fin de buscar
 

void mostrar(){
	//parta caracteres especiales
	char *str;
    	setlocale(LC_ALL, "en_US.utf8");

clrscr();
cout<<"nombre"<<setw( 9 )<<"PDI"<<setw( 15 )<<"Puesto"<<"\n";
for (int m=0;m<=contador;m++){
cout<< dato[m].nombre<<setw( 9 )<<dato[m].DPI<<setw( 15 )<<dato[m].Puesto<<"\n";


}
getch();
}






