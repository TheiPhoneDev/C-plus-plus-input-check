#include <iostream>


using namespace std;

const int dimensioneMax=5;

// prototipi
void caricaVettore(char v[], int &n);
void stampaVettore(char v[], int n);
void ricercaElemento(char v[], int n);


int Menu();

int main() {
    
    char vettore[dimensioneMax];
    int scelta;
    int N=0;
    
     do{
      scelta=Menu();
      switch(scelta){
        case 1:
          caricaVettore(vettore,N);
          break;
        case 2:
          ricercaElemento(vettore,N);
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);
    
    
    return 0;
}


int Menu () {
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Inserisci il numero di elementi"<<endl;
  cout<<"2-Ricerca elemento"<<endl;
  cout<<"0-Fine"<<endl;

  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}



void caricaVettore(char v[], int &n) {

    int i=0;

    do{
        cout<<"Inserisci il numero di elementi: ";
        cin>>n;
        if (n<=0||n>dimensioneMax) {
            cout<<"Attenzione, non posso caricare il vettore!!!"<<endl;
        }
    }while(n<=0||n>dimensioneMax);

    while(i<n) {
        cout<<"Inserisci il "<<i+1<<"° elemento: ";
        cin>>v[i];
        i++;
    }

    cout<<endl;



}




void ricercaElemento(char v[], int n) {
	
	char carattere;
	int i=0;
    int counter=0;
    
    
    
    cout<<endl;
    
    cout<<"Inserisci il carattere: ";
    cin>>carattere;
    while(i<n) {
        if(v[i]==carattere) {
            counter++;
        }
        i++;
    }
    
    
 
    cout<<carattere<<" e' stato inserito in input "<<counter<<" volte"<<endl;
    
    cout<<endl;
	
	
}
