#include <iostream>
#include <string>
#include <cctype> // isspace=Eespacio, isdigit=Edig toupper=Cmayus, tolower=Cminus islower=minus?, isupper=mayus?;
#include <algorithm> //sort=OrganizaValorAscci

using namespace std; 


//********************************************** #0 
// Funciones globales

int opcion;
string cadena1, cadena2;

 
//********************************************** #1

void inverC(){  

cin.ignore(); //Preparamos la entrada para el getline

cout<<endl<<"1. Invertir cadena: "<<endl;
cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

cadena2.resize(cadena1.size()); // Asignamos un tamaño correcto para cadena2

for (int i = 0; i < cadena1.size(); i++)
{
    cadena2[i] = cadena1[cadena1.size() - i - 1]; 

}

cout<<endl<<"La cadena resultante es: "<<cadena2<<endl;

}


//*********************************************** #2

void siguienteC() {
 
    
    // Preparar la entrada para getline
    cin.ignore(); 

    cout << endl <<"2. Siguientes letras de la cadena: " << endl;
    cout << "Ingrese una cadena: "; getline(cin, cadena1);

    // Procesar cada carácter de la cadena
    for (int i = 0; i < cadena1.size(); i++) {
        char c = cadena1[i];
        
        // Si el carácter es una letra minúscula
        if (c >= 'a' && c <= 'z') {
            if (c == 'z') {
                cadena1[i] = 'a'; // Cambia 'z' a 'a'
            } else {
                cadena1[i] = c + 1; // Cambia a la siguiente letra
            }
        }
        // Si el carácter es una letra mayúscula
        else if (c >= 'A' && c <= 'Z') {
            if (c == 'Z') {
                cadena1[i] = 'A'; // Cambia 'Z' a 'A'
            } else {
                cadena1[i] = c + 1; // Cambia a la siguiente letra
            }
        }
        // Si el carácter no es una letra, mantenerlo igual
    }

    cout << "La cadena resultante es: " << cadena1 << endl;
}


//*********************************************** #3

void mayuscC() {

    cin.ignore(); 

    cout << endl << "3. Primera letra de cada palabra en mayúscula: " << endl;
    cout << "Ingrese una cadena: "; getline(cin, cadena1);

    bool inicioP=true; //La primer letra siempre se convertira en mayus

    for (char &c : cadena1){ //El char &c es para acceder directamente a los elementos de una cadena e isspace es una función de la librería cctype que verifica si un carácter es un espacio
   
        if (isspace(c)){    //Como la primer letra no es un espacio pasa al else if como true, y le da a inicioP un false, para que si la siguiente es letra no la convierta;
                           //pero si la siguiente es espacio le da el valor a inicioP de true, es decir para que pase al else if y convierta a mayus el siguiente elemento.
            inicioP=true;  

        } else if (inicioP){
           
            c=toupper(c); // Toupper vuevle un caracter a mayus
            inicioP=false;

        }}  

        cout<<endl<<"La cadena resultante es: "<<cadena1<<endl;
}
    

//*********************************************** #4


 void palabraG() {
   
    string palabraActual = "", mayorPalabra = "";
    cin.ignore();
   

    cout << "Ingrese una cadena: ";
    cout<<"4. Encuentra la palabra más grande"; getline(cin, cadena1);

    // Recorrer la cadena carácter por carácter
    for (int i = 0; i <= cadena1.size(); i++) {

        if (i == cadena1.size() || isspace(cadena1[i])) {
            // Si es un espacio o el final de la cadena, procesamos la palabra, sino pasamos al else que concatena una palabra hasta un espacio o final

            if (palabraActual.length() > mayorPalabra.length()) {
                mayorPalabra = palabraActual; // Actualizar la mayor palabra
              }

            // Reiniciar la palabra actual para la siguiente
            palabraActual = "";
        } else {

            // Si no es un espacio, agregamos el carácter a la palabra actual
            palabraActual += cadena1[i];} //Acá concatenamos la palabra actual que inicia vacía para luego compararse con la palabra mayor guardada
    }
    cout << "La palabra más grande es: " << mayorPalabra << endl;
}


//*********************************************** #5

void ordenarC() {
  
    cin.ignore();
    cout<<endl<<"5. Organiza una cadena"<<endl;
    cout << "Ingrese una cadena: "; getline(cin, cadena1);
   
    sort(cadena1.begin(), cadena1.end());  // De la librería algorithm, organiza caracteres según su valor ASCII en un rango begin-end

    cout << "Cadena ordenada: " << cadena1<< endl;
}


//*********************************************** #6

void eygC(){

cin.ignore(); //Preparamos la entrada para el getline

cout<<endl<<"6. Comprueba si las letras e y g estan separadas por 2 espacios.  "<<endl;
cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

int cdor=0; 

for (int i = 0; i < cadena1.size(); i++)
{
    if(cadena1[i]=='e' && cadena1[i+3]=='g')
     
      {cdor+=1;}

}

if(cdor>0)
  {cout<<endl<<"La e y la g estan separadas por dos espacios "<<cdor<<" veces. ";}
 
 else
 {cout<<endl<<"La e y la g no estan separada por dos espacios ni una vez. ";}

}


//*********************************************** #7

void contarV(){

cin.ignore(); //Preparamos la entrada para el getline

cout<<endl<<"7. Cuenta las vocales de una cadena:  "<<endl;
cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

int cdor=0;

for (int i = 0; i < cadena1.size(); i++)
{  
    char c=cadena1[i];
    

    if(c=='a' || c=='e' || c=='i' || c=='o' ||  c=='u')
   
     {
        cdor+=1;
     } 
}

cout<<endl<<"La cadena '"<<cadena1<<"' tiene "<<cdor<<" vocales. "<<endl; 
}


//*********************************************** #8

void contarP(){

cin.ignore(); //Preparamos la entrada para el getline

cout<<endl<<"8. Cuenta las palabras de una cadena:  "<<endl;
cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

int cdor=0;

for (int i = 0; i < cadena1.size(); i++)
{
    if(isspace(cadena1[i]))
    
      {cdor+=1; }

} 

cout<<endl<<"La cadena '"<<cadena1<<"' tienen "<<cdor+1<<" palabras. "<<endl; 
}


//*********************************************** #9

void caracI(){

cin.ignore(); 

cout<<endl<<"9. Comprobar si al menos un caracter se repite:  "<<endl;
cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

int cdor=0;
for (int i = 0; i < cadena1.size(); i++)
{
    for (int j = 0; j < cadena1.size()-1; j++)
    {
        if(i != j && cadena1[i] == cadena1[j])

        {cdor+=1; }
    }
    
}

if(cdor>0)
  
    {cout<<endl<<"Al menos un carater se repite. "<<endl; }

 else
    {cout<<endl<<"Ningún caracter se repite. "<<endl; }
 
}


//*********************************************** #10

void palindromo(){

cin.ignore(); 

cout<<endl<<"10. Verifica si una cadena es un palíndromo: "<<endl;
cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

cadena2.resize(cadena1.size()); // Asignamos un tamaño correcto para cadena2

for (int i = 0; i < cadena1.size(); i++)
{
    cadena2[i]=cadena1[cadena1.size()-i-1]; 
}

if(cadena1==cadena2)
 
  {cout<<endl<<"La cadena '"<<cadena1<<"' es un palíndromo. ";}

     else {cout<<endl<<"La cadena '"<<cadena1<<"' no un palíndromo. ";}

}


//*********************************************** #11

 void mayorLR() {
   
    string palabraActual = "", mayorPalabra = "";
    int cdorA=0, cdorM=0;
    cin.ignore();
   
    cout<<endl<<"11. Encuentra la palabra con más letras repetidas";
    cout <<endl<<"Ingrese una cadena: "; getline(cin, cadena1);
  

    for (int i = 0; i <= cadena1.size(); i++) { //Se recorre toda la cadena

        if (i == cadena1.size() || isspace(cadena1[i])) { //Se procesa palabra por palabra al llegar a un espacio o al final
           
            
              for (int i = 0; i < palabraActual.size(); i++) {

                for (int j = 0; j < palabraActual.size()-1; j++)
                  {
                      if(i != j && palabraActual[i] == palabraActual[j]) //Se cuentan las letras repetidas en cada palabra

                     {cdorA+=1; }  
                  }      
                }


         if (cdorA>cdorM) { //Se comparan la cantidad de letras repetidas en una palabra con la anterior
                cdorM=cdorA;   //Si es mayor se actualiza el contador y la palabra 
                mayorPalabra = palabraActual; 
         }

          
            palabraActual = ""; //Se reinician las variables actuales que contaran caracteres y registran la palabra
            cdorA=0;

        } else {
        
            palabraActual += cadena1[i]; //Se genera una palabra caracter por caracter hasta un espacio o el final de la cadena
            
    }
    }

    cout << "La palabra con más letras repetidas es: " << mayorPalabra << endl;
 }


//*********************************************** #12 

void guionI() { 
    cin.ignore(); 

    cout<<endl<<"11. Inserta un guión entre dos números impares: "<<endl;
    cout<<"Ingrese una cadena: "; getline(cin, cadena1); 

    cadena2.resize(cadena1.size() * 2); // Redimensiona para incluir posibles guiones

    int j = 0; // Índice para cadena2

    for (int i = 0; i < cadena1.size(); i++) {
        if (i > 0 && isdigit(cadena1[i]) && isdigit(cadena1[i-1])) { //dig 1 y 2...

            int digitA=cadena1[i] - '0';
            int digitAn=cadena1[i-1] - '0';

            // Verifica si ambos dígitos son impares
            if (digitA%2 != 0 && digitAn%2 != 0) {
                cadena2[j++] = '-'; // Inserta el guión
            }
        }

        cadena2[j++]=cadena1[i]; // Copia el carácter de la cadena original
    }

    cadena2.resize(j); // Ajusta el tamaño de la cadena2

    cout<<endl<<"La cadena resultante es: "<<cadena2<<endl; 
}


//*********************************************** #13

void mayusminsC(){

    cin.ignore(); 

    cout<<endl<<"12. Convierte de mayúscula a minúsculas y viceversa : "<<endl;
    cout<<"Ingrese una cadena: ";  getline(cin, cadena1); 

    for (int i = 0; i < cadena1.size(); i++)
    {
        char c=cadena1[i]; 

        if(islower(c))
          
           {cadena1[i]=toupper(c); }

        else if(isupper(c))

           {cadena1[i]=tolower(c); }

        else
          {cadena1[i]=c;}

    }
    
   cout<<endl<<"La cadena resultante es: "<<cadena1<<endl;

}


//*********************************************** #14

void sumaD(){

    int suma=0;
    cin.ignore(); 

    cout<<endl<<"13. Suma los digitos de una cadena: "<<endl;
    cout<<"Ingrese una cadena: ";  getline(cin, cadena1); 

    for (int i = 0; i < cadena1.size(); i++)
    {
     if(isdigit(cadena1[i]))
        
        {int n=cadena1[i]-'0'; //Se procesa el caracter como un dig

        {suma+=n; }}

    }
    
   cout<<endl<<"La suma de los digítos de la cadena es: "<<suma<<endl;

}


//*********************************************** #15


int numero; 

string convertirUnidades(int num) {  //Funciones auxiliares 
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    return unidades[num];
}

string convertirDecenas(int num) {
    string decenas[] = {"", "diez", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    return decenas[num];
}

string convertirEspeciales(int num) {
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    return especiales[num - 10];
}

string convertirCientos(int num) {
    string centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    return centenas[num];
}

string convertirNumero(int num) { //Función principal para convertir
    if (num == 0) return "cero";

    string resultado = "";

    // Convertir centenas
    if (num / 100 > 0) {
        resultado += convertirCientos(num / 100) + " ";
        num %= 100;
    }

    // Convertir especiales (números entre 10 y 19)
    if (num >= 10 && num < 20) {
        resultado += convertirEspeciales(num) + " ";
    }
    else {
        // Convertir decenas
        if (num / 10 > 0) {
            resultado += convertirDecenas(num / 10) + " ";
            num %= 10;
        }

        // Convertir unidades
        if (num > 0) {
            resultado += convertirUnidades(num) + " ";
        }
    }

    return resultado; //Devuelve el resultado en string
}

void convertirN(){ //Función de llamado

   cout<<endl<<"15. Convierte un número a palabras (0 a 900): "<<endl;
   cout<<"Ingrese el número: "; cin>>numero; 
    
   cout<<"El número "<<numero<<" es: "<<convertirNumero(numero);  //LLama a la función principal para convertir y muestra lo que devuelve (resultado)

}


//*********************************************** #16

void prefijoC() {

    cin.ignore(); 
    cout <<endl<<"16. Encuentra el prefijo común más largo en una cadena: "<<endl;
    cout <<"Ingrese la cadena: "; getline(cin, cadena1); 

    string prefijoA, prefijoB, prefijo;

    // Extraer la primera palabra
    int i = 0;
    while (i < cadena1.size() && !isspace(cadena1[i])) {
        prefijoA += cadena1[i];
        i++;
    }
    i++; // Saltar el espacio

    // Extraer la segunda palabra
    while (i < cadena1.size() && isspace(cadena1[i])) {
        i++; // Saltar los espacios
    }

    while (i < cadena1.size() && !isspace(cadena1[i])) {
        prefijoB += cadena1[i];
        i++;
    }

    // Encontrar el prefijo común entre prefijoA y prefijoB
    int j = 0;
    while (j < prefijoA.size() && j < prefijoB.size() && prefijoA[j] == prefijoB[j]) {
        prefijo += prefijoA[j];
        j++;
    }

    cout << endl << "El prefijo común más largo es: " << prefijo << endl;
}


//*********************************************** #17

//*********************************************** #18

//*********************************************** #19

//*********************************************** #20











//*****************************************************************************

    void menu(){

  cout<<"MENÚ: "<<endl;
  cout<<"1. Invertir cadena. "<<endl; 
  cout<<"2. Siguiente letra de la cadena. "<<endl; 
  cout<<"3. Primer letra de cada palabra en mayúscula. "<<endl; 
  cout<<"4. Encuentra la palabra más larga de una cadena. "<<endl; 
  cout<<"5. Ordena las letras de un cadena. "<<endl;
  cout<<"6. Comprueba si las letras e y g estan separadas por 2 espacios. "<<endl;
  cout<<"7. Cuenta las vocales de una cadena. "<<endl; 
  cout<<"8. Cuenta las palabras de una cadena. "<<endl;
  cout<<"9. Comprobar si al menos un caracter se repite. "<<endl; 
  cout<<"10. Verifica si una cadena es un palíndromo. "<<endl;
  cout<<"11. Encuentra la palabra con más letras repetidas. "<<endl;
  cout<<"12. Inserta un guíon entre dos numeros impares. "<<endl;
  cout<<"13. Convierte mayúsculas a minúsculas y viceversa"<<endl;
  cout<<"14. Suma los dígitos de una cadena. "<<endl;
  cout<<"15. Convierte un número entero a palabras. "<<endl;
  cout<<"16. Encuentra el prefijo común más largo en una cadena. "<<endl;

  cout<<endl<<"Ingrese una opción: "; cin>>opcion; 
  
switch (opcion)
{
case 1:
    inverC(); 
    break;

case 2:
    siguienteC();
    break;

case 3:
    mayuscC();
    break;

case 4:
    palabraG();

    break;

case 5:
    ordenarC();

    break;

case 6:
    eygC();
    break;

case 7:
    contarV();
    break;

case 8:
    contarP();
    break;

case 9:
    caracI();
    break;

case 10:
    palindromo();
    break;

case 11:
    mayorLR();
    break;

case 12:
    guionI(); 
    break;

case 13:
    mayusminsC();
    break;

case 14:
    sumaD();
    break;

case 15:
    convertirN();
    break;

case 16:
    prefijoC();
    break;

case 17:
    /* code */
    break;

case 18:
    /* code */
    break;

case 19:
    /* code */
    break;

case 20:
    /* code */
    break;



default:
    break;
}

}

//********************************************** 

int main(){

  menu(); 


 cout<<endl; system ("pause");
 return 0;
}
