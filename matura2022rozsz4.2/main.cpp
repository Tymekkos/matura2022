#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int rozklad(int n)
{
    int ilosc=0;

    int k=2;

    while(n>1)
    {
        while(n%k==0)
        {
            ilosc++;
            n/=k;
        }
        ++k;
    }
    return ilosc;
}
int rozkladrozne(int n)
{
    int ilosc=0;
    int temp=0;

    int k=2;


    while(n>1)
    {
        while(n%k==0)
        {
            if(k!=temp){
                ilosc++;
            }
            temp=k;
            n/=k;
        }
        ++k;
    }
    return ilosc;
}
int main(){
    ifstream in("przyklad.txt");
    int a;
    int liczbaa, liczbab;
    int maxa=0;
    int maxb=0;
    while(in>>a){
        if(rozklad(a)>maxa){
            maxa=rozklad(a);
            liczbaa = a;
        }
        if(rozkladrozne(a)>maxb){
            maxb=rozklad(a);
            liczbab = a;
        }
    }
    cout << liczbaa <<" "<< maxa <<" "<< liczbab <<" "<< maxb;
    return 0;
}
