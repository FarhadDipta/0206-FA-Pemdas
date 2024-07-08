#include <iostream>
using namespace std;

class MasukUniversitas{
private : 
    int uangPendaftaran, uangSemesterPertama, UangBangunan, totalBiaya;

public:
    MasukUniversitas (int uang) {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        UangBangunan = 0;
        totalBiaya = 0;
        
    }

    virtual void namaJalurMasuk () {

    }

    void setUangPendaftaran (int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran () {
        return uangPendaftaran;
    }

    void setUangSemesterPertama (int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama () {
        return uangPendaftaran;
    }

    void setUangBangunan (int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangBangunan () {
        return uangPendaftaran;
    }

    void setTotalBiaya (int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getTotalBiaya () {
        return uangPendaftaran;
    }
};

class SNBT : public MasukUniversitas{
public : 
    void input () {
        int pendaftaran, semesterPertama, bangunan;

        cout << "Masukan uang pendaftaran : ";
        cin >> pendaftaran;
        setUangPendaftaran(pendaftaran);

        cout << "Masukan uang semester pertama : ";
        cin >> semesterPertama;
        setUangSemesterPertama(semesterPertama);

        cout << "Masukan uang bangunan : ";
        cin >> bangunan;
        setUangBangunan(bangunan);
    }

    void hitungTotalBiaya () {
        int total = getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
        setTotalBiaya(total);
    }
};

class SNBP : public MasukUniversitas{
    void input () {
        int pendaftaran, semesterPertama, bangunan;

        cout << "Masukan uang pendaftaran : ";
        cin >> pendaftaran;
        setUangPendaftaran(pendaftaran);

        cout << "Masukan uang semester pertama : ";
        cin >> semesterPertama;
        setUangSemesterPertama(semesterPertama);

        cout << "Masukan uang bangunan : ";
        cin >> bangunan;
        setUangBangunan(bangunan);
    }

    void hitungTotalBiaya () {
        int total = getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
        setTotalBiaya(total);
    }

    void tampilkanTotalBiaya () {
        
    }
};

int main () {
    int pilihan;
    do
    {
            cout << "Pilih Jalur Masuk:" << endl;
            cout << "1. SNBT" << endl;
            cout << "2. SNBP" << endl;
            cout << "3. Keluar" << endl;
            cout << "Pilih: ";
            cin >> pilihan;

            switch (pilihan) {
            case 1:
                ;
                break;
            case 2:
                ;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                continue;
        }
    } while (pilihan == 3);

}
