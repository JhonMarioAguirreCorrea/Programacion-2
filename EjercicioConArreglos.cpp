#include <iostream>
using namespace std; 

int main(){

int N, n, matrizA[20], matrizB[20]; 
int mitad1=0, mitad2=0;

cout<<"Ingrese N (tamaño del boleto): ";
cin>>N;
n=N/2;


if(N%2==0)

{

cout<<endl<<"Ahora ingrese los numeros del boleto (separado por espacios):" <<endl<<endl; 

for (int i = 0; i < N; i++)
{
  cin>>matrizA[i];
  cout<<" ";
}

for (int i = 0; i < N; i++)
{
  matrizB[i]=matrizA[N-i-1];

}

for (int i = 0; i < n; i++)
{
  mitad1+=matrizA[i];

}

for (int i = 0; i < n; i++)
{
  mitad2+=matrizB[i];
}

if(mitad1==mitad2)

{cout<<endl<<" Boleto valido"<<endl; }

else 

{cout<<endl<<" Boleto no valido "<<endl; }

}


else {cout<<endl<<N<<" no es par. "<<endl;}


return 0;

}