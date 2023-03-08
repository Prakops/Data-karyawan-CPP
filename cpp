#include <iostream>
using namespace std;
struct karyawan{
    char nip[9];
    string nama;
    string alamat;
    int gaji;
};
struct jadwal{
	char bulan[5];
	string tahun;
	int total_jam_kerja;
};

int main()
{
    karyawan krw[500];
    jadwal jdwl[500];
    int i,k;
	
	cout<<"Data Karyawan"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Jumlah Karyawan: ";
	cin>>k;
	cout<<endl;
	
	for (i=0; i<k; i++){
		cout<<"Data Karyawan Ke - "<<i+1<<endl; cin.ignore();
		cout<<"NIP = "; cin.getline(krw[i].nip,9);
		cout<<"NAMA = "; getline(cin,krw[i].nama);
		cout<<"ALAMAT = "; getline(cin,krw[i].alamat);
		cout<<"GAJI = "; cin>>krw[i].gaji;
		if(krw[i].gaji == 4000000) {
		cout<<"Gol A"<<endl;
	}	else if (krw[i].gaji == 5000000) {
		cout<<"Gol B"<<endl;
	}	else if (krw[i].gaji == 6000000) {
		cout<<"Gol C"<<endl;
	}	else {
		cout<<"Golongan Tidak Diketahui"<<endl;
	}
		cout<<"Jadwal Kerja \n"; cin.ignore();
		cout<<"Bulan = "; cin.getline(jdwl[i].bulan,5);
		cout<<"Tahun = "; getline(cin,jdwl[i].tahun);
		cout<<"Total Jam Kerja = "; cin>>jdwl[i].total_jam_kerja;
		cout<<endl;
    }
    for (i=0; i<k; i++){
		cout<<"Menampilkan Data Karyawan Ke - "<<i+1<<endl;
		cout<<"NIP = "<<krw[i].nip<<endl;
		cout<<"NAMA = "<<krw[i].nama<<endl;
		cout<<"ALAMAT = "<<krw[i].alamat<<endl; 
		cout<<"GAJI = "<<krw[i].gaji<<endl;
		if(krw[i].gaji == 4000000) {
		cout<<"Gol A"<<endl;
	}	else if (krw[i].gaji == 5000000) {
		cout<<"Gol B"<<endl;
	}	else if (krw[i].gaji == 6000000) {
		cout<<"Gol C"<<endl;
	}	else {
		cout<<"Golongan Tidak Diketahui"<<endl;
	}	
		cout<<"Jadwal Kerja \n";
		cout<<"Bulan = "<<jdwl[i].bulan<<endl;
		cout<<"Tahun = "<<jdwl[i].tahun<<endl;
		cout<<" Total Jam Kerja = "<<jdwl[i].total_jam_kerja<<endl;
		cout<<endl;
    }
    
	return 0;
 
}
