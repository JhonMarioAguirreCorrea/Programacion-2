#include <iostream>
using namespace std;

//Programa, operaciones con matrices - Jhon Mario Aguirre



//**************************************************************************************
// Variables globales

int opc1, opc2;
double N; // Tamaño de la matriz
double escalar;
double determinante; 

double matriz1[4][4] = {0}; 
double matriz2[4][4] = {0}; 
double matriz3[4][4] = {0}; 




//**************************************************************************************
// Función para llenar matriz

void llenarM(){
    
    
    cout<<endl<<"Ingrese los datos de la primer matriz: "<<endl;
    
    for (int i = 0; i < N; i++) {
       
       for (int j = 0; j < N; j++) {
      
       cout<<"Dato en la posición "<<i<<" "<<j<<" : "; cin>>matriz1[i][j];
       
      
    }}
     
     
     cout<<endl<<"Ingrese los datos de la segunda matriz: "<<endl<<endl;
     
     for (int i = 0; i < N; i++) {
       
       for (int j = 0; j < N; j++) {
      
       cout<<"Dato en la posición "<<i<<" "<<j<<" : "; cin>>matriz2[i][j];
       
    
    }}

}


//****************
// Función 2 para llenar matriz

void llenarM2(){
    
    
    cout<<endl<<"Ingrese los datos de la matriz: "<<endl;
    
    for (int i = 0; i < N; i++) {
       
       for (int j = 0; j < N; j++) {
      
       cout<<"Dato en la posición "<<i<<" "<<j<<" : "; cin>>matriz1[i][j];
       
      
    }}}





//**************************************************************************************
// Función para mostrar datos


void mostrarM(){
    
    cout<<endl; 
    
    cout<<endl<<"Matriz 1: "<<endl; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           cout<<matriz1[i][j]<<" ";
           
        }
        cout<<endl; 
    }
    
    cout<<endl<<"Matriz 2: "<<endl; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           cout<<matriz2[i][j]<<" ";
           
        }
        cout<<endl;
    }
    
    
    cout<<endl<<"Matriz resultante: "<<endl; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           cout<<matriz3[i][j]<<" ";
           
        }
        cout<<endl;
    }
        cout<<endl; 
}


//****************
// Función 2 para mostrar datos


void mostrarM2(){
    
    cout<<endl; 
    
    cout<<endl<<"Matriz Original: "<<endl; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           cout<<matriz1[i][j]<<" ";
           
        }
        cout<<endl; 
    }

   cout<<endl<<"Matriz resultante: "<<endl; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           cout<<matriz3[i][j]<<" ";
           
        }                cout<<endl;
    }               cout<<endl; 
}


//**************************************************************************************
// 1. Función Suma

void sumaM(){
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           matriz3[i][j] = matriz1[i][j]+matriz2[i][j];
           
        }
    }
}


	
//**************************************************************************************
// 2. Función Resta

void restaM(){
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           matriz3[i][j] = matriz1[i][j]-matriz2[i][j];
           
        }
    }
}



//**************************************************************************************
// 3. Multiplicación por un escalar"



void multE (){
    
 cout<<endl<<"Ingrese el escalar: "; cin>>escalar; 
 
 for (int i = 0; i < N; i++) {
     for (int j = 0; j < N; j++) {
         
         matriz3[i][j]=escalar*matriz1[i][j]; 
         
     }
   }
}



//**************************************************************************************
// 4. Función de multiplicar dos matrices

void multM(){
    for (int i = 0; i < N; i++) {           
        for (int j = 0; j < N; j++) {     
            matriz3[i][j] = 0;             
            for (int k = 0; k < N; k++) {   
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j]; 
            }
        }
    }
}


//**************************************************************************************
// 5. Función de transposicion de matrices


void transM(){
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
           
           matriz3[j][i] = matriz1[i][j];
            
        }
    }
}




//**************************************************************************************
// 6. Función inversa de una matriz


void inverM() {
    
   
  
    int o = matriz1[1][1];
    matriz1[1][1] = matriz1[0][0];
    matriz1[0][0] = o; 
    
    matriz1[0][1] =  matriz1[0][1] * -1; 
    matriz1[1][0] =  matriz1[1][0] * -1; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
            matriz3[i][j] = ( (1/determinante) * (matriz1 [i][j]) );
            
            
        }
    }
   
     
   }




//**************************************************************************************
// 7. Función determinante de una matriz

void deterM() {
    
    determinante = (matriz1[0][0] * matriz1[1][1]) - (matriz1[0][1] * matriz1[1][0]);
   
    
    cout<<endl<<"Matriz: "<<endl; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            
           cout<<matriz1[i][j]<<" ";
           
        }
        cout<<endl; 
    }

     cout<<endl<<"El determinante de la matriz es: "<<determinante;
}




//***************************************************************************************

// MENÚ PRINCIPAL


void menu() {
   

    volver:  
    
    cout<<"Por favor seleccione una opcion de tamaño de la matriz: "<<endl;
    cout<<"1. Matriz 2x2"<<endl;
    cout<<"2. Matriz 3x3"<<endl;
    cout<<"3. Matriz 4x4"<<endl;
    cin>>opc1; 
    cout<<endl;

    switch(opc1) {
        case 1: {
            cout<<"Opciones: "<<endl;
            cout<<"1. Suma de matrices"<<endl;
            cout<<"2. Resta de matrices" <<endl;
            cout<<"3. Multiplicación por un escalar"<<endl;
            
            cout<<"4. Multiplicación de matrices"<<endl;
            cout<<"5. Transposición de matriz"<<endl;
            cout<<"6. Inversa de una matriz"<<endl;
            cout<<"7. Determinante de una matriz"<<endl;
            cout<<endl<<"Elija una opcion: "; 
            cin>>opc2;
             
            switch(opc2) {
                case 1: cout<<endl<<"Suma de matrices"<<endl; N=2; llenarM(); sumaM(); mostrarM(); break;
                case 2: cout<<endl<<"Resta de matrices"<<endl; N=2; llenarM(); restaM(); mostrarM(); break;
                case 3: cout<<endl<<"Multiplicación por un escalar"<<endl; N=2; llenarM2(); multE(); cout<<endl<<"Escalar: "<<escalar; mostrarM2(); break;
                case 4: cout<<endl<<"Multiplicación de matrices"<<endl; N=2; llenarM(); multM(); mostrarM(); break;
                case 5: cout<<endl<<"Transposición de matriz"<<endl; N=2; llenarM2(); transM(); mostrarM2(); break;
                case 6: cout<<endl<<"Inversa de una matriz"<<endl; N=2; llenarM2(); deterM(); inverM(); mostrarM2(); break;
                case 7: cout<<endl<<"Determinante de una matriz"<<endl; N=2; llenarM2(); deterM(); break;
                default: cout<<endl<<"Opción no válida"; break;
            }
            break;
        }
        
        case 2: {
            cout<<"Opciones: " << endl;
            cout<<"1. Suma de matrices" << endl;
            cout<<"2. Resta de matrices" << endl;
            cout<<"3. Multiplicación por un escalar" << endl;
            cout<<"4. Multiplicación de matrices" << endl;
            cout<<"5. Transposición de matriz" << endl;
            cout<<endl<<"Seleccione una opción: "; 
            cin>>opc2;
            
            switch(opc2) {
                case 1: cout<<endl<<"Suma de matrices"<<endl; N=3; llenarM(); sumaM(); mostrarM(); break;
                case 2: cout<<endl<<"Resta de matrices"<<endl; N=3; llenarM(); restaM(); mostrarM(); break;
                case 3: cout<<endl<<"Multiplicación por un escalar"<<endl; N=3; llenarM2(); multE(); cout<<"Escalar: "<<escalar; mostrarM2(); break;
                case 4: cout<<endl<<"Multiplicación de matrices"<<endl; N=3; llenarM(); multM(); mostrarM(); break;
                case 5: cout<<endl<<"Transposición de matriz"<<endl; N=3; llenarM2(); transM(); mostrarM2(); break;
                default: cout<<endl<<"Opción no válida"; break;
            }
            break;
        }
        
        case 3: {
            cout<<"Opciones: " << endl;
            cout<<"1. Suma de matrices"<<endl;
            cout<<"2. Resta de matrices"<<endl;
            cout<<"3. Multiplicación por un escalar"<<endl;
            cout<<"4. Multiplicación de matrices"<<endl;
            cout<<"5. Transposición de matriz"<<endl;
            cout<<endl<<"Seleccione una opción: "; 
            cin>>opc2;
            
            switch(opc2) {
                case 1: cout<<endl<<"Suma de matrices"<<endl; N=4; llenarM(); sumaM(); mostrarM(); break;
                case 2: cout<<endl<<"Resta de matrices"<<endl; N=4; llenarM(); restaM(); mostrarM(); break;
                case 3: cout<<endl<<"Multiplicación por un escalar"<<endl; N=4; llenarM2(); multE(); cout<<"Escalar: "<<escalar; mostrarM2(); break;
                case 4: cout<<endl<<"Multiplicación de matrices"<<endl; N=4; llenarM(); multM(); mostrarM(); break;
                case 5: cout<<endl<<"Transposición de matriz"<<endl; N=4; llenarM2(); transM(); mostrarM2(); break;
                default: cout<<endl<<"Opción no válida"; break;
            }
            break;
        }
        
        default: {
            cout<<endl<<"Opción no válida. Inténtelo de nuevo."<<endl;
            goto volver;  
        }
    }
}




//***************************************************************************************
// Función Principal

int main(){
    
    menu(); 
    
    return 0; 
}
		
		
		
//***************************************************************************************




/* 

// Opciones de dimensiones de las matrices
// Opciones de las operaciones con las matrices

Funciones: 

*Función Principal
*Función de llenado de matriz

1. Función suma 
2. Función resta
3. Función multiplicacion por un escalar
4. Función de multiplicar dos matrices
5. Función de transposicion de matrices
6. Función inversa de una matriz
7. Función determinante de una matriz


*/

	
		