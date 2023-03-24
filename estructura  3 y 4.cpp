#include <iostream>
using namespace std;
struct Estudiante
{
    int codigo[4];
    string nombre[4];
    int nota[4];
};

int main(int argc, char const *argv[])
{
    Estudiante estudiante;
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"ingrese estudiante"<<endl;
        cin>>estudiante.codigo[i];
        cin.ignore();
        cout<<"Ingrese nombre completo "<<endl;
        getline(cin, estudiante.nombre[i]);
        cout<<"ingrese notas";
        cin>>estudiante.nota[i];

    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"__________________________"<<endl;
        cout<<"codigo "<<endl;
         cout<<"Nombre completo "<<endl;
          cout<<"nota"<<endl;
    }
    
    struct Estudiante2
    {
        int *codigo;
        string *nombre;
        int **notas;

    };
    int main(int argc, char const *argv[])
    {
        Estudiante2 estudiante;
        int fila =0; int columna=0;
        
        cout<<"Cuantes estidiantes desea agregar:"<<endl;
        cin>>fila;

         cout<<"Cuantas notas de estudiantes desea agregar"<<endl;
         cin>>columna;
          
          Estudiante2.codigo= new int[fila];
          estudiante2.nombre= new string [fila];
          Estudiante2.notas = new int *[fila];
          for (size_t i = 0; i <fila; i++)
          {
            Estudiante2.notas[i]= new int[columna];     
          }
          
          cout<<"Ingrese notas ________________________"<<endl;
          for (int i = 0; i < fila; i++)
          {
             cout<<"codigo"<<i;
             cin>>estudiante2.codigo[i];
             cin.ignore();
             cout<<"nombre completo"<<i;
             getline(cin, estudiante2.nombre[i]);
             for(int ii, ii < columna; ii++){
                cout<<"ingrese notas "<<ii<<endl;
                cin>>*(*(estudiante2.notas+i)+ii);

             }
             cout<<"____________________________________________";
          }
          for (int i = 0; i < fila; i++)
          {
          cout<<"Codigo"<<i<<estudiante.codigo[i]<<ndl;
          cout<<"Nombre completo "<<i<<Estudiante.nombre[i]<<endl;
          for (int ii = 0; ii < columna; ii++)

          {
          cout<<"ingrese nota"<<ii<<*(*(estudiante2.notas+i)+ii)<<endl;
          }
          cout<<"__________________________________________"<<endl,
          
          }
          
          
             
       
     system("pause");
    }
    
    
    
    
    return 0;
}
