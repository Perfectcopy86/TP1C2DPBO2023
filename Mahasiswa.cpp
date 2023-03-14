#include "header.hh"

// konstruktor
Mahasiswa::Mahasiswa() : Sivitasakademi()
{
    NIM = "";
    fakultas = "";
    laptop = "";
    nilaiasprak = "";
    nilaidosen = "";
}

// Constructor with base human attribute.
Mahasiswa::Mahasiswa(string NIK, string NIM, string nama, string gender, string asal, string email, string fakultas, list<string> buku, string laptop) : Sivitasakademi(NIK, nama, gender, asal, email)
{
    this->NIM = NIM;
    this->fakultas = fakultas;
    this->buku = buku;
    this->laptop = laptop;
    this->nilaiasprak = nilaiasprak;
    this->nilaidosen = nilaidosen;
}

// getter dan setter
void Mahasiswa::setNIM(string NIM)
{
    this->NIM = NIM;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

void Mahasiswa::setBuku(list<string> buku)
{
    this->buku = buku;
}

void Mahasiswa::setLaptop(string laptop)
{
    this->laptop = laptop;
}

void Mahasiswa::setNilaiasprak(string nilaiasprak)
{
    this->nilaiasprak = nilaiasprak;
}

void Mahasiswa::setNilaidosen(string nilaidosen)
{
    if (nilaiasprak == "-")
    {
        cout << ("Masukkan nilai asprak dulu!") << endl;
        return;
    }
    this->nilaidosen = nilaidosen;
}

void Mahasiswa::setNilaidosenforasp(string nilaidosen)
{
    this->nilaidosen = nilaidosen;
}

string Mahasiswa::getNIM()
{
    return NIM;
}

string Mahasiswa::getFakultas()
{
    return fakultas;
}

list<string> Mahasiswa::getBuku()
{
    return buku;
}

string Mahasiswa::getLaptop()
{
    return laptop;
}

string Mahasiswa::getNilaiasprak()
{
    return nilaiasprak;
}

string Mahasiswa::getNilaidosen()
{

    return nilaidosen;
}

string Mahasiswa::getNilaidosenforasp()
{

    return nilaidosen;
}

// destruktor
Mahasiswa::~Mahasiswa()
{
}