#include <iostream>

using namespace std;

int main()
{
    int numeros[30];
    int x=0,y=1,z=0,num;
    int suma1=0,suma2=1;

    cout<<"Digite el numero de elementos de la serie: "<<endl;
    cin>>num;
    cout<<"Digite los numeros de la serie "<<endl;

    for(int i=0;i<num;i++){
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros[i];
        suma1 = suma1 + numeros[i];
    }

    cout<<"\nSus numeros son: ";

    for(int i=0;i<num;i++){
        cout<<numeros[i]<<" ,";
    }
    cout<<"\nLa serie de fibonacci correcta es: "<<endl;

    cout<<"1 , ";
    for(int i=1;i<num;i++)
    {
        z=x+y;
        cout<<z<<" , ";
        x=y;
        y=z;
        suma2 = suma2+z;
    }

    cout<<endl;
    if(suma1==suma2){
        cout<<"\nSi es una serie de fibonacci"<<endl;
    }
    else{
        cout<<"\nNo es una serie de fibonacci"<<endl;
    }

    cin.get();
    return 0;
}
