#include "header.hh"

// konstruktor
AnggotaEC::AnggotaEC() : Mahasiswa()
{
    jabatan = "";
}

// Constructor with base human attribute.
AnggotaEC::AnggotaEC(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop, string jabatan, list<string> proker) : Mahasiswa(NIK, NIM, nama, gender, asal, email, fakultas, buku, laptop)
{
    this->jabatan = jabatan;
    this->proker = proker;
}

// getter dan setter
void AnggotaEC::setJabatan(string jabatan)
{
    this->jabatan = jabatan;
}

void AnggotaEC::setProker(list<string> proker)
{
    this->proker = proker;
}

string AnggotaEC::getJabatan()
{
    return jabatan;
}

list<string> AnggotaEC::getProker()
{
    return proker;
}

void AnggotaEC::hadirievaluasi()
{
    cout << getNama() << " Hadir di evaluasi" << endl;
}

// destruktor
AnggotaEC::~AnggotaEC()
{
}