/*Se necesita crear un sistema, para n estudiantes, que lea sus cinco notas; luego calcule la
nota final de acuerdo a la ponderación de cada nota, y la muestre en pantalla junto con
un mensaje indicando si ha aprobado o reprobado. Cada nota tiene un 20% del 100%.
Crear las funciones que:
-Llene la matriz
-Calcule la nota final y que despliegue si aprobó o reprobó.*/

#include "iostream"
#include "conio.h"
using namespace std;

int i, j, n;
void llenarmatriz(); //nombrando la funcion
void notafinal(int, int, float, int valores[][5]); //nombrando la funcion

int  main()
{
    llenarmatriz();

    getch();
    return 0;
}
void llenarmatriz()  //definiendo funcion
{
    int valores [100][5], filas, columnas = 5; //llenando la matriz con valores
    float notas=0;
    cout<<"Ingrese la cantidad de estudiantes: "<<endl; cin>>filas;
    for (i=0; i<filas; i++)
    {
        for (j=0; j<columnas; j++)
        {
            cout<<"Ingrese las notas: ["<<i<<"]["<<j<<"]: "<<endl;
            cin>>valores[i][j];
        }
    } 
    for (i=0; i<filas; i++) //mostrando matriz
    {
        for (j=0; j<columnas; j++)
        {
            cout<<"|";
            cout<<valores[i][j];
            cout<<"|";
        }
        cout<<endl;
    }
    notafinal(filas, columnas, notas, valores);
}
void notafinal(int filas, int columnas, float notas, int numeros[][5]) //definiendo funcion
{
    for (i=0; i<filas; i++)
    {
        cout<<endl;
        cout<<"Numero de fila que desea sacar la nota final: "<<endl; cin>>n;
        if (n==0)
        {
         for (j=0; j<columnas;j++)
         {
             notas+=(numeros[n][j]*0.20);
         }
         cout<<"La nota final es: "<<endl<<notas<<endl;
         if (notas>=6)
         {
             cout<<"El alumno esta aprobado"<<endl;
         }
         else
         {
             cout<<"El estudiante esta reprobado"<<endl;
         }
         
        }
        else if (n>=1)
        {
            for (j=0; j<columnas; j++)
            {
                notas+=(numeros[n][j]*0.20);
            }
            cout<<"La nota final es: "<<endl<<notas<<endl;
            if (notas>=6)
            {
                cout<<"El estudiante esta aprobado"<<endl;
            }
            else
            {
                cout<<"El estudiante esta reprobado"<<endl;
            }
            
        }
        else
        {
            cout<<"El numero de fila es incorrecto"<<endl;
        }
        notas=0;
    }
}


    