// Saya Rasyid Andriansyah NIM 2101963 mengerjakan soal Latihan 4 dalam mata kuliah DPBO
// untuk keberkahanNya maka saya tidak melakukan kecurangan
// seperti yang telah dispesifikasikan. Aamiin.

#include "header.hh"

int main()
{
    // inisialisasi daftar dosen
    list<Dosen> listDosen;
    list<string> spidoldsn1{"Snowman", "Faber-Castell"};
    Dosen dosen1("21203103", "Mrs. Rose", "Perempuan", "UPI", "rose@upi.edu", "21233113", "S3", "DPBO", spidoldsn1, "Asus");
    listDosen.push_back(dosen1);

    cout << "Silakan Beri Nilai Terlebih Dahulu Agar Data Muncul:" << endl;
    // inisialisasi daftar mahasiswa
    list<Mahasiswa> listMhs;
    list<string> buku{"Algorithm", "AI", "Photography"};
    Mahasiswa mhs1("171828128", "2101963", "Resyad", "Laki-laki", "UPI", "resyad@upi.edu", "FPMIPA", buku, "MSI");
    string nilaidosen;
    string nilaiasprak;
    cout << "Masukan nilai dari asprak untuk Resyad: " << endl;
    cin >> nilaiasprak;
    mhs1.setNilaiasprak(nilaiasprak);
    cout << "Masukan nilai dari dosen untuk Resyad: " << endl;
    cin >> nilaidosen;
    mhs1.setNilaidosen(nilaidosen);
    listMhs.push_back(mhs1);

    // inisialisasi daftar asprak
    list<Asprak> listAsp;
    list<string> bukuasp{"Crypto", "Photography"};
    Asprak asp1("1718284872", "2101948", "Mila", "Perempuan", "UPI", "mila@upi.edu", "FPMIPA", bukuasp, "Acer", "DPBO");
    string nilaidosenforasp;
    cout << "Masukan nilai dari dosen untuk Mila: " << endl;
    cin >> nilaidosenforasp;
    asp1.setNilaidosenforasp(nilaidosenforasp);
    listAsp.push_back(asp1);

    // menambah asprak ke dosen
    dosen1.add_asprak(asp1);

    // inisialisasi daftar mahasiswa BEM
    list<AnggotaBEM> listBEM;
    list<string> bukubem1{"Algorithm", "AI", "Photography"};
    list<string> prokerbem1{"Proker 1", "Proker 2"};
    AnggotaBEM bem1("171828458", "2101124", "Pahri", "Laki-laki", "UPI", "pahri@upi.edu", "FPMIPA", bukubem1, "MSI", "anggota", prokerbem1);
    string nilaidosenbem1;
    string nilaiasprakbem1;
    cout << "Masukan nilai dari asprak untuk Pahri: " << endl;
    cin >> nilaiasprakbem1;
    bem1.setNilaiasprak(nilaiasprakbem1);
    cout << "Masukan nilai dari dosen untuk Pahri: " << endl;
    cin >> nilaidosenbem1;
    bem1.setNilaidosen(nilaidosenbem1);
    listBEM.push_back(bem1);

    // inisialisasi daftar mahasiswa EC
    list<AnggotaEC> listEC;
    list<string> bukuec1{"Algorithm", "AI", "Photography"};
    list<string> prokerec1{"Proker 1", "Proker 2"};
    AnggotaEC ec1("171828458", "2101742", "Angga", "Laki-laki", "UPI", "angga@upi.edu", "FPMIPA", bukuec1, "Asus", "anggota", prokerec1);
    string nilaidosenec1;
    string nilaiasprakec1;
    cout << "Masukan nilai dari asprak untuk Angga: " << endl;
    cin >> nilaiasprakec1;
    ec1.setNilaiasprak(nilaiasprakec1);
    cout << "Masukan nilai dari dosen untuk Angga: " << endl;
    cin >> nilaidosenec1;
    ec1.setNilaidosen(nilaidosenec1);
    listEC.push_back(ec1);

    list<string> bukuec2{"Algorithm", "AI"};
    list<string> prokerec2{"Proker 1", "Proker 2"};
    AnggotaEC ec2("171828458", "2101496", "Getsbi", "Laki-laki", "UPI", "getsbi@upi.edu", "FPMIPA", bukuec2, "Lenovo", "anggota", prokerec2);
    string nilaidosenec2;
    string nilaiasprakec2;
    cout << "Masukan nilai dari asprak untuk Getsbi: " << endl;
    cin >> nilaiasprakec2;
    ec2.setNilaiasprak(nilaiasprakec2);
    cout << "Masukan nilai dari dosen untuk Getsbi: " << endl;
    cin >> nilaidosenec2;
    ec2.setNilaidosen(nilaidosenec2);
    listEC.push_back(ec2);

    // inisialisasi BEM
    list<string> divproker1{"Proker 1", "Proker 2"};
    BEM divbem1("Rohani", "RH", divproker1);

    // memanbah anggota ke divisi
    divbem1.add_anggotabem(bem1);

    // inisialisasi EC
    list<string> divprokerec1{"Proker 1", "Proker 2"};
    EC divec1("Pendidikan", "PD", divprokerec1);

    // memanbah anggota ke divisi
    divec1.add_anggotaec(ec1);
    divec1.add_anggotaec(ec2);

    // inisialisasi matkul
    Course course1("DPBO");
    Course course2("Big Data");
    Course course3("Data Mining");
    Course course4("kalkulus");
    Course course5("Sistem Operasi");
    Course course6("Metodologi Penelitian");
    Course course7("Multimedia");

    // Mahasiswa ngontrak matkul
    course1.add_mahasiswa(mhs1);
    course1.add_mahasiswa(bem1);
    course1.add_mahasiswa(ec1);
    course1.add_mahasiswa(ec2);

    // Dosen mengajar matkul
    course1.add_dosen(dosen1);

    // inisialisasi prodi
    Prodi prodi1("Ilmu Komputer", "IK");

    // tambah matkul ke prodi
    prodi1.add_course(course1);
    prodi1.add_course(course2);
    prodi1.add_course(course3);
    prodi1.add_course(course4);
    prodi1.add_course(course5);
    prodi1.add_course(course6);
    prodi1.add_course(course7);

    // tambah dosen ke prodi
    prodi1.add_dosen(dosen1);

    // tambah mahasiswa ke prodi
    prodi1.add_mahasiswa(mhs1);
    prodi1.add_mahasiswa(asp1);
    prodi1.add_mahasiswa(bem1);
    prodi1.add_mahasiswa(ec1);
    prodi1.add_mahasiswa(ec2);
    // prodi1.add_mahasiswa(mhs2);
    // prodi1.add_mahasiswa(mhs4);
    // prodi2.add_mahasiswa(mhs3);
    // prodi2.add_mahasiswa(mhs5);

    int n = 0;
    do
    {

        // tampilan menu
        cout << "-----------------" << endl;
        cout << "Masukan Perintah!" << endl;
        cout << "-----------------" << endl;
        cout << "1. Tampilkan Seluruh Data" << endl;
        cout << "2. Lakukan aksi" << endl;
        cout << "3. Keluar" << '\n'
             << endl;
        cout << "Pilih Menu: " << endl;
        cin >> n;
        if (n == 1)
        {
            // print dosen
            cout << "*******************************************************\n";
            cout << "             List Dosen:\n";

            int nomorDosen = 1;

            // print informasi setiap dosen dalam daftar dosen
            for (list<Dosen>::iterator it = listDosen.begin(); it != listDosen.end(); it++)
            {
                cout << "\n";
                cout << "================  Dosen " << nomorDosen << " ======================" << endl;
                cout << "===================================================\n";
                cout << "||NIK              : " << it->getNIK() << endl;
                cout << "||Nama             : " << it->getNama() << endl;
                cout << "||Jenis Kelamin    : " << it->getGender() << endl;
                cout << "||Asal Universitas : " << it->getAsal() << endl;
                cout << "||Email            : " << it->getEmail() << endl;
                cout << "||NIP              : " << it->getNIP() << endl;
                cout << "||Program Studi    : " << it->getPend() << endl;
                cout << "||Keahlian         : " << it->getKeahlian() << endl;
                cout << "||Spidol           : ";
                for (const auto &spidol : it->getSpidol())
                {
                    cout << "- " << spidol << "\n                     ";
                }
                cout << endl;
                cout << "||Laptop           : " << it->getLaptop() << endl;
                cout << "||Asprak           : ";
                for (auto asp : dosen1.getAsprak())
                {
                    cout << "- " << asp.getNIM() << " " << asp.getNama() << "\n                     " << endl;
                }
                cout << "===================================================\n\n";

                nomorDosen++;
            }

            // print mahasiswa
            cout << "*******************************************************\n";
            cout << "             List Mahasiswa:\n";

            int nomorMhs = 1;

            // print informasi setiap mahasiswa dalam daftar mahasiswa
            for (list<Mahasiswa>::iterator it = listMhs.begin(); it != listMhs.end(); it++)
            {
                cout << "\n";
                cout << "================  Mahasiswa " << nomorMhs << " ======================" << endl;
                cout << "===================================================\n";
                cout << "||NIK              : " << it->getNIK() << endl;
                cout << "||NIM              : " << it->getNIM() << endl;
                cout << "||Nama             : " << it->getNama() << endl;
                cout << "||Jenis Kelamin    : " << it->getGender() << endl;
                cout << "||Asal Universitas : " << it->getAsal() << endl;
                cout << "||Email            : " << it->getEmail() << endl;
                cout << "||Fakultas         : " << it->getFakultas() << endl;
                cout << "||Buku             : ";
                for (const auto &buku : it->getBuku())
                {
                    cout << "- " << buku << "\n                     ";
                }
                cout << endl;
                cout << "||Laptop           : " << it->getLaptop() << endl;
                cout << "||Nilai Dosen      : " << it->getNilaidosen() << endl;
                cout << "||Nilai Asprak     : " << it->getNilaiasprak() << endl;
                cout << "===================================================\n\n";

                nomorMhs++;
            }

            cout << "*******************************************************\n";
            cout << "             List Mahasiswa(Asprak):\n";

            int nomorAsp = 1;

            // print informasi setiap mahasiswa dalam daftar asprak
            for (list<Asprak>::iterator it = listAsp.begin(); it != listAsp.end(); it++)
            {
                cout << "\n";
                cout << "================  Mahasiswa (Asprak) " << nomorAsp << " ======================" << endl;
                cout << "===================================================\n";
                cout << "||NIK              : " << it->getNIK() << endl;
                cout << "||NIM              : " << it->getNIM() << endl;
                cout << "||Nama             : " << it->getNama() << endl;
                cout << "||Jenis Kelamin    : " << it->getGender() << endl;
                cout << "||Asal Universitas : " << it->getAsal() << endl;
                cout << "||Email            : " << it->getEmail() << endl;
                cout << "||Fakultas         : " << it->getFakultas() << endl;
                cout << "||Buku             : ";
                for (const auto &buku : it->getBuku())
                {
                    cout << "- " << buku << "\n                     ";
                }
                cout << endl;
                cout << "||Laptop           : " << it->getLaptop() << endl;
                cout << "||Nilai Dosen      : " << it->getNilaidosenforasp() << endl;
                cout << "===================================================\n\n";

                nomorAsp++;
            }

            // print mahasiswa
            cout << "*******************************************************\n";
            cout << "             List Mahasiswa (BEM):\n";

            int nomorBEM = 1;

            // print informasi setiap mahasiswa dalam daftar BEM
            for (list<AnggotaBEM>::iterator it = listBEM.begin(); it != listBEM.end(); it++)
            {
                cout << "\n";
                cout << "================  Mahasiswa (BEM) " << nomorBEM << " ======================" << endl;
                cout << "===================================================\n";
                cout << "||NIK              : " << it->getNIK() << endl;
                cout << "||NIM              : " << it->getNIM() << endl;
                cout << "||Nama             : " << it->getNama() << endl;
                cout << "||Jenis Kelamin    : " << it->getGender() << endl;
                cout << "||Asal Universitas : " << it->getAsal() << endl;
                cout << "||Email            : " << it->getEmail() << endl;
                cout << "||Fakultas         : " << it->getFakultas() << endl;
                cout << "||Buku             : ";
                for (const auto &buku : it->getBuku())
                {
                    cout << "- " << buku << "\n                     ";
                }
                cout << endl;
                cout << "||Laptop           : " << it->getLaptop() << endl;
                cout << "||Nilai Dosen      : " << it->getNilaidosen() << endl;
                cout << "||Nilai Asprak     : " << it->getNilaiasprak() << endl;
                cout << "||Jabatan          : " << it->getJabatan() << endl;
                cout << "||Proker           : ";
                for (const auto &proker : it->getProker())
                {
                    cout << "- " << proker << "\n                     ";
                }
                cout << endl;
                cout << "===================================================\n\n";

                nomorBEM++;
            }

            // print mahasiswa
            cout << "*******************************************************\n";
            cout << "             List Mahasiswa (EC):\n";

            int nomorEC = 1;
            // print informasi setiap mahasiswa dalam daftar EC
            for (list<AnggotaEC>::iterator it = listEC.begin(); it != listEC.end(); it++)
            {
                cout << "\n";
                cout << "================  Mahasiswa (EC) " << nomorEC << " ======================" << endl;
                cout << "===================================================\n";
                cout << "||NIK              : " << it->getNIK() << endl;
                cout << "||NIM              : " << it->getNIM() << endl;
                cout << "||Nama             : " << it->getNama() << endl;
                cout << "||Jenis Kelamin    : " << it->getGender() << endl;
                cout << "||Asal Universitas : " << it->getAsal() << endl;
                cout << "||Email            : " << it->getEmail() << endl;
                cout << "||Fakultas         : " << it->getFakultas() << endl;
                cout << "||Buku             : ";
                for (const auto &buku : it->getBuku())
                {
                    cout << "- " << buku << "\n                     ";
                }
                cout << endl;
                cout << "||Laptop           : " << it->getLaptop() << endl;
                cout << "||Nilai Dosen      : " << it->getNilaidosen() << endl;
                cout << "||Nilai Asprak     : " << it->getNilaiasprak() << endl;
                cout << "||Jabatan          : " << it->getJabatan() << endl;
                cout << "||Proker           : ";
                for (const auto &proker : it->getProker())
                {
                    cout << "- " << proker << "\n                     ";
                }
                cout << endl;
                cout << "===================================================\n\n";

                nomorEC++;
            }

            // print list of Divisi BEM
            cout << "\n\nlist Divisi of BEM:" << endl;
            // mhs matkul 1
            cout << "================= " << divbem1.getDivisi() << "-" << divbem1.getKode() << " =================" << endl;
            cout << "||Anggota BEM       : ";
            for (auto bem : divbem1.getAnggotabem())
            {
                cout << "- " << bem.getNIM() << " " << bem.getNama() << "\n                      " << endl;
            }
            cout << endl;

            cout << "||Proker            : ";
            for (const auto &divproker1 : divbem1.getProker())
            {
                cout << "- " << divproker1 << "\n                      ";
            }
            cout << endl;
            cout << "==========================================================\n"
                 << endl;

            // print list of Divisi EC
            cout << "\n\nlist Divisi of EC:" << endl;

            cout << "================= " << divec1.getDivisi() << "-" << divec1.getKode() << " =================" << endl;
            cout << "||Anggota EC        : ";
            for (auto ec : divec1.getAnggotaec())
            {
                cout << "- " << ec.getNIM() << " " << ec.getNama() << "\n                      ";
            }
            cout << endl;

            cout << "||Proker            : ";
            for (const auto &divprokerec1 : divec1.getProker())
            {
                cout << "- " << divprokerec1 << "\n                      ";
            }
            cout << endl;
            cout << "==========================================================\n"
                 << endl;

            // print list of Mahasiswa yang mengontrak matkul
            cout << "\n\nlist of Mahasiswa yang mengontrak matkul:" << endl;
            // mhs matkul 1
            cout << "===========================================================" << endl;
            cout << "Mahasiswa Mengontrak " << course1.getMatkul() << ":" << endl;
            for (auto mhs : course1.getMahasiswa())
            {
                cout << "- " << mhs.getNIM() << " " << mhs.getNama() << endl;
            }
            cout << "==========================================================\n"
                 << endl;

            // print list of Dosen yang mengajar matkul tertentu
            cout << "\n\nlist of Dosen yang mengajar matkul tertentu:" << endl;
            // dosen matkul 1
            cout << ("===================================") << endl;
            cout << "Dosen yang Mengajar " << course1.getMatkul() << ":" << endl;
            for (auto dosen : course1.getDosen())
            {
                cout << "- " << dosen.getNama() << endl;
            }
            cout << ("===================================\n") << endl;

            // print list of Prodi dengan matkunya
            cout << "\n\nList of Prodi dengan matkulnya:" << endl;
            // matkul prodi 1
            cout << ("===================================") << endl;
            cout << "Program Studi " << prodi1.getProdi() << "-" << prodi1.getKode() << ":" << endl;
            for (auto course : prodi1.getCourse())
            {
                cout << "- " << course.getMatkul() << endl;
            }
            cout << ("===================================\n") << endl;

            // print listdosen of Prodi
            cout << "\n\nList of Dosen Prodi:" << endl;
            // dosen di prodi 1
            cout << ("===================================") << endl;
            cout << "Program Studi " << prodi1.getProdi() << "-" << prodi1.getKode() << ":" << endl;
            for (auto dosen : prodi1.getDosen())
            {
                cout << "- " << dosen.getNama() << endl;
            }
            cout << ("===================================\n") << endl;

            // print listmhs of Prodi
            cout << "\n\nList of Mahasiswa Prodi:" << endl;
            // mhs 1
            cout << ("===================================") << endl;
            cout << "Program Studi " << prodi1.getProdi() << "-" << prodi1.getKode() << ":" << endl;
            for (auto mahasiswa : prodi1.getMahasiswa())
            {
                cout << "- " << mahasiswa.getNIM() << " " << mahasiswa.getNama() << endl;
            }
            cout << ("===================================\n") << endl;
        }
        else if (n == 2)
        {
            int karakter = 0;
            do
            {
                cout << "Pilih Karakter :" << endl;
                cout << "1.Resyad | 2.Mila | 3.Pahri | 4.Angga | 5.Getsbi | 6.keluar" << endl;
                cout << "Pilih : ";
                cin >> karakter;
                if (karakter == 1)
                {
                    int aksi = 0;
                    cout << "pilih Aksi :" << endl;
                    cout << "1.Makan | 2.Minum | 3.Tidur" << endl;
                    cout << "Pilih : ";
                    cin >> aksi;

                    if (aksi == 1)
                    {
                        mhs1.eat();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 2)
                    {
                        mhs1.drink();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 3)
                    {
                        mhs1.sleep();
                        cout << "\n"
                             << endl;
                    }
                }
                else if (karakter == 2)
                {
                    int aksi = 0;
                    cout << "pilih Aksi :" << endl;
                    cout << "1.Makan | 2.Minum | 3.Tidur | 4. Mengajar" << endl;
                    cout << "Pilih : ";
                    cin >> aksi;

                    if (aksi == 1)
                    {
                        asp1.eat();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 2)
                    {
                        asp1.drink();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 3)
                    {
                        asp1.sleep();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 4)
                    {
                        asp1.mengajar();
                        cout << "\n"
                             << endl;
                    }
                }
                else if (karakter == 3)
                {
                    int aksi = 0;
                    cout << "pilih Aksi :" << endl;
                    cout << "1.Makan | 2.Minum | 3.Tidur | 4. Menghadiri Evaluasi" << endl;
                    cout << "Pilih : ";
                    cin >> aksi;

                    if (aksi == 1)
                    {
                        bem1.eat();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 2)
                    {
                        bem1.drink();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 3)
                    {
                        bem1.sleep();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 4)
                    {
                        bem1.hadirievaluasi();
                        cout << "\n"
                             << endl;
                    }
                }
                else if (karakter == 4)
                {
                    int aksi = 0;
                    cout << "pilih Aksi :" << endl;
                    cout << "1.Makan | 2.Minum | 3.Tidur | 4. Menghadiri Evaluasi" << endl;
                    cout << "Pilih : ";
                    cin >> aksi;

                    if (aksi == 1)
                    {
                        ec1.eat();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 2)
                    {
                        ec1.drink();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 3)
                    {
                        ec1.sleep();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 4)
                    {
                        ec1.hadirievaluasi();
                        cout << "\n"
                             << endl;
                    }
                }
                else if (karakter == 5)
                {
                    int aksi = 0;
                    cout << "pilih Aksi :" << endl;
                    cout << "1.Makan | 2.Minum | 3.Tidur | 4. Menghadiri Evaluasi" << endl;
                    cout << "Pilih : ";
                    cin >> aksi;

                    if (aksi == 1)
                    {
                        ec2.eat();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 2)
                    {
                        ec2.drink();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 3)
                    {
                        ec2.sleep();
                        cout << "\n"
                             << endl;
                    }
                    else if (aksi == 4)
                    {
                        ec2.hadirievaluasi();
                        cout << "\n"
                             << endl;
                    }
                }
            } while (karakter != 6);
        }
    } while (n != 3);

    cout << "\nTerima Kasih, Sampai jumpa kembali" << endl;

    return 0;
}