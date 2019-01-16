#include <iostream>
#include <cstdlib>

int main()
{
    const int n=10;
    int bnm[n+1];
    int k=0;

    bnm[0]=1;
    std::cout<<bnm[0];

    while (k<n) {
        bnm[k+1]=bnm[k]*(n-k)/(k+1);
        std::cout<<" "<<bnm[k+1];
        k++;
    }

    std::cout<<std::endl;
    system("pause>nul");
    return 0;
}
