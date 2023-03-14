#include "header.hh"

// inisialisasi constructor
BEM::BEM()
{
    divisi = "";
    kode = "";
}

// inisialisasi constructor dengan parameter
BEM::BEM(string divisi, string kode, list<string> proker)
{
    this->divisi = divisi;
    this->kode = kode;
    this->proker = proker;
}

// inisialisasi method setter dan getter
void BEM::setDivisi(string divisi)
{
    this->divisi = divisi;
}

void BEM::setKode(string kode)
{
    this->kode = kode;
}

void BEM::setProker(string proker)
{
    this->proker.push_back(proker);
}

void BEM::add_anggotabem(AnggotaBEM anggotabem)
{
    this->anggotabem.push_back(anggotabem);
}

string BEM::getDivisi()
{
    return this->divisi;
}

string BEM::getKode()
{
    return this->kode;
}

list<string> BEM::getProker()
{
    return this->proker;
}

list<AnggotaBEM> BEM::getAnggotabem()
{
    return this->anggotabem;
}

// inisialisasi destructor
BEM::~BEM()
{
}