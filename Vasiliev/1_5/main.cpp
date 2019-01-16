#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n=10;
    int s=0;
    int k=1;

    while (k<=n) {
        s=s+k*k;
        cout<<"k:"<<k<<" s:"<<s<<endl;
        k++;
    }

    cout<<"Sum squares from 1 to "<<n<<":"<<s<<endl;
    system("pause>nul");
    return 0;
}
