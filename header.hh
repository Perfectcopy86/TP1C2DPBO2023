// import library
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
    string NIK;
    string nama;
    string gender;

public:
    // konstruktor
    Human();
    Human(string NIK, string nama, string gender);

    // gettera dan setter
    void setNIK(string NIK);
    void setNama(string nama);
    void setGender(string gender);

    void eat();
    void drink();
    void sleep();

    string getNIK();
    string getNama();
    string getGender();

    // destruktor
    ~Human();
};

class Sivitasakademi : public Human
{
private:
    string asal;
    string email;

public:
    // konstruktor
    Sivitasakademi();
    Sivitasakademi(string NIK, string nama, string gender, string asal, string email);

    // setter dan getter
    void setAsal(string asal);
    void setEmail(string email);

    string getAsal();
    string getEmail();

    // destruktor
    ~Sivitasakademi();
};

class Mahasiswa : public Sivitasakademi
{
private:
    string NIM;
    string fakultas;
    list<string> buku;
    string laptop;
    string nilaiasprak;
    string nilaidosen;

public:
    // konstruktor
    Mahasiswa();
    Mahasiswa(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop);

    // getter dan setter
    void setNIM(string NIM);
    void setFakultas(string fakultas);
    void setBuku(list<string> buku);
    void setLaptop(string laptop);
    void setNilaiasprak(string nilaiasprak);
    void setNilaidosen(string nilaidosen);
    void setNilaidosenforasp(string nilaidosen);

    string getNIM();
    string getFakultas();
    list<string> getBuku();
    string getLaptop();
    string getNilaiasprak();
    string getNilaidosen();
    string getNilaidosenforasp();

    // destruktor
    ~Mahasiswa();
};

class Asprak : public Mahasiswa
{
private:
    string matkulprak;

public:
    // konstruktor
    Asprak();
    Asprak(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop, string matkulprak);

    // getter dan setter
    void setMatkulprak(string matkulprak);

    string getMatkulprak();

    void mengajar();
    void setNilaiMahasiswa(Mahasiswa mhs, string nilai);

    ~Asprak();
};

class AnggotaBEM : public Mahasiswa
{
private:
    string jabatan;
    list<string> proker;

public:
    // konstruktor
    AnggotaBEM();
    AnggotaBEM(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop, string jabatan, list<string> proker);

    // getter dan setter
    void setJabatan(string jabatan);
    void setProker(list<string> proker);

    void hadirievaluasi();

    string getJabatan();
    list<string> getProker();

    ~AnggotaBEM();
};

class AnggotaEC : public Mahasiswa
{
private:
    string jabatan;
    list<string> proker;

public:
    // konstruktor
    AnggotaEC();
    AnggotaEC(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop, string jabatan, list<string> proker);

    // getter dan setter
    void setJabatan(string jabatan);
    void setProker(list<string> proker);

    void hadirievaluasi();

    string getJabatan();
    list<string> getProker();

    ~AnggotaEC();
};

class Dosen : public Sivitasakademi
{
private:
    string NIP;
    string pend;
    string keahlian;
    list<string> spidol;
    string laptop;
    list<Asprak> asprak;

public:
    // konstruktor
    Dosen();
    Dosen(string NIK, string nama, string gender, string asal, string email, string NIP, string pend, string keahlian, list<string> spidol, string laptop);

    // getter dan setter
    void setNIP(string NIP);
    void setPend(string pend);
    void setKeahlian(string keahlian);
    void setSpidol(list<string> spidol);
    void setLaptop(string laptop);
    void add_asprak(Asprak asprak);

    list<Asprak> getAsprak();

    string getNIP();
    string getPend();
    string getKeahlian();
    list<string> getSpidol();
    string getLaptop();

    // destruktor
    ~Dosen();
};

class Course
{
private:
    string matkul;
    list<Dosen> dosen;
    list<Mahasiswa> mahasiswa;

public:
    // konstruktor
    Course();
    Course(string matkul);

    // method setter dan getter
    void setMatkul(string matkul);
    void add_dosen(Dosen dosen);
    void add_mahasiswa(Mahasiswa mahasiswa);

    string getMatkul();
    list<Dosen> getDosen();
    list<Mahasiswa> getMahasiswa();
    // destructor
    ~Course();
};

class Prodi
{
private:
    string prodi;
    string kode;
    list<Course> course;
    list<Dosen> dosen;
    list<Mahasiswa> mahasiswa;

public:
    // konstruktor
    Prodi();
    Prodi(string prodi, string kode);

    // method setter dan getter
    void setProdi(string prodi);
    void setKode(string kode);
    void add_course(Course course);
    void add_dosen(Dosen dosen);
    void add_mahasiswa(Mahasiswa mahasiswa);

    string getProdi();
    string getKode();
    list<Course> getCourse();
    list<Dosen> getDosen();
    list<Mahasiswa> getMahasiswa();

    // destructor
    ~Prodi();
};

class BEM
{
private:
    string divisi;
    string kode;
    list<string> proker;
    list<AnggotaBEM> anggotabem;

public:
    // konstruktor
    BEM();
    BEM(string divisi, string kode, list<string> proker);

    // method setter dan getter
    void setDivisi(string divisi);
    void setKode(string kode);
    void setProker(string proker);
    void add_anggotabem(AnggotaBEM anggotabem);

    string getDivisi();
    string getKode();
    list<string> getProker();
    list<AnggotaBEM> getAnggotabem();

    // destructor
    ~BEM();
};

class EC
{
private:
    string divisi;
    string kode;
    list<string> proker;
    list<AnggotaEC> anggotaec;

public:
    // konstruktor
    EC();
    EC(string divisi, string kode, list<string> proker);

    // method setter dan getter
    void setDivisi(string divisi);
    void setKode(string kode);
    void setProker(string proker);
    void add_anggotaec(AnggotaEC anggotaec);

    string getDivisi();
    string getKode();
    list<string> getProker();
    list<AnggotaEC> getAnggotaec();

    // destructor
    ~EC();
};
