#include <iostream>
#include <stdlib.h>

using namespace std;
//hacer una serie de fibonacci que realice la serie -> 1 1 2 3 5 8 13
int main()
{
    int n;
    int x = 0;
    int y = 1;
    int z = 1;


    cout << "Digite el numero de elementos " << endl;
    cin>>n;
    cout<<"1 ";
    for(int i =1; i<n;i++){
        z = x + y;//1 2 3 5
        cout<<z<<" ";//1 2 3 5
        x = y; //1 1 2
        y = z;//1 2 3
    }
    cout<<"\n";

    return 0;
}
