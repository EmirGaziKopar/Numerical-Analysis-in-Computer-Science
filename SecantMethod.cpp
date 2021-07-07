/*These codes are written in Turkish*/
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
float toplam,toplam1;
float gecici;
float katsayi_derece[4][2],dizi2[2][2];

float katsayi_derece_gx[3][2];

float a=0,b=2; //aralık
main(){

    int i;

    int tmp;
    float x=-0.5;
    int sayac = 1;
    katsayi_derece[0][1]=-0.5;// DERECELER
    katsayi_derece[1][1]=1;
    katsayi_derece[2][1]=0; //x'in 0


    katsayi_derece[0][0]=1;// KATSAYILAR
    katsayi_derece[1][0]=-1;
    katsayi_derece[2][0]=-0.2;


    katsayi_derece_gx[0][1]=3;// DERECELER
    katsayi_derece_gx[1][1]=2;
    katsayi_derece_gx[2][1]=0;

float e= exp(1);

while(0==0){

	cout<<endl;

	x=a;
	float deger=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(5,katsayi_derece[3][1]);

    cout<<endl;

    x=b;
    float deger1=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(5,katsayi_derece[3][1]);

    if(deger*deger1<0){
        cout<<"Ara deger teoremi uygulandi kok oldugu ispatlandi\n\nArama baslatiliyor...\n";
        cout<<"|--*adim*--|";
        cout<<"|----kok----|"; cout<<"  |---hata_n---|"<<endl;
        x=a;
        float e1 = exp(x*-0.5)-0.2;

        x=b;
        float e2 = exp(x*-0.5)-0.2;

        if(e1<0){
            e1=e1*-1;
        }
        if(e2<0){
            e2=e2*-1;
        }
        if(e1 <1 && e2 <1){ //buradan nasıl geçsin ?
        float xn_eksi=b;
        float xn=1.8;
        float xn1;
	cout<<endl;

        while(0==0){
            float fxn = exp(-0.5*xn)-(xn+0.2);
            float fxn_eksi =  exp(-0.5*xn_eksi)-(xn_eksi+0.2);
            float yan = xn_eksi-xn;
            float xn1 = xn-((fxn*yan)/(fxn_eksi-fxn));
            xn_eksi=xn;
            float yeni =xn1-xn;
            xn=xn1;
            if(yeni<0){
                yeni=yeni*-1;
            }
            cout<<""<<sayac<<".adim  "<<"    kok:"<<xn<<"    ";
            cout<<"hata:"<<yeni<<endl;
            sayac++;
            if(sayac>15){
                break;
            }
            if(yeni<0.000003){
                break;
            }
        }
        }
    }
    else {
        cout<<"yanlis deger girdiniz";
        break;
    }
    break;
    }
}

