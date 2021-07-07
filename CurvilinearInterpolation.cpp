#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
/*Egrisel interpolasyon by Emir Gazi Kopar*/
main(){
//(x,y) ve (x1,y1) icin


float fx0=-8; //f(x0) degeri

float fx1=0; // f(x1) degeri

float fx2=2.063; // f(x2) degeri

float x0=0; //x0 degeri

float x1=2.928; //x1 degeri

float x2=3.5; // x2 degeri

float x=3; // araliktan secilen rastgele deger

float yi=5; // seri üzerinden seçilmiş olan x degerinin y'si

float b0 = fx0;

cout<<"b0: "<<b0<<endl<<endl;

float b1 = (fx1-fx0/x1-x0);

cout<<"b1: "<<b1<<endl<<endl;



float b2 = ((fx2-fx1)/(x2-x1)-(fx1-fx0/x1-x0))/(x2-x0);

cout<<"b2:"<<b2<<endl<<endl;

//(d,k) icin




float sonuc , sonuc1;



while(0==0){

    sonuc = b0 + b1*(x-x0) + b2*(x-x0)*(x-x1);

    cout<<"f("<<x<<") = "<<sonuc;
    break;
}

}

