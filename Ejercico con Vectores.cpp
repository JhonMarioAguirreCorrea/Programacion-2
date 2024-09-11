
//Ejercicios con Vectores - Jhon Mario Aguirre


#include <iostream>
#include <vector>

using namespace std; 

//Ejercicio 1

int main (){
    
    vector <int> vec{1,2,3,4,5,6,7,8,9,10};
    
    for (int i = 0; i < vec.size(); i++) {
        
        cout<<vec[i]<<" ";
        }
     
   return 0; 
}


//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 2

int main(){
    
    vector <int> vec;
    
    for (int i= 0; i < 5; i++){
    
     vec.push_back(i+1);}
    
    for (int i = 0; i < vec.size(); i++) {
        
        cout<<vec[i]<<" ";
    }
    return 0; 
}


//______________________________________________________________________________



#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 3

int main() {
    int N; 
    cout<<"Ingrese el número de elementos: ";
    cin>>N;

    vector<int> vec(N);  
    int suma 0;  

    
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];  
        suma += vec[i]; }

    cout<<"La suma de los elementos es: " << suma << endl;

    return 0;
}
//______________________________________________________________________________
#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 4

int main() {
    vector<int> vec(5);  

    
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = i * 2;}

    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";   }
        
    return 0;
}


//______________________________________________________________________________

#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 5

int main() {
    vector<int> vec(5);  

    
    for (int i = 0; i <= vec.size(); i++) {
        vec.at(i) = i * 2;
    }

    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i)<< " ";
    }
    
    return 0;
}


//______________________________________________________________________________

#include <iostream>
#include <vector>

using namespace std;


//Ejercicio 6


int main() {
    int N;  
    cout << "Ingrese el número de elementos: "; cin >> N;

    vector<int> vec(N); 

    
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

   
    cout << "Elementos del vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}


//______________________________________________________________________________

#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 7

int main() {
   
    vector <int> vec;
    
    for (int i = 0; i <= 10; i++) {
        
        vec.push_back(i);
        cout<<vec.size()<<"  "<<vec.capacity()<<endl; 
        
    }
    return 0;
}


//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;
//Ejercicio 8 


int main() {
    int N, max=0; 
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

    
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    
    for (int i = 0; i < vec.size(); i++) {
        
        if(vec[i]>max)
        
        {
           max=vec[i];
        }
    }
    cout<<"El numero mayor es: "<<max;
    
    return 0;
}



//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 9


int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

    
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];}

  
    cout << "Vector inicial: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " "; }
        
    cout << endl;

    vec.pop_back();

    cout << "Vector después de eliminar el último elemento: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}


//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;
// Ejercicio 10; 


int main() {
    int N; 
    cout<<"Ingrese el número de elementos: ";
    cin>>N;

    vector<int> vec(N);  

    
    cout << "Ingrese " <<N<< " enteros: ";
    for (int i = 0; i < N; i++) {
        cin>>vec[i];
    }

    vector<int> vec_inverso;  

    
    while (!vec.empty()) {
        vec_inverso.push_back(vec.back());  
        vec.pop_back();  
    }

    cout << "Vector invertido: ";
    for (int i = 0; i < vec_inverso.size(); i++) {
        cout<<vec_inverso[i] << " ";
    }
    cout<<endl;

    return 0;
}


//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;
// Ejercicio 11; 


int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

   
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    cout << vec.front() << " " << vec.back() << endl;

    return 0;
}


//______________________________________________________________________________



#include <iostream>
#include <vector>

using namespace std;
// Ejercicio 12; 


int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

   
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    
     vector<int> vec2=vec;
     
    for (int i = 0; i < N; i++) {
        cout<<vec[i]<<" ";}
    
    cout<<endl; 
    
    for (int i = 0; i < N; i++) {
        cout<<vec2[i]<<" ";
    }

    return 0;
}



//______________________________________________________________________________



#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Ejercicio 13; 


int main() {
    float N, promedio= 0;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<float> vec(N);  

   
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    
    for (int i = 0; i < N; i++) {
        
        promedio+=vec[i];
        
    }
    
    cout<<fixed<<setprecision(2)<<promedio/N;
}



//______________________________________________________________________________



#include <iostream>
#include <vector>

using namespace std;
//Ejercicio 14

int main() {
    int N;  
    cout<<"Ingrese el número de elementos: ";
    cin>>N;

    vector<int> vec(N);  

   
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }


    vec.clear();

  
    cout<<"Tamaño del vector ahora es(): " <<vec.size()<<endl;

    return 0;
}


//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;
//Ejercicio 15

int main() {
    int N;  
    cout << "Ingrese el número inicial de elementos: ";
    cin >> N;

    vector<int> vec(N);  

    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    cout << "Antes de resize - Tamaño: " << vec.size() << ", Capacidad: " << vec.capacity() << endl;

   
    int M; 
    cout << "Ingrese el nuevo tamaño del vector: ";
    cin >> M;

 
    vec.resize(M);

    cout << "Después de resize - Tamaño: " << vec.size() << ", Capacidad: " << vec.capacity() << endl;

    return 0;
}


//______________________________________________________________________________


#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//Ejercicio 16


int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

  
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

   
    int elem;
    cout << "Ingrese el entero a insertar: ";
    cin >> elem;

   
    cout << "Vector original: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    
    if (vec.size() >= 2) {  
        vec.insert(vec.begin() + 2, elem);
    } else {
      
        vec.push_back(elem);
    }

    
    cout << "Vector después: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}


//______________________________________________________________________________

#include <iostream>
#include <vector>

using namespace std;
// Ejercico 17


int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i]  }
  
    cout << "Vector original: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";}
    cout << endl;
    
    if (vec.size() > 2) {  
        vec.erase(vec.begin() + 2);
    } else {
        cout << "El vector tiene menos de 3 elementos, no se puede eliminar el tercer elemento." << endl;}

    cout << "Vector después de eliminar el tercer elemento: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " "; }
    cout << endl;
    
    return 0;
} 


//______________________________________________________________________________

#include <iostream>
#include <vector>

using namespace std;
// Ejercico 18


struct Point {
    int x;
    int y;
};

int main() {
    int N;  
    cout << "Ingrese el número de puntos: ";
    cin >> N;

    vector<Point> puntos(N);  
    
    cout << "Ingrese las coordenadas de los puntos (x y):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> puntos[i].x >> puntos[i].y; }

    cout << "Coordenadas de los puntos:" << endl;
    for (const auto& punto : puntos) {
        cout << punto.x << " " << punto.y << endl; }
        
    return 0;} 
//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;
// Ejercicio 19

int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

   
    cout << "Ingrese " << N << " enteros: ";
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }


    for (int i = 0; i < N; i++) {
        if (i < N - 1) {
            if (vec[i] > vec[i + 1]) {
                cout << "mayor" << endl;
            } else {
                cout << "menor" << endl;
            }
        } else {
            cout << "último" << endl;
        }
    }

    return 0;
}

//______________________________________________________________________________


#include <iostream>
#include <vector>

using namespace std;
//Ejercicio 20


int main() {
    int N;  
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> vec(N);  

   
    cout << "Ingrese " << N << " enteros:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    
    cout << "Números en orden inverso:" << endl;
    for (int i = N - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
