#include <iostream>
using namespace std;

int main (){

int aux;
int cantidad;
cout << "Ingrese la cantidad de caracteres que quiere ingresar: ";
cin >> cantidad;

string texto [cantidad];
string letras []={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

int largo = sizeof(letras)/sizeof(letras[0]);

for(int i=0;i<cantidad;i++){
    cout << "Ingrese el texto para encriptar caracter por caracter y en mayusculas: ";
    cin>> texto[i];
}

for(int i=0;i<cantidad;i++){
    for(int j=0;j<largo;j++){
        if (texto[i]==letras[j]){
            aux = (j+2);
            if (aux>largo){
                aux=aux-26;
                cout<<letras[aux];
                }else{
                cout << letras [aux];
                break;
                }
        }
    }
}
return 0;
}

