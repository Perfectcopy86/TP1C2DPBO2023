#include "header.hh"

// konstruktor
AnggotaBEM::AnggotaBEM() : Mahasiswa()
{
    jabatan = "";
}

// Constructor with base human attribute.
AnggotaBEM::AnggotaBEM(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop, string jabatan, list<string> proker) : Mahasiswa(NIK, NIM, nama, gender, asal, email, fakultas, buku, laptop)
{
    this->jabatan = jabatan;
    this->proker = proker;
}

// getter dan setter
void AnggotaBEM::setJabatan(string jabatan)
{
    this->jabatan = jabatan;
}

void AnggotaBEM::setProker(list<string> proker)
{
    this->proker = proker;
}

string AnggotaBEM::getJabatan()
{
    return jabatan;
}

list<string> AnggotaBEM::getProker()
{
    return proker;
}

void AnggotaBEM::hadirievaluasi()
{
    cout << getNama() << " Hadir di evaluasi" << endl;
}

// destruktor
AnggotaBEM::~AnggotaBEM()
{
}