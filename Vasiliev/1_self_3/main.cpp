#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    if (n > 0) {
        for(int i=1; i<=n; i++) {
            int remDiv = i%4;
            if (remDiv == 3) {
                cout<<double(i)/4<<" - "<<i<<endl;
            }
        }
    }
    system("pause>nul");
    return 0;
}
