#include<stdio.h>
#include<math.h>
#include<iostream>
#include<conio.h>
using namespace std;
float g(float);
float f(float);
float g_turev(float);

float gecici;
float fx; //denklem icin

main()
{

    float a,b,hata=100.0;
    a=0;
    b=1; // a degeri

    int x=(b+a)/2;
     // b degeri

     if(f(a)*f(b)){
            cout<<"Ara deger teoremi uygulandi"<<endl;


    printf("\n\n  |*ADIM*|----------|*Kok*|----------|*HATA*|  \n\n ");
    while(hata>0.00001)
    {

        gecici=a;
        a=g(a);
        hata=a-gecici;

        if(hata<0){

            hata = hata*-1;

        }

        else {
            //mutlak deger almaya gerek yok
        }
        cout<<x+1<<".adim   "<<"          "<<a<<"        "<<hata<<endl;
        x++;

    }
    cout<<"kok: "<<a<<endl;
    }

    else{
        cout<<"ara deger teoremi sarti saglanmadi"<<endl;
    }
}
float f(float x)
{

    return pow(exp(1),-0.5*x)-0.2;


}

float g(float x){

    return pow(exp(1),-0.5*x)-0.2;

}

float g_turev(float x)
{

    return 1;

}
