#include <iostream>
using namespace std;
struct vox{
    int v;
    char Nombre[]=Alvaro;
    char apellido[]
    String Fecha;
    int nExpediente;
    vox *sgt;
};
vox *peek = NULL;
void push(Char Nombre[],Char apellido,String Fecha,int nExpediente){
   vox *nvox =  new vox;
   nvox->nombre=nombre;
   nvox->apellido=apellido;
   nvox->Fecha=Fecha;
   nvox->nExpediente=nExpediente;
   nvox->v=x,nvox->sgt=peek;
   peek=nvox;
}
void pop(){
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n";
    else
    peek=peek->sgt;
}
void prt(){
     vox *aux = peek;
     if(aux==NULL)
         cout<<"Nada que imprimir, Stack vacia\n";
     else
         while(aux!=NULL){

             cout<<aux->nombre;
             cout<<aux->apellido;
             cout<<aux->fecha;
             cout<<aux->nExpediente;
             aux=aux->sgt;
         }
}
int main(){
    int op;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                char n;
                cout<<"Nombre: ??  ",cin>>n;
                char a;
                cout<<"Apellido: ?? ",cin>>a;
                String f;
                cout<<"Fecha: ?? ",cin>>f
                int nE;
                cout<<"Numero de Expediente: ??",cin>>nE;
                push(n,a,d,nE);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                pop();
                break;
            case 3:
                cout<<"Imprimiendo..... : ";
                prt();
                break;
            case 4:
                cout<<"------Bye--------";
        }
    }while(op!=4);
}

