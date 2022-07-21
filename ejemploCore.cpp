#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;

void metodo(int nums, int balance){
    int num;
    int dl[nums][balance];
    srand(time(NULL));
    int first_i,last_i,coor;

    for(int i=0; i<nums; i++){
        cout<<"Core "<<i<<": ";
        cout<<"\n";
        for (int j = 0; j < balance; j++)
        {
            num=1+rand()%51;
            cout<<"\t";
            dl[i][j]=num;
            cout<<"j: "<<j<<"\t"<<dl[i][j]<<endl;

            first_i=dl[i][0];
            last_i=dl[i][2];
            
        }
        cout<<"\n";
        cout<<"primer i: "<<first_i<<endl;
        cout<<"Ultimo i: "<<last_i<<endl;
        cout<<endl;
    }
    cout<<"\n";
    cout<<"ingrese el core: "<<endl;
    cin>>coor;
    cout<<endl<<"Aqui su primero y ultimo elemento core:  ";
    cout<<endl<<"Primer i: "<<dl[coor][0];
    cout<<endl;
    cout<<"Ultimo i: ";
    cout<<dl[coor][2];
    
}

int main(int argc, char **argv){
    int num,core;
    double div;

    cout<<"Escriba la cantidad de numeros:"<<endl;
    cin>>num;

    cout<<"Escriba el numero de cores: "<<endl;
    cin>>core;

    div=num/core;
    cout<<"Aqui balance de carga"<<endl;
    cout<<div<<endl;
    cout<<endl;
    metodo(core,div);
}