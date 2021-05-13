#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int negatif;
    int pozitif;
int limit(int deger);

float fonk(int a, int b, int c , int d,float x);

main(){
    int a,b,c,d;
    float x;


    int katsayi_derece[4][2];
    katsayi_derece[0][1]=3;
    katsayi_derece[1][1]=2;
    katsayi_derece[2][1]=1;
    katsayi_derece[3][1]=0;
    cout<<"a degerini giriniz: ";
    cin>>a;
    cout<<"b degerini giriniz: ";
    cin>>b;
    cout<<"c degerini giriniz: ";
    cin>>c;
    cout<<"d degerini giriniz: ";
    cin>>d;
    cout<<"x degeri giriniz:";
    cin>>x;
    katsayi_derece[0][0]=a;
    katsayi_derece[1][0]=b;
    katsayi_derece[2][0]=c;
    katsayi_derece[3][0]=d;
    fonk(a,b,c,d,x);

int i;

    for(i=0;i<4;i++){
		cout<<katsayi_derece[i][0]<<"x^"<<katsayi_derece[i][1];
		if(i==3) continue;
		cout<<"+";

	}

}
float fonk(int a, int b, int c , int d , float x){
    float dizi_sol[3];
    float dizi_sag[3];
	float sonuc=0;

	sonuc = a* pow(x,3) + b * pow(x,2) + c * x + d;
	float sol1 = x-0.00000003;
    float sol2 = x-0.00000002;
    float sol3 = x-0.00000001;// buraya soldan yalaþýyor
    float sag1 = x+0.00000003;
    float sag2 = x+0.00000002;
    float sag3 = x+0.00000001;// buraya sagdan yalaþýyor

    dizi_sag[0] = a* pow(sag1,3) + b * pow(sag1,2) + c * sag1 + d;
    dizi_sag[1] = a* pow(sag2,3) + b * pow(sag2,2) + c * sag2 + d;
    dizi_sag[2] = a* pow(sag3,3) + b * pow(sag3,2) + c * sag3 + d;

    dizi_sol[0] = a* pow(sol1,3) + b * pow(sol1,2) + c * sol1 + d;
    dizi_sol[1] = a* pow(sol2,3) + b * pow(sol2,2) + c * sol2 + d;
    dizi_sol[2] = a* pow(sol3,3) + b * pow(sol3,2) + c * sol3 + d;

    if(dizi_sol[0]<dizi_sol[1] and dizi_sol[1]<dizi_sol[2]){
        negatif=1;

    }
    else
        negatif=-1;
    if(dizi_sag[0]>dizi_sag[1] and dizi_sag[1] > dizi_sag[2] ){
        pozitif=1;
    }
    else
        pozitif=-1;

    if(pozitif==negatif){
        cout<<"limit vardir";
    }
    else
        cout<<"limit yoktur";



	/*
	if(sonuc == 0){
	}*/

    cout<<" sonuc " << x << " degeri icin " << sonuc << " dir." <<endl;
    return sonuc;



}


















