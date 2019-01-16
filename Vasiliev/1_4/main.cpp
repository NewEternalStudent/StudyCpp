#include <iostream>
#include <cstdlib>

using namespace std;

double getDistMile () {
    double dist;
    cout<<"Enter miles:";
    cin>>dist;
    return dist;
}

double getDistKm (double dist) {
    double kmInMile=1.609344;
    return dist*kmInMile;
}

int main() {
    double distMile=getDistMile();
    cout<<"In km:"<<getDistKm(distMile)<<endl;
    system("pause>nul");
}
