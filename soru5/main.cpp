#include <iostream>
#include <string>

using namespace std;
int i,boyut;
int kontrol;

int simetrik(array<int, 3> &dizi){
      for(i=1;i<=boyut;i++)
    {
        cout<<i<<".değer:";
        cin>>dizi[i];
    }
    kontrol=1;

    for(i=0;i<=boyut/2 ;i++)
        {
            if(dizi[i]==dizi[boyut-i-1])
            kontrol=0;
        }
        if(kontrol==1){
        cout<<"Dizi Simetriktir";}
        else {
        cout<<"Dizi Simetrik Değildir";}

}
int simetrik(vector<int> &vektör){
        for(i=1;i<=boyut;i++)
      {
          cout<<i<<".değer:";
          cin>>dizi[i];
      }
      kontrol=1;

      for(i=0;i<=boyut/2 ;i++)
          {
              if(dizi[i]==dizi[boyut-i-1])
              kontrol=0;
          }
          if(kontrol==1){
          cout<<"Dizi Simetriktir";}
          else {
          cout<<"Dizi Simetrik Değildir";}

}
int simetrik(int *a,int index){
        for(i=1;i<=boyut;i++)
      {
          cout<<i<<".değer:";
          cin>>dizi[i];
      }
      kontrol=1;

      for(i=0;i<=boyut/2 ;i++)
          {
              if(dizi[i]==dizi[boyut-i-1])
              kontrol=0;
          }
          if(kontrol==1){
          cout<<"Dizi Simetriktir";}
          else {
          cout<<"Dizi Simetrik Değildir";}

}

int main() {

  array<int , 3> dizi = {0,0,0};
  vector<int> vektör={0,1,0,1,0}; 
  int in_arr[] = { 1,1,1,1,00,00,1 };

  cout<<"Dizinin Boyutunu Giriniz :";
  cin>>boyut;

  cout<<simetrik(arr)<<"\n";
  cout<<simetrik(v)<<"\n";
  cout<<simetrik(in_arr,n)<<"\n";
}