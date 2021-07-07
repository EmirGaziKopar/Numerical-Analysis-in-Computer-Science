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
        cout<<"  |-----interpolasyon_kokler-----|"<<" |----|hata(xn+1-xn)|----|"<<endl;
        while(0==0){

            gecici=analiz;




            float sag=0.001;
            float sol=-0.001;
            x=a;
            float fa_deg=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]); //DENKLEM DEÐÝÞECEK
             //float fa_deg = f(a)
            x=b;
            float fb_deg=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);
             //float fb_deg = f(b)

            analiz = (a*fb_deg)-(b*fa_deg)/(fb_deg-fa_deg); //Bu kök adayýmýz

            //float k = f(analiz)
            float mutlak=fb_deg-fa_deg;



            x=analiz;
            double k=katsayi_derece[0][0]*pow(e,katsayi_derece[0][1]*x)+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1]);

            double yeni = analiz-gecici; //xn+1 - Xn


            if(fa_deg*k<0){ //f(analiz)*f(a) degeri yazilmali

                cout<<"  ";
                cout<<sayac<<".adim";

                cout<<"                   "<<analiz; //kok



                double dur=x-a; //ilk basta 0
                double dur1 = b-x;//ilk basta 2 Bunlardan hangisi max olan onu tespit etmeliyiz

                if(dur<=0){
                    dur=dur*-1;
                }
                if(dur1<=0){
                    dur1=dur1*-1;
                }
                if(dur1>dur){
                    /*buyuk olan degeri dur'a atacaðýz*/
                    dur=dur1;
                }
                if(yeni<0){
                    yeni=yeni*-1;
                }
                else{
                    /*Burasi icin bisey yapmaya gerek yok */
                }
                cout<<"                   "<<yeni<<endl;

                if(dur == tmp){
                    printf("buraya girildi");
                }
                b=analiz;
                sayac++;
                saysay++;



                if(sayac>=11){
                    /*cout<<"10 adim gerceklesti son veriler x="<<analiz<< " icin -> f(x)="<<k<<"dir"<<endl;*/
                    sayac = 0;
                    break;
                }


                 if(yeni < 0.02){

                    if(yeni_Sayac == 0){
                        cout<<"  "<<sayac-1<<".adimda  "<<"hedeflenen degere ulasildi f(x)="<<k<<endl;
                        yeni_Sayac++;
                        control2 = sayac-1;
                        kok_control2 = k;

                    }
                }

                continue;

            }
            else if(fb_deg*k<0){ ////f(analiz)*f(b)
                //fabs(mutlak)<=0.001
               //orta nokta degismeli
               cout<<"  ";
               cout<<sayac<<".adim";

                cout<<"                   "<<analiz;


                double dur=x-a;
                double dur1 = b-x;//Bunlardan hangisi max olan onu tespit etmeliyiz

                if(dur<0){
                    dur=dur*-1;
                }
                if(dur1<0){
                    dur1=dur1*-1;
                }
                if(dur1>=dur){
                    /*buyuk olan degeri dur'a atacaðýz*/
                    dur=dur1;

                }
                else{
                    /*Burasi icin bisey yapmaya gerek yok */
                } //-(bn-an)/2^n-
                cout<<"                  "<<dur<<endl;

                a=analiz;
                sayac++;

                //cout<<sayac<<".adim"<<analiz<<endl;
                if(sayac>=11){
                   /*cout<<"10 adim gerceklesti son veriler x="<<analiz<< " icin -> f(x)="<<k<<"'dir"<<endl;*/
                   sayac=0;
                    break;
                }
                if(yeni < 0.02){
                    if(yeni_Sayac == 0){
                        cout<<"  "<<sayac-1<<".adimda  "<<"hedeflenen degere ulasildi f(x)="<<k<<endl;
                        yeni_Sayac++;
                        control2 = sayac-1;
                        kok_control2 = k; //kok degerine bakmak icin
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
