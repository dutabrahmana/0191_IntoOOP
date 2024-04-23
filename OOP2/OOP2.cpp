#include <iostream>
using namespace std;

class BangunDatar {
	// akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() {	// methode input persegi panjang
		cout << "Masukan Panjangnya : ";
		cin >> panjang;
		cout << "Masukan Lebarnya :";
		cin >> lebar;
	}

	float HitungLuas() {
		return panjang * lebar;
	}

	void display() {
		cout << "panjangnya = " << panjang << endl;
		cout << "lebarnya = " << lebar << endl;
		cout << "luasnya = " << HitungLuas() << endl;
	}
};

int main() {

}