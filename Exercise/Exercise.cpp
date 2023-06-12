#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui
	//fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/
private:
	string x[10];
public :
	void input() {
		cout << "Memasukkan jejari" << endl;
	}
	float Luas(int a) {
		cout << "Memasukkan luas lingkaran" << endl;
		return 0;
	}
	float Keliling(int a) {
		cout << "Memasukkan keliling lingkaran" << endl;
		return 0;
	}
	void setX(int a, string value) {
		x[a] = value;
	}
	string getX(int a) {
		return x[a];
	}
	
};


class Bujursangkar :public bidangDatar { /*lengkapi disini*/
private:
	string x[10];
public:
	void input() {
		cout << "Memasukkan sisi" << endl;
	}
	float Luas(int a) {
		cout << "Memasukkan Luas Bujursangkar" << endl;
		return 0;
	}
	float Keliling(int a) {
		cout << "Memasukkan Keliling Bujursangkar" << endl;
		return 0;
	}
	void setX(int a, string value) {
		x[a] = value;
	}
	string getX(int a) {
		return x[a];
	}

int main() { /*lengkapi disini*/
	bidangDatar* obyek;
	bidangDatar nilai;
	Lingkaran a;
	Bujursangkar b;

	obyek = &a;
	obyek->input();
	obyek->Luas(x);
	obyek->Keliling();
	nilai.setX();
	cout << nilai.getX() << endl;
	obyek = &b;
	obyek->input();
	obyek->Luas();
	obyek->Keliling();
	nilai.setX();
	cout << nilai.getX() << endl;

	return 0;

}

