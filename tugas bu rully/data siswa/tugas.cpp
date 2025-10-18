#include <iostream>
using namespace std;

// struktur
struct datanilai
{
    float mtk;
    float bindo;
    float bing;
    float ipa;
};
struct datasiswa
{
    string nisn;
    string nama;
    string kelas;
    datanilai nilai;
    float rataRata;
};

//input data
void inputdata(datasiswa siswa[],int n){
    for(int i = 0;i< n;i++){
        //data umum
        cout << endl;
        cout << "masukkan data siswa ke : "<< i+ 1<<endl;
        cout << "masukkan nisn : ";
        cin >> siswa[i].nisn;
        cout << "masukkan nama : ";
        cin.ignore();//membuang buffer
        getline(cin,siswa[i].nama);
        cout << "masukkan kelas : ";
        getline(cin,siswa[i].kelas);
        //data nilai
        cout << "masukkan nilai matematika : ";
        cin >> siswa[i].nilai.mtk;
        cout << "masukkan nilai bahasa indonesia : ";
        cin >> siswa[i].nilai.bindo;
        cout << "masukkan nilai bahasa inggris : ";
        cin >> siswa[i].nilai.bing;
        cout << "masukkan nilai ipa : ";
        cin >> siswa[i].nilai.ipa;
        //data nilai rata rata
        siswa[i].rataRata = ( siswa[i].nilai.mtk + siswa[i].nilai.bindo + siswa[i].nilai.bing + siswa[i].nilai.ipa) / 4;
    }
}

// menampilkan nilai rata rata siswa
void outrata(datasiswa siswa[],int n){
    cout <<endl;
    cout << "nilai rata rata siswa"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout <<endl;
        cout << siswa[i].nama << " (" << siswa[i].kelas << ") = " << siswa[i].rataRata<<endl;
    }
}

// nilai rata rata kelas per mapel (masih bug)
void rata_mapel(datasiswa siswa[],int n){
    cout <<endl;
    cout << "rata rata nilai mapel perkelas"<<endl;
    string nilaikelas[50];//nilai maksimum array kelas adalah 50
    int jum_kelas = 0;
    // mencari kelas yang unik
    for (int i = 0; i < n; i++)
    {
        bool tersedia = false;
        for (int j = 0; j < jum_kelas; j++)
        {
            if (siswa[i].kelas == nilaikelas[j])
            {
                tersedia = true;
                break;
            }
            
        }
        if (!tersedia)
        {
            nilaikelas[jum_kelas] = siswa[i].kelas;
        }
        
    }
    // hitung nilai rata rata kelas
    for (int i = 0; i < jum_kelas; i++)
    {
        string kelas = nilaikelas[i];
        float totalmtk = 0;
        float totalbindo = 0;
        float totalbing = 0;
        float totalipa = 0;
        int jumlah = 0;
        for (int j = 0; i < n; j++)
        {
            if (kelas == siswa[j].kelas)
            {
                totalmtk += siswa[j].nilai.mtk;
                totalbindo += siswa[j].nilai.bindo;
                totalbing += siswa[j].nilai.bing;
                totalipa += siswa[j].nilai.ipa;
                jumlah++;
            }
            
        }
        cout <<endl;
        cout << endl<<"kelas "<< kelas<<endl
            <<"rata rata nilai matematika : "<< totalmtk / jumlah<<endl
            <<"rata rata nilai bahasa indonesia : "<<totalbindo / jumlah<< endl
            <<"rata rata nilai bahasa inggris : "<< totalbing / jumlah << endl
            <<"rata rata nilai ipa : "<< totalipa / jumlah << endl;
    }
    
}

// peringkat pararel
void peringkatpararel(datasiswa siswa[],int n){
    int indextertinggi = 0;

    for (int i = 0; i < n; i++)
    {
        if (siswa[i].rataRata> siswa[indextertinggi].rataRata)
        {
            indextertinggi = i;
        }
        
    }
    cout <<endl;
    cout << "peringkat satu pararel"<<endl
        <<"nama : "<< siswa[indextertinggi].nama << endl
        <<"nisn : "<< siswa[indextertinggi].nisn <<endl
        <<"kelas : "<< siswa[indextertinggi].kelas<<endl
        <<"nilai rata rata : "<< siswa[indextertinggi].rataRata<<endl;
}

//peringkat satu masing masing kelas(masih bug)
void juarakelas(datasiswa siswa[],int n){
    cout <<endl;
    cout << "peringkat satu perkelas"<<endl;
    string nilaikelas[50];//nilai maksimum array kelas adalah 50
    int jum_kelas = 0;
    // mencari kelas yang unik
    for (int i = 0; i < n; i++)
    {
        bool tersedia = false;
        for (int j = 0; i < jum_kelas; j++)
        {
            if (siswa[i].kelas == nilaikelas[j])
            {
                tersedia = true;
                break;
            }
            
        }
        if (!tersedia)
        {
            nilaikelas[jum_kelas] = siswa[i].kelas;
        }
        
    }
    // mencari nilai tertinggi di kelas
    for (int i = 0; i < jum_kelas; i++)
    {
        string kelas = nilaikelas[i];
        int indextertinggi = -1;
        for (int j = 0; j < n; j++)
        {
            if (kelas == siswa[i].kelas)
            {
                if (indextertinggi == -1 || siswa[i].rataRata > siswa[indextertinggi].rataRata)
                {
                    indextertinggi = i;
                }
                
            }
            
        }
        cout <<endl;
        cout << "juara 1 di kelas "<<kelas <<endl
            <<"nama : "<<siswa[indextertinggi].nama<<endl
            <<"nisn : "<<siswa[indextertinggi].nisn<<endl
            <<"nilai rata rata : "<<siswa[indextertinggi].rataRata;
    }
    
}

// data kelulusan
void lulus(datasiswa siswa[],int n){
    cout <<endl;
    cout << "siswa yang lulus(minimal rata rata >= 75)";
    for (int i = 0; i < n; i++)
    {
        if (siswa[i].rataRata >= 75)
        {
            cout <<endl;
            cout << "nama : "<<siswa[i].nama<<endl
                <<"nisn : "<< siswa[i].nisn<<endl
                <<"kelas : "<<siswa[i].kelas<<endl
                <<"nilai rata rata : "<< siswa[i].rataRata<<endl;
        }
        
    }
    
}

// tampil data memakai peringkat
void peringkat(datasiswa siswa[],int n){
    float temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (siswa[j].rataRata > siswa[j + 1].rataRata)
            {
                temp = siswa[j].rataRata;
                siswa[j].rataRata = siswa[j + 1].rataRata;
                siswa[j + 1].rataRata = temp;
            }
            
        }
        
    }
    cout << "data berdasarkan peringkat"<<endl;
    cout << "no \tnama \t \tnisn \tkelas \tnilai rata rata"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << "\t"<< siswa[i].nama<<"\t"<<siswa[i].nisn<<"\t"<<siswa[i].kelas<<"\t"<<siswa[i].rataRata;
        cout <<endl;
    }
    
    
}

// kode utama
int main(){
    int n;
    cout << "masukkan jumlah siswa : " ;
    cin >> n;
    datasiswa siswa[n];
    inputdata(siswa,n);
    outrata(siswa,n);
    rata_mapel(siswa,n);
    peringkatpararel(siswa,n);
    juarakelas(siswa,n);
    lulus(siswa,n);
    peringkat(siswa,n);
}
