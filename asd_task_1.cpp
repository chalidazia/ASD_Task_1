/**
    NAMA  : Chalida Zia
    NIM   : 1301154491
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
        int x=0, y=0, j=0, k=0;
        char in;
        
void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main ();
{
    main_menu();
    return 0;
}

void main_menu();
{
    int pilihan;
    cout << "1. Set Standar Indeks Nilai" << endl;
    cout << "2. Set Proporsi Nilai" << endl;
    cout << "3. Input Nilai" << endl;
    cout << "Keluar" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    
        switch (pilihan)
        {
            case 1: set_standar(); break;
            case 2: set_proporsi_nilai(); break;
            case 3: input_nilai(); break;
            case 4: thank_you(); break;
        }
}

void set_standar();
{
    cout << "Masukkan Standar Nilai Minimum 1: ";
    cin >> x;
    cout << "Masukkan Standar Nilai Minimum 2: ";
    cin >> y;
    cout << "Masukkan Standar Nilai Minimum 3: ";
    cin >> j;
    cout << "Masukkan Standar Nilai Minimum 4: ";
    cin >> k;
    
    if (y>x)
    {
        cout << "Input Standar Salah, Silahkan Ulangi Lagi" << endl;
        set_standar();
    }
    else if (j>y)
    {
        cout << "Input Standar Salah, Silahkan Ulangi Lagi" << endl;
        set_standar();
    }
    else if (k>j)
    {
        cout << "Input Standar Salah, Silahkan Ulangi Lagi" << endl;
        set_standar();
    }
    
    main_menu();
}

void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
        cout << "Input Presentase Nilai dalam Persen: " <<endl;
        cout << "Masukkan Presentase UTS: ";
        cin >> puts;
        cout << "Masukkan Presentase UAS: ";
        cin >> puas;
        cout << "Masukkan Presentase Tubes: ";
        cin >> ptubes;
        
        presentase = puts+puas+ptubes;
        if (presentase !=100)
        {
            cout << "Total Input Presentase !=100, Silahkan Ulangi Lagi" << endl;
            set_proporsi_nilai();
        }
        main_menu();
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}

char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
	    double sum:
	
        sum=(((uts*puts)/100)+((uas*puas)/100)+((tubes*ptubes)/100));
	    if (sum>=x)
		    index ='A';
	    else if (sum>=y && sum<=x)
		    index='B';
	    else if (sum>=j && sum<=y)
		    index='C';
	    else if (sum>=k && sum<=j)
		    index='D';
	    else
		    index='E';
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
        cout<<"masukkan nilai uts : ";
	    cin>>uts;
	    cout<<"masukkan nilai uas : ";
	    cin>>uas;
	    cout<<"masukkan nilai tubes : ";
	    cin>>tubes;
	    hitung_index(uts,uas,tubes);
	    cout<<hitung_index();
	    cout<<"indeks nilai anda adalah "<<hitung_index(uts,uas,tubes);
	    main_menu();
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
        cout<<endl;
	    cout<<"Terima Kasih telah meggunakan aplikasi kami"<<endl;
	    cout<<"1301154491 - Chalida Zia";
	    cout<<endl;
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}
