#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
main(){


	int katsayi_derece[4][2],i;
	float a,b;
    int tmp;
    float x;
    int sayac = 1;
    katsayi_derece[0][1]=3;// DERECELER
    katsayi_derece[1][1]=2;
    katsayi_derece[2][1]=1;
    katsayi_derece[3][1]=0;

    katsayi_derece[0][0]=2;// KATSAYILAR
    katsayi_derece[1][0]=-3;
    katsayi_derece[2][0]=-4;
    katsayi_derece[3][0]=5;
while(0==0){
    cout<<"a<b olacak sekilde"<<endl;
    cout<<"[a,b] araligi giriniz"<<endl;
    cout<<endl;
    while(!cin.good()){

    }
    cout<<"a:";
    cin>>a;
    cout<<endl;
    cout<<"b:";
    cin>>b;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    while(!cin.good()){
    cin.clear();
    cin.ignore(INT_MAX,'\n');
    cout<<"LUTFEN SAYI GIRIN !!!"<<endl<<endl;
    cout<<"a<b olacak sekilde"<<endl;
    cout<<"[a,b] araligi giriniz"<<endl;
    cout<<endl;
    cout<<"a:";
    cin>>a;
    cout<<endl;
    cout<<"b:";
    cin>>b;
    cout<<endl;
    }
    if(a>b){
        cout<<"(a<b olmali !!! )\nLutfen a degeri b degerinden kucuk olacak sekilde aralik secin"<<endl;
    cout<<"a:";
    cin>>a;
    cout<<endl;
    cout<<"b:";
    cin>>b;
    cout<<endl;
    }
    /*int tmp;*/

    while(!cin.good()){
    cin.clear();
    cin.ignore(INT_MAX,'\n');
    cout<<"LUTFEN SAYI GIRIN !!!"<<endl<<endl;
    cout<<"a<b olacak sekilde"<<endl;
    cout<<"[a,b] araligi giriniz"<<endl;
    cout<<endl;
    cout<<"a:";
    cin>>a;
    cout<<endl;
    cout<<"b:";
    cin>>b;
    cout<<endl;
    }

    if(a>b){
        cout<<"istenildigi sekilde girmediginiz icin a ve b yer degistiriyor"<<endl;
        tmp=a;
        a=b;
        b=tmp;
    }

    cout<<"Denklemimiz:";
    for(i=0;i<4;i++){
		cout<<katsayi_derece[i][0]<<"x^"<<katsayi_derece[i][1];
		if(i==3) continue;
		cout<<"+";

	}
	cout<<endl;

	/*cout<<"Ara deger teoremi uygulandý kok var";*/

	x=a;
	float deger=katsayi_derece[0][0]*pow(x,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(x,katsayi_derece[3][1]);


    cout<<endl;

    x=b;
    float deger1=katsayi_derece[0][0]*pow(x,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(x,katsayi_derece[3][1]);

    if(deger*deger1<0){
        cout<<"Ara deger teoremi uygulandi kok oldugu ispatlandi\n\nArama baslatiliyor...\n";
        cout<<"|--*adim*--|";
        cout<<" |------a------|"; cout<<"|---------b-------|"<<"    |-----orta-----|"<<"   |----(bn-an)/2^n----|"<<endl;

        while(0==0){
            float analiz=a+b;

            analiz*=0.5;
            float sag=0.001;
            float sol=-0.001;
            x=a;
            float deger=katsayi_derece[0][0]*pow(x,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(x,katsayi_derece[3][1]);
             //float deger = f(a)
            x=b;
            float deger1=katsayi_derece[0][0]*pow(x,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(x,katsayi_derece[3][1]);
             //float deger1 = f(b)
            x=analiz;
            float k=katsayi_derece[0][0]*pow(x,katsayi_derece[0][1])+katsayi_derece[1][0]*pow(x,katsayi_derece[1][1])+katsayi_derece[2][0]*pow(x,katsayi_derece[2][1])+katsayi_derece[3][0]*pow(x,katsayi_derece[3][1]);;
            //float k = f(analiz)
            float mutlak=deger1-deger;



            if(deger*k<0){ //f(analiz)*f(a) degeri yazilmali

                cout<<"  ";
                cout<<sayac<<".adim";
                cout<<"             "<<a;


                cout<<"             "<<b;
                cout<<"                     "<<analiz;

                //cout<<sayac<<".adim deger: "<<analiz<<endl;
                /*a=(a+analiz)/2;*/
                float dur=(b-a)/pow(2,sayac);
                cout<<"         "<<dur<<endl;
                b=analiz;
                sayac++;

                if(sayac>=11){
                    cout<<"10 adim gerceklesti son veriler x="<<analiz<< " icin -> f(x)="<<k<<"dir"<<endl;
                    break;
                }




                if(0.001>dur){
                        cout<<endl;
                        cout<<"(bn-an)/2^n<hata sarti saglandi ";
                    cout<<sayac-1<<".adim x="<<analiz<< " icin -> f(x)="<<k<<"'dir"<<endl;
                break;
                }
                continue;

            }
            else if(deger1*k<0){ ////f(analiz)*f(b)
                //fabs(mutlak)<=0.001
               //orta nokta degismeli
               cout<<"  ";
               cout<<sayac<<".adim";
                cout<<"             "<<a;


                cout<<"             "<<b;

                cout<<"                     "<<analiz;


                float dur=(b-a)/pow(2,sayac);
                cout<<"        "<<dur<<endl;
                a=analiz;
                sayac++;
                //cout<<sayac<<".adim"<<analiz<<endl;
                if(sayac>=11){
                    cout<<"10 adim gerceklesti son veriler x="<<analiz<< " icin -> f(x)="<<k<<"'dir"<<endl;
                    break;
                }
                if(0.001>dur){
                        cout<<endl;
                        cout<<"'(bn-an)/2^n < hata'  sarti saglandi ";
                    cout<<sayac-1<<".adim x="<<analiz<< " icin -> f(x)="<<k<<" dir"<<endl;
                break;
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

    else if(deger*deger1>0 ){
        cout<<"Ara deger teoremi sarti saglanmadi yeni degerler ile tekrar deneyin"<<endl<<endl;
        continue;
    }
    else if(deger*deger1>0 ){
        cout<<"Ara deger teoremi sarti saglanmadi yeni degerler ile tekrar deneyin"<<endl<<endl;
        continue;
    }
    else if(deger==0){
        cout<<"Kok a uzerinde: "<<a<<endl;
        break;
    }
    else if(deger1==0){
        cout<<"Kok b uzerinde: "<<b<<endl;
        break;
    }
    else {
        cout<<"yanlis deger girdiniz";
        break;
    }
    break;
    }
}
