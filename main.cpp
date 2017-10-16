#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>



using namespace std;

int main(int argc, char* argv[])
{

        ifstream plik("sygnal.csv");
    string linia;
    double x1, x2;
    typedef pair <double,double> Probka;
    vector <Probka> dane;
    while (getline(plik, linia))
    {
        stringstream ss(linia);
        ss >> x1;
        ss.ignore();
        ss >> x2;
        dane.push_back(Probka(x1, x2));
    }




for (int i = 0; i < argc; ++i) {
cout << argv[i] << endl;
}

    plik.close();

{

   for (int i=1; i<dane.size(); i++)
    {
        cout << dane[i].first << "," << dane[i].second << endl;
    }
    ofstream plik2 ("out.csv", ios::app);
    for (int i=1; i<dane.size(); i++)
        plik2 << dane[i].first << dane[i].second << endl;
    plik.close();



}
}
