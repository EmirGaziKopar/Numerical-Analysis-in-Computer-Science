#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int negatif;
    int pozitif;
int limit(int deger);

float fonk(int a, int b, int c, float x);
float fonk2(int a,int b,float x);
main(){
	int katsayi_derece[3][2],dizi2[2][2],i,a,b,c,sonucTurev1=0,sonucTurev2=0;
    float x;
    float e;
    float f;
    katsayi_derece[0][1]=2;
    katsayi_derece[1][1]=1;
    katsayi_derece[2][1]=0;
    cout<<"a degerini giriniz: ";
    cin>>a;
    cout<<"b degerini giriniz: ";
    cin>>b;
    cout<<"c degerini giriniz: ";
    cin>>c;
    cout<<"[e,f] araligi giriniz"<<endl;
    cout<<endl;
    cout<<"e:";
    cin>>e;
    cout<<endl;
    cout<<"f:";
    cin>>f;
    cout<<endl;
    if(e>f){
        cout<<"(f>e olmali !!! )\nLutfen e degeri f degerinden kucuk olacak sekilde aralik secin"<<endl;
        cout<<"e:";
        cin>>e;
    cout<<endl;
    cout<<"f:";
    cin>>f;
    cout<<endl;
    }
    if(e>f){
        cout<<"(f>e olmali !!! )\nLutfen e degeri f degerinden kucuk olacak sekilde aralik secin"<<endl;
        cout<<"e:";
        cin>>e;
    cout<<endl;
    cout<<"f:";
    cin>>f;
    cout<<endl;
    }
    if(e>f){
        cout<<"(f>e olmali !!! )\nLutfen e degeri f degerinden kucuk olacak sekilde aralik secin"<<endl;
        cout<<"e:";
        cin>>e;
    cout<<endl;
    cout<<"f:";
    cin>>f;
    cout<<endl;
    }

    /*cout<<"x degeri giriniz:";
    cin>>x;*/
    katsayi_derece[0][0]=a;
    katsayi_derece[1][0]=b;
    katsayi_derece[2][0]=c;




	cout<<"Turev alinmadan onceki hali: "<<endl;
	for(i=0;i<3;i++){
		cout<<katsayi_derece[i][0]<<"x^"<<katsayi_derece[i][1];
		if(i==2) continue;
		cout<<"+";

	}
	cout<<endl;
	cout<<endl;


	for(i=0;i<2;i++){
        dizi2[i][1]=katsayi_derece[i][1]-1;//derece bir azaltýlýr
        dizi2[i][0]=katsayi_derece[i][0]*katsayi_derece[i][1];;//katsayý bir azaltýlýr

	}
	cout<<"Turev alindiktan sonraki hali: "<<endl;
	for(i=0;i<2;i++){
		cout<<dizi2[i][0]<<"x^"<<dizi2[i][1];
		if(i==1) continue;
		cout<<"+";

	}
	cout<<endl;
	cout<<endl;
	fonk(a,b,c,e);
	// sırada f(e)-f(f)/e-f = f(x') kontrolü yapmamk var


	fonk(a,b,c,f);

	float pay=fonk(a,b,c,f)-fonk(a,b,c,e);
	float payda=f-e;
	cout<<"pay:  "<<pay<<endl;
	cout<<"payda:  "<<payda<<endl;
	float oran=pay/payda;

	a=dizi2[0][0];
	b=dizi2[1][0];



	cout<<"ortalama oran: "<<oran<<endl<<endl;
	float s=0;
	float sayac;
	sayac=e-1;
    float x1=0;
    x1=e;

    // bunlar bize ortalma değeri verdi şimdi verilen aralıkda döngüyle gezerek bu değerin olduğu yeri bulucaz


    while(f>x1){


        x1+=0.01;





        if(fonk2(a,b,x1)+0.1 > oran  &&  oran > fonk2(a,b,x1)-0.1 ){ // buraya bütün elemanlar dolana kadar girilemez


                cout<<"x degeri= "<<x1<<" noktasindayken teget  dogrusunun tanjant degeri ortalama degere yaklasik olarak paralel"<<endl;
                cout<<"f(x')= "<<fonk2(a,b,x1)<<endl;
                break;



        }





}


}

float fonk(int a, int b ,int c, float x){
    float dizi_sol[3];
    float dizi_sag[3];
	float sonuc=0;

	sonuc = a*pow(x,2) + b * x + c; // buraya dışarıdan dizi elemanlarını aktar dizi[0][0]*pow(x,1)+b; felan gibi veya dışarıda yap
	float sol1 = x-0.00000003;
    float sol2 = x-0.00000002;
    float sol3 = x-0.00000001;// buraya soldan yalaþýyor
    float sag1 = x+0.00000003;
    float sag2 = x+0.00000002;
    float sag3 = x+0.00000001;// buraya sagdan yalaþýyor

    dizi_sag[0] = a* pow(sag1,1) + b  ;
    dizi_sag[1] = a* pow(sag2,1) + b ;
    dizi_sag[2] = a* pow(sag3,1) + b  ;

    dizi_sol[0] = a* pow(sol1,1) + b ;
    dizi_sol[1] = a* pow(sol2,1) + b ;
    dizi_sol[2] = a* pow(sol3,1) + b ;

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


    }
    else
        cout<<"bu verilen noktada türev deðeri hesaplanamaz";



   /*cout<<" sonuc " << x << " degeri icin " << sonuc << " dir." <<endl;*/

    return sonuc;



}

float fonk2(int a, int b , float x){
    float dizi_sol[3];
    float dizi_sag[3];
	float sonuc=0;

	sonuc = a*pow(x,1) + b ; // buraya dışarıdan dizi elemanlarını aktar dizi[0][0]*pow(x,1)+b; felan gibi veya dışarıda yap
	float sol1 = x-0.00000003;
    float sol2 = x-0.00000002;
    float sol3 = x-0.00000001;// buraya soldan yalaþýyor
    float sag1 = x+0.00000003;
    float sag2 = x+0.00000002;
    float sag3 = x+0.00000001;// buraya sagdan yalaþýyor

    dizi_sag[0] = a* pow(sag1,1) + b  ;
    dizi_sag[1] = a* pow(sag2,1) + b ;
    dizi_sag[2] = a* pow(sag3,1) + b  ;

    dizi_sol[0] = a* pow(sol1,1) + b ;
    dizi_sol[1] = a* pow(sol2,1) + b ;
    dizi_sol[2] = a* pow(sol3,1) + b ;

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


    }
    else
        cout<<"bu verilen noktada türev deðeri hesaplanamaz";



   /*cout<<" sonuc " << x << " degeri icin " << sonuc << " dir." <<endl;*/

    return sonuc;



}
