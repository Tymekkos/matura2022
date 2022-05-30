#include<iostream>
#include<fstream>
#include<cmath>
#include <algorithm>
using namespace std;

int t[200];

bool dobra3(int a, int b, int c)
{
    return(a!=b && b!=c && b%a==0 && c%b==0);
}
bool dobra5(int a,int b,int c,int d,int e)
{
  int p[5];
  p[0] = a;
  p[1] = b;
  p[2] = c;
  p[3] = d;
  p[4] = e;
  for (int i = 1; i < 5;i++)
  {
    if (p[i]==p[i-1])
      return false;
    if (p[i]%p[i-1]>0)
      return false;
  }
  return true;
}


int main()
{
    ifstream in("przyklad.txt");
    for(int i=0;i<200;i++)
    {
      in >> t[i];
    }
    in.close();
    int trojki = 0, piatki = 0;
    int sumatrojek = 0;
    int sumapiatek = 0;
    sort(t, t + 200);
    for (int i = 0; i < 200;i++)
        for (int j = i + 1; j < 200;j++)
            for (int k = j + 1; k < 200;k++)
            {
                int r = dobra3(t[i], t[j], t[k]);
                trojki += r;
                if (r==1){
                    sumatrojek++;
                    cout << t[i] << " " << t[j] << " " << t[k] << endl;
                }
            }
    cout << "ilosc dobrych trojek: " << sumatrojek << endl;
    for (int i = 0; i < 200;i++)
        for (int j = i + 1; j < 200;j++)
            for (int k = j + 1; k < 200;k++)
                for (int l = k + 1; l < 200;l++)
                    for (int m = l + 1; m < 200;m++)
                    {
                        int r = dobra5(t[i], t[j], t[k], t[l], t[m]);
                        piatki += r;
                        if (r == 1){
                            sumapiatek++;
                            cout << t[i] << " " << t[j] << " " << t[k] << " " << t[l] << " " << t[m] <<endl;
                        }
                    }cout << "ilosc dobrych piatek: " << sumapiatek << endl;

}
