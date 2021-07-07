#include <iostream>
#include <math.h>
#include <stdio.h>

 //buraya dizi boyutu girilecek

using namespace std;
/*Lagrange by Emir Gazi Kopar*/
float deger1;
float deger2;
float gecici=1;
int sayac=0;
float sonuc=0;



int boyut;
main(){
    float Lx;
//(x,y) ve (x1,y1) icin

cout<<"Boyut : ";
cin>>boyut;

cout<<endl;


float xj[20];

float xi[20];



//kodun okunurlugunu artirmak ve karişiklik olmamasi acisindan ayri yazilmistir


float x; // araliktan secilen rastgele deger
float Lxi[20];
Lxi[0];
float Pxi[20]; //tum y degerleri bu dizide olacak


for(int i=0;i<boyut;i++){

    cout<<"x["<<i<<"] = ";
    cin>>xj[i];
    xi[i]=xj[i];
    cout<<"y["<<i<<"] = ";
    cin>>Pxi[i];

    cout<<endl;

}


cout<<"interpolasyon ile hesaplanacak deger :";
cin>>x;



for(int i=0;i<boyut;i++){ //L degerleri burada diziye aktariliyor.
    Lx=1;
    for(int j=0;j<boyut;j++){

    if(i!=j){

        Lx *= (x-xj[j])/(xi[i]-xj[j]);

    }
    }

    cout<<"Lxi= "<<Lx<<endl;
    cout<<"Pxi= "<<Pxi[i]<<endl<<endl;

    sonuc+=Lx*Pxi[i];
}
    cout<<"f("<<x<<") == "<<sonuc<<endl;
}
