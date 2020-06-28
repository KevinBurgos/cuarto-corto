#include "iostream"
#include "conio.h"

using namespace std;

float promedio()
{
float estaturas[25]={1.68, 1.80, 1.88, 1.90, 1.48, 1.59, 1.70, 1.75, 1.85, 1.83, 1.87, 1.74, 1.59, 1.67, 1.69, 1.60, 1.80, 1.88, 1.90, 1.48, 1.59, 1.7, 1.75, 1.85, 1.83};
float promedio2, suma = 0;
int abajo = 0, arriba = 0, ab;

for (int i= 0; i < 25; i++)
{
    suma = suma + estaturas[i];
}
promedio2 = suma / 25;

cout << "El Promedio de la suma es: " << promedio2 << endl << endl;


for(int i = 0; i < 25; i++)
    if(estaturas[i] < promedio2)
    {
        abajo = abajo + 1;
    }

for(int i = 0; i < 25; i++)    
    if (estaturas[i] > promedio2) 
    {
        arriba = arriba + 1;
    }

cout << "El total de alumnos arriba del promedio es: " << arriba << endl << "El total de alumnos abajo del promedio es: " << abajo << endl;
}
int main(void)
{
    cout << "Promedio de estaturas de un salon." << endl << endl;

    promedio();
}

