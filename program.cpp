#include<iostream>
using namespace std;

int main ()
{
    int mi[20], vi[20];
    int izbor;
    int suma_mi=0;
    int suma_vi=0;
    int brIgre = 0;
    while(1)
    {
    cout<<endl;
    cout<<"1.Upisite broj bodove ekipe mi"<<endl;
    cout<<"2.Upisite broj bodove ekipe vi"<<endl;
    cout<<"Unesite 1. ili 2."<<endl;
    cin>>izbor;

    if(izbor==1)

    {
        cout<<"Upisite bodove za ekipu mi"<<endl;
        cin >> mi[brIgre];
        vi[brIgre] = 162 - mi [brIgre];
    }
    else if(izbor==2)
    {
        cout<<"Upisite bodove za ekipu vi"<<endl;
        cin >> vi[brIgre];
        mi[brIgre] = 162 - vi [brIgre];
    }

    suma_mi=suma_mi + mi[brIgre];
    suma_vi=suma_vi + vi[brIgre];

    brIgre++;
    cout << endl;
    cout<<"mi"<<"\t"<<"vi"<<endl;
    for(int i=0; i<brIgre; i++)
    {
        cout<<mi[i]<<"\t"<<vi[i]<<endl;
    }
    cout << "------------------";
    cout <<suma_mi<<"\t"<<suma_vi<<endl;
}
    return 0;
}
