#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include "dane.h"
#include "pojemnik.h"
using namespace std;


int main()
{


    pojemnik<dane> L;

    string IBAN;
    string nazwa;

    cout<<"Podaj nazwe pliku: ";

    cin>>nazwa;


    fstream in;

    in.open(nazwa);

    if(!in)
        throw logic_error ("Nie ma takiego pliku!");


    while(!in.eof())
    {
        in >> IBAN;

        dane K;
        K=dane(IBAN);
        L.insert(K);
    }


    in.close();


    ofstream out1020;
    ofstream out1140;
    ofstream out2490;

    out1020.open("1020.txt");
    out1140.open("1140.txt");
    out2490.open("2490.txt");


    int rozmiar = L.size();

    string tmp;
    string tmp2;
    for(int i = 0; i < rozmiar ; i++)

    {
            dane G;
            G=L.pop();

            tmp = G.getIban();
            tmp2=tmp.substr(4,4);

            if(tmp2=="1020")
            {
                out1020 << G.getIban() <<endl;
            }
            else if(tmp2=="1140")
            {
                out1140 << G.getIban() <<endl;
            }
            else
            {
                out2490 << G.getIban() <<endl;
            }




    }

        out1020.close();
        out1140.close();
        out2490.close();


    return 0;
}
