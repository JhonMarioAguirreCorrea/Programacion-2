//Victor Manuel Lopez Henao
//Jhon Mario Aguirre Correa


#include <iostream>
using namespace std;

int x, y;
int matrizA[3][4];
int matrizB[3][4];


void pedirdatos(){

 cout<<"Digite el tamaño de la matriz (Es de 3 filas y 4 columnas): "<<endl; cin>>x>>y;
 
 cout<<endl;
 cout<<"Ingrese los datos (Solo ceros y unos): "<<endl;

for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){
        cin>>matrizA[i][j];
    }
}
}



//-----------------------------------------
void pos00(){
    int count=0;
    if(matrizA[0][0] == 1){
        count++;}
        if(matrizA[0][1] == 1){
            count++;
        }
        if(matrizA[1][0] == 1){
            count++;
        }
        if(matrizA[1][1] == 1){
            count++;
        }
       
        matrizB[0][0]=count;
       
   
}


//-----------------------------------------
void pos01(){
    int count=0;
    if(matrizA[0][0] == 1){
        count++;}
        if(matrizA[0][1] == 1){
            count++;
        }
        if(matrizA[0][2] == 1){
            count++;
        }
        if(matrizA[1][0] == 1){
            count++;
        }
        if(matrizA[1][1] == 1){
            count++;
        }
          if(matrizA[1][2] == 1){
            count++;
        }
       
        matrizB[0][1]=count;
}


//-----------------------------------------
void pos02(){
    int count=0;
    if(matrizA[0][1] == 1){
        count++;}
        if(matrizA[0][2] == 1){
            count++;
        }
        if(matrizA[0][3] == 1){
            count++;
        }
        if(matrizA[1][1] == 1){
            count++;
        }
          if(matrizA[1][2] == 1){
            count++;
        }
          if(matrizA[1][3] == 1){
            count++;
        }
       
        matrizB[0][2]=count;
   
}

//-----------------------------------------
void pos03(){
    int count=0;
    if(matrizA[0][2] == 1){
        count++;}
        if(matrizA[0][3] == 1){
            count++;
        }
        if(matrizA[1][2] == 1){
            count++;
        }
        if(matrizA[1][3] == 1){
            count++;
        }
       
       matrizB[0][3]=count;
   
}


//-----------------------------------------
void pos10(){
    int count=0;
    if(matrizA[0][0] == 1){
        count++;}
        if(matrizA[0][1] == 1){
            count++;
        }
        if(matrizA[1][0] == 1){
            count++;
        }
        if(matrizA[1][1] == 1){
            count++;
        }
         if(matrizA[2][0] == 1){
            count++;
        }
        if(matrizA[2][1] == 1){
            count++;
        }
       
        matrizB[1][0]=count;
   
}

//-----------------------------------------
void pos11(){
    int count=0;
    if(matrizA[0][0] == 1){
        count++;}
        if(matrizA[0][1] == 1){
            count++;
        }
        if(matrizA[0][2] == 1){
            count++;
        }
        if(matrizA[1][0] == 1){
            count++;
        }
        if(matrizA[1][1] == 1){
            count++;
        }
        if(matrizA[1][2] == 1){
            count++;
        }
        if(matrizA[2][0] == 1){
            count++;
        }
         if(matrizA[2][1] == 1){
            count++;
        }
        if(matrizA[2][2] == 1){
            count++;
        }
     
       
       matrizB[1][1]=count;
   
}

//-----------------------------------------
void pos12(){
    int count=0;
    if(matrizA[0][1] == 1){
        count++;}
        if(matrizA[0][2] == 1){
            count++;
        }
        if(matrizA[0][3] == 1){
            count++;
        }
        if(matrizA[1][1] == 1){
            count++;
        }
          if(matrizA[1][2] == 1){
        count++;}
        if(matrizA[1][3] == 1){
            count++;
        }
        if(matrizA[2][1] == 1){
            count++;
        }
        if(matrizA[2][2] == 1){
            count++;
        }
          if(matrizA[2][3] == 1){
            count++;
        }
       
       matrizB[1][2]=count;
   
}

//-----------------------------------------
void pos13(){
    int count=0;
    if(matrizA[0][2] == 1){
        count++;}
        if(matrizA[0][3] == 1){
            count++;
        }
        if(matrizA[1][2] == 1){
            count++;
        }
        if(matrizA[1][3] == 1){
            count++;
        }
         if(matrizA[2][2] == 1){
            count++;
        }
        if(matrizA[2][3] == 1){
            count++;
        }
       
       matrizB[1][3]=count;
   
}

//-----------------------------------------
void pos20(){
    int count=0;
    if(matrizA[1][0] == 1){
        count++;}
        if(matrizA[1][1] == 1){
            count++;
        }
        if(matrizA[2][0] == 1){
            count++;
        }
        if(matrizA[2][1] == 1){
            count++;
        }
       
      matrizB[2][0]=count;
   
}

//-----------------------------------------
void pos21(){
    int count=0;
    if(matrizA[1][0] == 1){
        count++;}
        if(matrizA[1][1] == 1){
            count++;
        }
        if(matrizA[1][2] == 1){
            count++;
        }
        if(matrizA[2][0] == 1){
            count++;
        }
         if(matrizA[2][1] == 1){
            count++;
        }
        if(matrizA[2][2] == 1){
            count++;
        }
       
      matrizB[2][1]=count;
   
}

//-----------------------------------------
void pos22(){
    int count=0;
    if(matrizA[1][1] == 1){
        count++;}
        if(matrizA[1][2] == 1){
            count++;
        }
        if(matrizA[1][3] == 1){
            count++;
        }
        if(matrizA[2][1] == 1){
            count++;
        }
        if(matrizA[2][2] == 1){
            count++;
        }
        if(matrizA[2][3] == 1){
            count++;
        }
       
       
       matrizB[2][2]=count;
   
}

//-----------------------------------------
void pos23(){
    int count=0;
    if(matrizA[1][2] == 1){
        count++;}
        if(matrizA[1][3] == 1){
            count++;
        }
        if(matrizA[2][2] == 1){
            count++;
        }
        if(matrizA[2][3] == 1){
            count++;
        }
       
        matrizB[2][3]=count;
   
}

void salida(){
cout<<endl;
for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){
        cout<<matrizB[i][j]<<" ";
    }
    cout<<endl;
}
}


int main(){
   
  pedirdatos();
  pos00();
  pos01();
  pos02();
  pos03();
  pos10();
  pos11();
  pos12();
  pos13();
  pos20();
  pos21();
  pos22();
  pos23();
  salida();


    return 0;
}