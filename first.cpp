#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int n;
  cout<<"enter your number: "<<endl;
  cin>>n;
  int i=1;
  while(i<=n){
    int j = 1;
    while (j<=n){
      cout<<"*";
      j=j+1;
    }
    cout<<endl;

    i=i+1;

  }

     return 0;
}