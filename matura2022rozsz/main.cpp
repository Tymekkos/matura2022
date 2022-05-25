#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("przyklad.txt");
    string a;
    string liczba;
    int suma;
    int b=0;
    while(in>>a){
        if(a[0] == a[a.size()-1]){
            if(b==0){
                liczba = a;
                b++;
            }
            suma++;
        }
    }
    cout << suma << " " << liczba;
    return 0;
}
