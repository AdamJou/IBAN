
#ifndef dane_H
#define dane_H
#include <iostream>

using namespace std;

struct dane
{


    private:

        string iban;



    public:

    ~dane()=default;

    dane(string iban_=" ");

    bool operator < (const dane &s) const {return iban < s.iban;}
    string getIban() {return iban;}






};





#endif

