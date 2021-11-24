#include <iostream>
#include <cmath>
using namespace std;
//salsabila juandira_2117051012
int main(){
	string variabel_nama;
	string variabel_goldar;
	double variabel_beratbadan;
	double variabel_tinggibadan;
	double variabel_beratbadanideal;
	//input
	cout<<"====== Masukan Data Anda ======"<<endl;
	cout<<"Nama			: ";
	getline(cin,variabel_nama);
	cout<<"Golongan Darah		: ";
	getline(cin,variabel_goldar);
	cout<<"Berat Badan		: ";
	cin>>variabel_beratbadan;
	cout<<"Tinggi Badan		: ";
	cin>>variabel_tinggibadan;
	variabel_beratbadanideal= variabel_tinggibadan - 100 - ((variabel_tinggibadan - 100) * 15/100);
	//output
	cout
	<<endl
	<<"============ Hasil ============"<<endl
	<<endl
	<<"Nama 		  : "<<variabel_nama<<endl
	<<"Golongan Darah    : "<<variabel_goldar<<endl
	<<"Berat Bedan 	  : "<<variabel_beratbadan<<" kg"<<endl
	<<"Tinggi Badan      : "<<variabel_tinggibadan<<" cm"<<endl
	<<"Berat Badan Ideal : "<<variabel_beratbadanideal<<endl;
	
	return 0;
}

