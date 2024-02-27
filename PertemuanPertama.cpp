#include <iostream>
using namespace std;


int main()
{
	//Begin
	//numeric nAlas, nTinggi, nAlas
	//Display 'Masukkan Alas = '
	//Accept nAlas
	//Display 'Masukkan tinggi = '
	//Display ntinggi 
	//Compute nLuas = nAlas*nTinggi1/2
	//Display 'Luasnya = ' + nLuas
	//End
	
	float nAlas, nTinggi, nLuas;
	cout << "Masukkan Alas =";
	cin >> nAlas;
	cout << "Masukkan Tinggi =";
	cin >> nTinggi;
	nLuas = nAlas * nTinggi / 2;
	cout << "Luasnya =" << nLuas;


}

