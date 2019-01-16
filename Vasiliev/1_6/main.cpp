#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double n,s=0;
    cout<<"Enter n:"<<endl;
    cin>>n;

    while(n>=0) {
      s+=n*n;
      if (s<0) {
       cout<<"n:"<<n<<" s:"<<s<<endl;
      }
      n--;
    }

    cout<<"Total:"<<s<<endl;
    system("pause>nul");
    return 0;
}
