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

	/*float e = exp(0.5); //exp değerini burada aldık*/
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
        cout<<"|--*adim*--|";
        cout<<"  |-----ikiye_bolme_kok-----|"<<"   |----(bn-an)/2^n----|"<<endl;
        while(0==0){
            float analiz=a+b;
            analiz*=0.5;//analiz orta nokta oldu yani potansiyel kök
            float sag=0.001;
            float sol=-0.001;
            x=a;
            float deger=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]); //DENKLEM DEĞİŞECEK
             //float deger = f(a)
            x=b;
            float deger1=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);
             //float deger1 = f(b)
            x=analiz;
            float k=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);
            //float k = f(analiz)
            float mutlak=deger1-deger;
            if(deger*k<0){ //f(analiz)*f(a) degeri yazilmali
                cout<<"  ";
                cout<<sayac<<".adim";
                cout<<"                   "<<analiz; //kok
                //cout<<sayac<<".adim deger: "<<analiz<<endl;
                /*a=(a+analiz)/2;*/
                float dur=(b-a)/pow(2,sayac);
                cout<<"                   "<<dur<<endl;
                b=analiz;
                sayac++;
                if(sayac>=11){
                    /*cout<<"10 adim gerceklesti son veriler x="<<analiz<< " icin -> f(x)="<<k<<"dir"<<endl;*/
                    sayac = 0;
                    a=0;
                    b=2;
                    break;
                }


                 if(dur < 0.02){

                    if(yeni_Sayac == 0){
                        cout<<"  "<<sayac-1<<".adimda  "<<"hedeflenen degere ulasildi f(x)="<<k<<endl;
                        yeni_Sayac++;
                        control = sayac-1;
                        kok_control = k;
                    }
                }

                /*if(0.001>dur){
                        cout<<endl;
                        cout<<"(bn-an)/2^n<hata sarti saglandi ";
                    cout<<sayac-1<<".adim x="<<analiz<< " icin -> f(x)="<<k<<"'dir"<<endl;
                break;
                } */
                continue;

            }
            else if(deger1*k<0){ ////f(analiz)*f(b)
                //fabs(mutlak)<=0.001
               //orta nokta degismeli
               cout<<"  ";
               cout<<sayac<<".adim";

                cout<<"                   "<<analiz;

                float dur=(b-a)/pow(2,sayac); //-(bn-an)/2^n-
                cout<<"                  "<<dur<<endl;
                a=analiz;
                sayac++;
                //cout<<sayac<<".adim"<<analiz<<endl;
                if(sayac>=11){
                   /*cout<<"10 adim gerceklesti son veriler x="<<analiz<< " icin -> f(x)="<<k<<"'dir"<<endl;*/
                   sayac=0;
                   a=0;
                   b=2;

                    break;
                }
                if(dur < 0.02){
                    if(yeni_Sayac == 0){
                        cout<<" "<<sayac-1<<".adimda  "<<"hedeflenen degere ulasildi f(x)="<<k<<endl;
                        yeni_Sayac++;
                        control = sayac-1;
                        kok_control = k;
                    }

                }

                continue;
            }
            if(k==0){
                cout<<"f(orta_nokta)="<<k<< " oldu yani kok degeri x: "<<analiz<<"  hata payi: 0"<<endl;
                break;
            }
            else {
                    cout<<endl;
            cout<<endl;
            cout<<endl;
                 cout<<"BU NOKTADA BEKLEMEDIGIMIZ BIR SORUNLA KARSILASTIK LUTFEN PROGRAMI TEKRAR CALISTIRIN :)\n\n\n";
                   // cout<<sayac<<".adim "<<analiz<<endl;
                    break;
            }


        }

    }
}
