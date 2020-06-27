/*Calcule el promedio de estatura de una clase de 25 alumnos. Decir cuantos se encuentran
arriba de la media y cuantos debajo de la media.
-Que calcule la media de las estaturas.
-Que compare y cuente la cantidad de estaturas que están arriba de la media y debajo de
la media.*/

#include "iostream"
#include "conio.h"
#include "stdlib.h"
using namespace std;

int arribaMedia=0, abajoMedia=0, justoMedia=0;
int i;
float comprobar(float&, float&);  //funcion para comprobar la cantidad de estaturas
float media();  //funcion para la media o promedio

int main()
{
    cout<<endl;
    cout<<"PROMEDIO DE 25 ESTUDIANTES"<<endl<<endl;
    media();
    
    getch();
    return 0;
}
float media() //definiendo la funcion
{
    float estaturas[25];
    float suma=0;
    float media=0;
    for (i=0; i<25; i++)
    {
        cout<<"Estatura del estudiante: "<<i+1<<endl;
        cout<<"Ingrese la estatura del estudiante: "<<endl; cin>>estaturas[i];
    }
    for (i=0; i<25; i++)
    {
        suma+=estaturas[i];
    }
    for (i=0; i<25; i++)
    {
        media=suma/25;
        comprobar(estaturas[i], media);
    }
    cout<<"El promedio de altura es: "<<endl<<media<<endl;
    cout<<"Estudiantes arriba del promedio hay: "<<endl<<arribaMedia<<endl;
    cout<<"Estudiantes abajo del promedio hay: "<<endl<<abajoMedia<<endl;
    cout<<"Estudiantes que estan justo en el promedio hay: "<<endl<<justoMedia<<endl;
}
float comprobar(float& estatura, float& media) //definiendo funcion
{
    if (estatura > media)
    {
        arribaMedia = arribaMedia+1;
    }
    else if (estatura < media)
    {
        abajoMedia = abajoMedia+1;
    }
    else
    {
        justoMedia = justoMedia+1;
    } 
}