#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    string islem;
    cout<<"\t\tHESAP MAKINESINE HOS GELDINIZ\n";
    cout<<"yapilabilir islemler:\n1-)toplama\n2-)cikarma\n3-)carpma\n4-)bolme\n\n";
    cout<<"islemi giriniz : ";
    cin>>islem;

    if(islem=="1")
    {
        cout<<"a : "; cin>>a;
        cout<<"b : "; cin>>b;
        cout<<"toplamlari : "<<a+b<<endl;
    }
    else if(islem=="2")
    {
        cout<<"a : "; cin>>a;
        cout<<"b : "; cin>>b;
        cout<<"farklari : "<<a-b<<endl;
    }
    else if(islem=="3")
    {
        cout<<"a : "; cin>>a;
        cout<<"b : "; cin>>b;
        cout<<"carpimlari : "<<a*b<<endl;
    }
    else if(islem=="4")
    {
        cout<<"a : "; cin>>a;
        cout<<"b : "; cin>>b;
        cout<<"bolumleri : "<<a/b<<endl;
    }
    else
    {
        cout<<"\n";
        cout<<"hatali islem yaptiniz !!\n";
    }

   return 0;
}
