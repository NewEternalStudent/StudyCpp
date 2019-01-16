#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    cout<<"Enter number"<<endl;
    int n;
    cin>>n;
    if (n > 2) {
        int fN[n];
        fN[0] = 0;
        cout<<"0"<<" - "<< fN[0] << endl;
        fN[1] = 1;
        cout<<"1"<<" - "<< fN[1] << endl;

        for(int i=2; i<=n; i++) {
           fN[i] = fN[i-1] + fN[i-2];
           cout<<i<<" - "<< fN[i] << endl;
        }
    } else {
        cout<<"You must enter an integer greater than 2!";
    }
   system("pause>nul");
    return 0;
}
