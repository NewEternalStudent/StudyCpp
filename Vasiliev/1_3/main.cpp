#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    const int ftInMile=5280;
    const double kmInMile = 1.609344;
    double dMile,dFt,dKm,dM;
    cout<<"Distance in miles and ft."<<endl;
    cout<<"Miles:";
    cin>>dMile;
    cout<<"Ft:";
    cin>>dFt;
    double distMile=dMile + double(dFt/ftInMile);
    double distKm = distMile*kmInMile;
    dKm=int(distKm);
    dM=int(((distKm-dKm)*1000));
    cout<<"Distance in km and metrs."<<endl;
    cout<<"Km:"<<dKm<<endl;
    cout<<"Metrs:"<<dM<<endl;
    system("pause>nul");
    return 0;
}
