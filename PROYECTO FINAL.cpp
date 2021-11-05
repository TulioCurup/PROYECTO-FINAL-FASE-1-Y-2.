#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
using namespace std;
using std::cout; using std::cin;
using std::endl; using std::string;

const char *nombre_archivo = "archivo.dat";

struct Palabras{
	int id;
	char palabra [30];
	char traducccion [30];
	char descripcion [100];
};

// referencias
void ingresar_palabra();
void abrir_palabras();
void actualizar_palabra();
void eliminar_palabra();
void lectura();
// CODIGO PRINCIPAL
 	int validarnombre(char nombre[]); 
int main(){
	int validacion;
	char nombre[20];
	do{
		printf("Presione una tecla para iniciar:");
		scanf("%s",nombre);
		validacion=validarnombre(nombre);
	}while (validacion==0);
	//printf("si sirvio xd: %s",nombre);

	char menu;
	short int opcion;
	do{ 
	system("cls");
	cout<<"Bienvenido al menu:"<<endl;
	cout<<"1)Ingresar palabra:"<<endl;
	cout<<"2)Actualizar"<<endl;
	cout<<"3)Eliminar"<<endl;
	cout<<"4)Revisar"<<endl;
	cout<<"5)Codigo traducido"<<endl;

	cin>>opcion;
	switch (opcion){
		
	case 1: system("cls");ingresar_palabra(); break;	
	case 2: system("cls"); actualizar_palabra(); break;
	case 3: system("cls"); eliminar_palabra(); break; 
	case 4: system("cls"); abrir_palabras(); break;
	case 5: system ("cls"); lectura(); break;
	
	}
		cout<<"Desea regresar al menu  s/n"<<endl;
		cin>>menu;

}while (menu=='s'||menu=='S');

}
//Metodos
void eliminar_palabra(){
		FILE* archivo = fopen(nombre_archivo,"r+b");
	int id,del;
	Palabras palabras;
	string palabra, traduc, descrip;
	cout<<"INGRESE EL ID DE LA PALABRA QUE DESEA ELIMINAR: "<<endl;
	cin>>id;
	id-=1;
	fseek ( archivo, id * sizeof(Palabras), SEEK_SET );
	palabras.id=del;
	strcpy(palabras.palabra,palabra.c_str());
	strcpy(palabras.traducccion,traduc.c_str());
	strcpy(palabras.descripcion,descrip.c_str());
	fwrite(&palabras,sizeof(Palabras),1,archivo);
	fclose(archivo);
	abrir_palabras();
	system("pause");
}

void actualizar_palabra(){
	
	FILE* archivo = fopen(nombre_archivo,"r+b");
	int id;
	Palabras palabras;
	string palabra, traduc, descrip;
	cout<<"INGRESE EL ID DE LA PALABRA QUE DESEA MODIFICAR: "<<endl;
	cin>>id;
	id-=1;
	fseek ( archivo, id * sizeof(Palabras), SEEK_SET );
	
		cout<<"INGRESE EL ID"<<endl;
		cin>>palabras.id;
		cin.ignore();
		
		cout<<"INGRESE LA PALABRA"<<endl;
		getline(cin,palabra);
		strcpy(palabras.palabra,palabra.c_str());
		
		cout<<"INGRESE LA TRADUCCION"<<endl;
		getline(cin,traduc);
		strcpy(palabras.traducccion,traduc.c_str());

		cout<<"INGRESE LA DESCRIPCION"<<endl;
		getline(cin,descrip);
		strcpy(palabras.descripcion,descrip.c_str());
		
	fwrite(&palabras,sizeof(Palabras),1,archivo);
	fclose(archivo);
	abrir_palabras();
	system("pause");
}


void ingresar_palabra(){
	char continua;
	FILE* archivo = fopen(nombre_archivo,"ab");
	Palabras palabras;
	string palabra, traduc, descrip;
	do{
		fflush(stdin);
		
		cout<<"INGRESE EL ID"<<endl;
		cin>>palabras.id;
		cin.ignore();
		
		cout<<"INGRESE LA PALABRA"<<endl;
		getline(cin,palabra);
		strcpy(palabras.palabra,palabra.c_str());
		
		cout<<"INGRESE LA TRADUCCION"<<endl;
		getline(cin,traduc);
		strcpy(palabras.traducccion,traduc.c_str());

		cout<<"INGRESE LA DESCRIPCION"<<endl;
		getline(cin,descrip);
		strcpy(palabras.descripcion,descrip.c_str());
		
		fwrite(&palabras,sizeof(Palabras),1,archivo);
		cout<<"DESEA INGRESAR UN NUEVO ELEMENTO         s/n"<<endl;
		cin>>continua;
	}while((continua=='s')||(continua=='S'));
	fclose(archivo);
}

void abrir_palabras(){
	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
	if (!archivo){
		archivo= fopen(nombre_archivo,"w+b");
	}
	Palabras palabras;
	int id =0;
	fread(&palabras,sizeof(Palabras),1,archivo);
	cout<<"____________________________________________________"<<endl;
	cout<<"ID |PALABRA"<<"|"<<"TRADUCCION"<<"|"<<"DESCRIPCION"<<endl;
	do{
		if(palabras.id!=0){
				cout<<"___________________________________________________"<<endl;
	cout<<palabras.id<<"|"<<palabras.palabra<<"|"<<palabras.traducccion<<"|"<<palabras.descripcion<<endl;

		}
	fread(&palabras,sizeof(Palabras),1,archivo);

	}while(feof(archivo)==0);
	
	fclose(archivo);

}
void lectura(){ //aca va el resto del codigo

	string input= "vacio;";
    string input2 = "entero principal(){ ";
    string input3="entero; protegido(==0); publico{}; nosotros;";
    string input4="pequeño; firmada(!1); estructura{};";
    string input5= "cadena continuar;";
    string input6="lenguaje de ensamblador; auto(); larga(35);";
    string input7="cambiar(("") );";
    string input8="rotura(); caso:(1) nuevo{}; volatil();";
    string input9="captura(); carbonizar25; operador();";
    string input10="clase{} constante(2); tamaño de((22) );";
    string input11="dinamica emitir(); enumeracion(); estatica();";
    string input12= "cout<<Desea continuar si/no :;";
    string input13= "cin>>continuar;";
    string input14="si (continuar==si) inicio si";
    string input15= "cout <<Gracias..<<finalizar;";
    string input16="constante emitir(1==1); seguir();";
    string input17="defecto(); eliminar(--); espacio de nombres;";
    string input18="hacer{} doble(); mudable();";
    string input19= "fin si";
    string input20= "entonces inicio entonces";
    string input21= "salir(1);";
    string input22="explicito(); externo(); privado();";
    string input23="falso(==0); flotador(); esto();";
    string input24="para(); funcion amiga{}; reparto de reinterpretadores();";
    string input25="ir a; en linea(); registrarse();";
    string input26="elenco estatico(); plantilla();";
    string input27="lanzar(); verdadero(1); tratar(00=1); tiempo();";
    string input28="typedef; typeid; escribe un nombre();";
    string input29="union(); no firmada(0); virtual();";
    string input30="regreso 0; }";
    
    string order= "vacio";
    string order2 = "entero principal";
    string order3= "entero; protegido(==0); publico{}; nosotros;";
    string order4="pequeño; firmada(!1); estructura{};";
    string order5 = "cadena";
    string order6= "lenguaje de ensamblador; auto(); larga(35);";
    string order7="cambiar(("") );";
    string order8= "rotura(); caso:(1) nuevo{}; volatil();";
    string order9= "captura(); carbonizar25; operador();";
    string order10= "clase{} constante(2); tamaño de((22) );";
    string order11="dinamica emitir(); enumeracion(); estatica();";
    string order12 = "si";
    string order13 = "inicio si";
    string order14 = "finalizar";
    string order15="constante emitir(1==1); seguir();";
    string order16="defecto(); eliminar(--); espacio de nombres;";
    string order17="hacer{} doble(); mudable();";
    string order18 = "fin si";
    string order19 = "entonces";
    string order20 = "inicio entonces";
    string order21 = "salir";
    string order22 = "explicito(); externo(); privado();";
    string order23 = "falso(==0); flotador(); esto();";
    string order24 = "para(); funcion amiga{}; reparto de reinterpretadores();";
    string order25="ir a; en linea(); registrarse();";
    string order26="elenco estatico(); plantilla();";
    string order27="lanzar(); verdadero(1); tratar(00=1); tiempo();";
    string order28="typedef; typeid; escribe un nombre();";
    string order29="union(); no firmada(0); virtual();";
    string order30= "retorno 0; }";

    cout << input << endl;
    cout<< input2<<endl;
    cout<<input3<<endl;
    cout<<input4<<endl;
    cout<<input5<<endl;
    cout<<input6<<endl;
    cout<<input7<<endl;
    cout<<input8<<endl;
    cout<<input9<<endl;
    cout<<input10<<endl;
    cout<<input11<<endl;
    cout<<input12<<endl;
    cout<<input13<<endl;
    cout<<input14<<endl;
    cout<<input15<<endl;
    cout<<input16<<endl;
    cout<<input17<<endl;
    cout<<input18<<endl;
    cout<<input19<<endl;
    cout<<input20<<endl;
    cout<<input21<<endl;
    cout<<input22<<endl;
    cout<<input23<<endl;
    cout<<input24<<endl;
    cout<<input25<<endl;
    cout<<input26<<endl;
    cout<<input27<<endl;
    cout<<input28<<endl;
    cout<<input29<<endl;
    cout<<input30<<endl;
    
    input.replace(input.find("void"), 4, order);
    input.replace(input.find("int main"), 8, order2);
    input.replace(input.find("int protected public using"), 26, order3);
    input.replace(input.find("short signed struct"), 20, order4);
    input.replace(input.find("string"), 6, order5);
    input.replace(input.find("asm auto long"), 13, order6);
    input.replace(input.find("switch"), 6, order7);
    input.replace(input.find("break case new volatile"), 23, order7);
    input.replace(input.find("catch char operator"), 19, order8);
    input.replace(input.find("class const sizeof"), 18, order9);
    input.replace(input.find("dynamic_cast enum static"), 24, order10);
    input.replace(input.find("if"), 2, order11);
    input.replace(input.find("if begin"), 8, order12);
    input.replace(input.find("ending"), 6, order13);
    input.replace(input.find("const_cast continue"), 19, order14);
    input.replace(input.find("default delete namespace"), 24, order15);
    input.replace(input.find("do double mutable"), 17, order16);
    input.replace(input.find("final if"), 8, order17);
    input.replace(input.find("else"), 4, order18);
    input.replace(input.find("begin else"), 10, order19);
    input.replace(input.find("exit"), 4, order20);
    input.replace(input.find("explicit extern private"), 23, order21);
    input.replace(input.find("false float this"), 16, order22);
    input.replace(input.find("for friend reinterpret_cast"), 27, order23);
    input.replace(input.find("goto inline register"), 20, order24);
    input.replace(input.find("static_cast template"), 20, order25);
    input.replace(input.find("throw true try while"), 20, order26);
    input.replace(input.find("typedef typeid typename"), 23, order27);
    input.replace(input.find("union unsigned virtual"), 22, order28);
    input.replace(input.find("return"), 6, order29);
    
    
    
    cout << input << endl;
    cout<<input2<<endl;
    cout<<input3<<endl;
    cout<<input4<<endl;
    cout<<input5<<endl;
    cout<<input6<<endl;
    cout<<input7<<endl;
    cout<<input8<<endl;
    cout<<input9<<endl;
    cout<<input10<<endl;
    cout<<input11<<endl;
    cout<<input12<<endl;
    cout<<input13<<endl;
    cout<<input14<<endl;
    cout<<input15<<endl;
    cout<<input16<<endl;
    cout<<input17<<endl;
    cout<<input18<<endl;
    cout<<input19<<endl;
    cout<<input20<<endl;
    cout<<input21<<endl;
    cout<<input22<<endl;
    cout<<input23<<endl;
    cout<<input24<<endl;
    cout<<input25<<endl;
    cout<<input26<<endl;
    cout<<input27<<endl;
    cout<<input28<<endl;
    cout<<input29<<endl;
    
    ifstream archivo;
	string linea;
	string inputt;
	string inputt2;
	string inputt3;
	string inputt4;
	string inputt5;
	string inputt6;
	string inputt7;
	string inputt8;
	string inputt9;
	string inputt10;
	string inputt11;
	string inputt12;
	string inputt13;
	string inputt14;
	string inputt15;
	string inputt16;
	string inputt17;
	string inputt18;
	string inputt19;
	string inputt20;
	string inputt21;
	string inputt22;
	string inputt23;
	string inputt24;
	string inputt25;
	string inputt26;
	string inputt27;
	string inputt28;
	string inputt29;
	
	
	archivo.open("tradcutor.txt",ios::in);//aca se abre nuestro archivo
	
	while (getline(archivo,linea)){
		input=input+linea+"\n";
		input2=input2+linea+"\n";
		input3=input3+linea+"\n";
		input4=input4+linea+"\n";
		input5=input5+linea+"\n";
		input6=input6+linea+"\n";
		input7=input7+linea+"\n";
		input8=input8+linea+"\n";
		input9=input9+linea+"\n";
		input=input10+linea+"\n";
		input=input11+linea+"\n";
		input=input12+linea+"\n";
		input=input13+linea+"\n";
		input=input14+linea+"\n";
		input=input15+linea+"\n";
		input=input16+linea+"\n";
		input=input17+linea+"\n";
		input=input18+linea+"\n";
		input=input19+linea+"\n";
		input=input20+linea+"\n";
		input=input21+linea+"\n";
		input=input22+linea+"\n";
		input=input23+linea+"\n";
		input=input24+linea+"\n";
		input=input25+linea+"\n";
		input=input26+linea+"\n";
		input=input27+linea+"\n";
		input=input28+linea+"\n";
		input=input29+linea+"\n";
		
	}
	
	archivo.close();
	cout<< input << endl;
	cout<< input2<<endl;
	cout<< input3<<endl;
	cout<< input4<<endl;
	cout<<input5<<endl;
	cout<<input6<<endl;
	cout<<input7<<endl;
	cout<<input8<<endl;
	cout<<input9<<endl;
	cout<<input10<<endl;
	cout<<input11<<endl;
	cout<<input12<<endl;
	cout<<input13<<endl;
	cout<<input14<<endl;
	cout<<input15<<endl;
	cout<<input16<<endl;
	cout<<input17<<endl;
	cout<<input18<<endl;
	cout<<input19<<endl;
	cout<<input20<<endl;
	cout<<input21<<endl;
	cout<<input22<<endl;
	cout<<input23<<endl;
	cout<<input24<<endl;
	cout<<input25<<endl;
	cout<<input26<<endl;
	cout<<input27<<endl;
	cout<<input28<<endl;
	cout<<input29<<endl;

	
	//ofstream archivo2("traduccion.txt");
	//archivo2 << texto <<"Nueva linea de texto";
}

int validarnombre(char nombre[]){
	int i;
	for(i=0; i<strlen(nombre); i++){
		if(!(nombre[i]>=65 && nombre[i]<=90 || nombre[i]>=97 && nombre[i]<=122)){
			
			printf("Solo letras");
			return 0;
		}
	}
	return 1;
}









