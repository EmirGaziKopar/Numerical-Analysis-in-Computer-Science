/*These codes are written in Turkish*/
#include <iostream>
#include <math.h>
#include <stdio.h>
float saysay;
double analiz;
double gecici;
 int control=0;
 int control1=0;
 int control2=0;

 float kok_control=0;
 float kok_control1=0;
 float kok_control2=0;
using namespace std;
main(){
float a=0;//aralik ALT
float b=2;//aralik UST
    int yeni_Sayac = 0;
    float xn=b;
    float xn1;
    float durma2;
	float katsayi_derece[4][2];
	int i;
	float turev,turevsiz;

	/*float e = exp(0.5); //exp deðerini burada aldýk*/
    int tmp;
    float x;
    float e = exp(1); //e^1 degerini aldik
    int sayac = 1;
    katsayi_derece[0][1]=-0.5;// DERECELER
    katsayi_derece[1][1]=1;
    katsayi_derece[2][1]=0; //x'in 0


    katsayi_derece[0][0]=1;// KATSAYILAR
    katsayi_derece[1][0]=-1;
    katsayi_derece[2][0]=-0.2;

cout<<"[a:"<<a<<" b:"<<b<<"] araligi"<<endl;
    cout<<endl;
    cout<<"a:"<<a;
    cout<<endl;
    cout<<"b:"<<b;
    b=2;//aralik
	cout<<endl;
	x=a;
	float deger=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);
    cout<<endl;
    x=b;
    float deger1=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);
    if(deger*deger1<0){
        cout<<"Ara deger teoremi uygulandi kok oldugu ispatlandi\n\nArama baslatiliyor...\n";


cout<<endl<<endl<<endl;

        cout<<"|--*adim*--|";
        cout<<"  |-----Newton_Raphson_kokler-----|"<<" |----|hata(xn+1-xn)|----|"<<endl;
        yeni_Sayac = 0;

        while (0==0){

            sayac++;
            cout<<" "<<sayac<<".adim             ";
            x=xn;
            turevsiz = katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);

            turev = katsayi_derece[0][1]*katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0];

            xn1 = xn - (turevsiz/turev);

            cout<<"            "<<xn1;


            durma2=xn1-xn;
            if(durma2<0){
                durma2=durma2*-1;
            }






            cout<<"             "<<durma2<<endl;

            if(durma2<= 0.02){
                if(yeni_Sayac==0){
                    yeni_Sayac++;

                    x=xn1;
                    float y_deger=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);
                    cout<<" "<<sayac<<".adimda  "<<"hedeflenen degere ulasildi f(x)="<<y_deger<<endl;
                    control1=sayac;
                    kok_control1 = y_deger;

                }

            }

            xn=xn1;
            if(sayac == 10){
                    sayac = 1;
                    yeni_Sayac=0;
                break;
            }

        }
    }
}
