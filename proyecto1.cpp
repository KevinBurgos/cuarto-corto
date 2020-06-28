#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

string traductor()
{
char palabra[1000] ;
gets(palabra); 
int tamanno = strlen(palabra);

 for (int i = 0; i < tamanno ; i++)
{

if (palabra[i] == 'm')

    palabra[i]='0';

else

   if (palabra[i] == 'u')

    palabra[i]='1';

else

    if (palabra[i] =='r')

    palabra[i]='2';

else

    if (palabra[i] =='c')

    palabra[i]='3';

else

   if (palabra[i] =='i')

    palabra[i]='4';

else

    if (palabra[i] == 'e')

    palabra[i]='5';

else

    if (palabra[i] =='l')

    palabra[i]='6';

else

    if (palabra[i] == 'a')

    palabra[i]='7';

else

   if (palabra[i] == 'g')

    palabra[i]='8';

else

    if (palabra[i] == 'o')

    palabra[i]='9';



 }

 cout<<palabra;
  

}




int main() 
{
cout << "Codigo murcielago." << endl << endl;
cout<<"Escribe la frase: "<<endl;
 traductor();
}
