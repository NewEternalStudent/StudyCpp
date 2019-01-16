#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    const double kmInMile = 1.609344;
    double distMile, distKm;
    cout<<"Enter the number of miles:";
    cin>>distMile;
    distKm=distMile*kmInMile;
    cout<<"Distance (km):"<<distKm<<endl;
    system("pause>nul");
    return 0;
}
