#include <iostream>
using namespace std;

void numeri_pari(int vett[20]){
	for (int i=0;i<20;i++){
		if (vett[i]%2==0){
			cout<<vett[i]<<endl;
		}
	
	}
}

void posto_pari(int vett[20]){
	for (int i=0;i<20;i++){
		if (i%2==0){
			cout<<vett[i]<<endl;
		}
	
	}
}

void aggiungi_togli(int vett[20]){
	for (int i=0;i<20;i++){
		if (vett[i]>0){
			vett[i]=vett[i]+1;
			cout<<vett[i]<<endl;
		}
		else if(vett[i]<0){
			vett[i]=vett[i]-1;
			cout<<vett[i]<<endl;
		}
  }
}


void posto(int vett[20]){
	int indice;
	cout<<"DIMMI UN INDICE: "<<endl;
	cin>>indice;
		if (indice >= 0 && indice < 20){ 
      cout << "Il contenuto è " << vett[indice] << endl;
    }
    else cout << "Non esiste"<< endl;
}


void calc_media( int vett[20], int &media){
   for(int i = 0 ; i <20; i++){
       media += vett[i];
   }
   media = media/ 20;
}

void count_val_media(int vett[20], int &media){
   int contatore = 0;
   for(int i = 0 ; i <20; i++){
       if(vett[i] > media) contatore ++;
   }
   cout << "I numeri maggiori della media sono in tutto: " << contatore<<endl;
}


void view_val_media(int vett[20], int &media){
   cout << " I valori maggiori della media sono : "<< endl;
   for(int i = 0 ; i <20; i++){
       if(vett[i] > media) cout << vett[i] << endl;
   }
}


void max_val(int vett[0], int &max){
   for(int i = 0; i< 20; i++){
       if(vett[i] > max) max = vett[i];
   }
}


void view_ind_max(int vett[20], int &max){
   cout << " Le posizioni occupate dal maggiore sono : "<< endl;
   for(int i = 0; i< 20; i++){
       if(vett[i] == max) cout << i << endl;
   }
}



int main(){
int vettore[20];
for (int i=0;i<20;i++){
	vettore[i]=i;
}
int media=0;
int max=0;
int val;
numeri_pari(vettore);
posto_pari(vettore);
aggiungi_togli(vettore);
posto(vettore);
calc_media(vettore, media);
count_val_media(vettore, media);
view_val_media(vettore, media);
val = vettore[0];
vettore[0] = vettore[19];

}
