#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int varInt = 7;
    int varInt2 = 4;

    cout<<" "<<varInt<<"/"<<varInt2<<"="<<varInt/varInt2<<endl;
    cout<<" double("<<varInt<<")/"<<varInt2<<"="<<double(varInt)/varInt2<<endl;
    cout<<" "<<varInt<<"/double("<<varInt2<<")="<<varInt/double(varInt2)<<endl;
    cout<<" double("<<varInt<<")/double("<<varInt2<<")="<<double(varInt)/double(varInt2)<<endl;

    cout<<" "<<varInt<<"%"<<varInt2<<"="<<varInt%varInt2<<endl;

    system("pause>nul");
    return 0;
}
