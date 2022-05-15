#include <iostream>
using namespace std;

void utama();
void ubah_profil();
void cek_profil();
int saldo, pilih;
string username,pass, user,user_pass;

void menu();

void login(){
    cout << endl;
   cout <<"Masukkan username: "; cin>>user;
   cout <<"Masukkan password: "; cin>>user_pass;
   if (user == username && pass == user_pass)
   {
       cout << "Login berhasil, pilih menu di bawah ini" << endl;
       saldo = saldo + 1000000;
       menu();
   } else {
       cout << "Username atau password salah atau tidak terdaftar" << endl;
       utama();
   }
}



void menu(){
    cout << endl;
    int pilih;
    cout << "1.Cek saldo" << endl;
    cout << "2. Topup" << endl;
    cout << "3. Transfer" << endl;
    cout << "4. Pembayaran" << endl;
    cout << "5. Profil " << endl;
    cout << "6. Logout" << endl;
    cout << " Pilih = ";cin>>pilih;
    switch (pilih)
    {
        case 1:{
            cout << endl;
            
            cout << "Saldo anda saat ini adalah Rp." << saldo << endl;
            menu();
            break;
        }
        case 2:{
            cout << endl;
            
            cout<< "1. Lanjutkan topup" << endl;
            cout<< "2. kembali" << endl;
            cout << "Pilih = "; cin >> pilih;
            if (pilih == 1)
            {
                int topup;
                cout << "Masukkan nominal Rp.";cin>>topup;
                saldo = saldo + topup;
                cout << "Saldo anda saat ini Rp." << saldo << endl;
                menu();
            } else if (pilih == 2)
            {
                menu();
            }
        }
        case 3:{
            cout << endl;
            
            cout << "1. Lanjutkan transfer" << endl;
            cout << "2. Kembali" << endl;
            cout << "Pilih = "; cin >> pilih;
            if (pilih == 1)
            {
                int id;
                int transfer;
                cout << "Masukkan id penerima: ";cin>>id;
                cout << "Masukkan nominal Rp.";cin>>transfer;
                saldo = saldo - transfer;
                cout << "Transfer Berhasil" << endl;
                cout << "No. ID penerima: " << id << endl;
                cout << "Nominal yg anda transfer Rp." << transfer << endl;
                cout << "Saldo anda saat ini Rp." << saldo << endl;
                cout << endl;
                menu();
            } else if (pilih == 2)
            {
                menu();
            }
        }
        case 4:{
            cout << endl;
            
            cout << endl;
            cout <<"1. Listrik" << endl;
            cout <<"2. Air" << endl;
            cout <<"3. Belanja online" << endl;
            cout << "Pilih = "; cin >> pilih;
            switch (pilih)
            {
                case 1:{
                    
                    int tagihan = 150000;
                    int id;
                    string lanjut;
                    cout << "Masukkan nomor pelanggan: ";cin>>id;
                    cout << "Nomor pelanggan anda: " << id << endl;
                    cout << "Tagihan listrik anda Rp. " << tagihan << endl;
                    cout << "Lanjutkan pembayaran? (y/n)"; cin>> lanjut;
                    if (lanjut == "y")
                    {
                        saldo = saldo - 150000;
                        cout <<"Pembayaran anda berhasil" << endl;
                        cout <<"Sisa saldo anda Rp." << saldo << endl;
                        menu();
                    } else {
                        menu();
                    }
                    break;
                }
                case 2:{
                    cout << endl;
                    
                    int tagihan = 100000;
                    int id;
                    string lanjut;
                    cout << "Masukkan nomor pelanggan: ";cin>>id;
                    cout << "Nomor pelanggan anda: " << id << endl;
                    cout << "Tagihan air anda Rp. " << tagihan << endl;
                    cout << "Lanjutkan pembayaran? (y/n)"; cin>> lanjut;
                    if (lanjut == "y")
                    {
                        saldo = saldo - tagihan;
                        cout <<"Pembayaran anda berhasil" << endl;
                        cout <<"Sisa saldo anda Rp." << saldo << endl;
                        menu();
                    } else {
                        menu();
                    }
                    break;
                }
                case 3:{
                    cout << endl;
                    
                    int tagihan = 200000;
                    int id;
                    string lanjut;
                    cout << "Masukkan nomor pelanggan: ";cin>>id;
                    cout << "Nomor pelanggan anda: " << id << endl;
                    cout << "Tagihan belanja online anda Rp. " << tagihan << endl;
                    cout << "Lanjutkan pembayaran? (y/n)"; cin>> lanjut;
                    if (lanjut == "y")
                    {
                        saldo = saldo - tagihan;
                        cout <<"Pembayaran anda berhasil" << endl;
                        cout <<"Sisa saldo anda Rp." << saldo << endl;
                        menu();
                    } else {
                        menu();
                    }
                    break;
                }
            default:
                break;
            }
        }
        case 5:{
            cout << endl;
            
            cout <<"1. Cek profil" << endl;
            cout <<"2. Ubah profil" << endl;
            cout << "3. Kembali" << endl;
            cout << "Pilih = "; cin >> pilih;
            switch (pilih)
            {
                case 1:{
                    
                    cek_profil();
                    break;
                }
                case 2: {
                    
                    ubah_profil();
                    break;
                }
                case 3: {
                    
                    menu();
                }
                
            default:
                break;
            }
        }
        case 6:{
            cout << endl;
            
            utama();
        }
    
    default:
        break;
    }
}

void cek_profil () {
   cout << endl;
    cout << "=====Cek Profil=====" << endl;
    cout << "1. Cek Username" << endl;
    cout << "2. Cek Password" << endl;
    cout << "3. Kembali" << endl;
    cout << "Pilih = ";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        cout << endl;
        cout << "=====Cek Username=====" << endl;
        cout << "Username Anda : " << username << endl;
        cek_profil();
        break;
    case 2:
        cout << endl;
        cout << "=====Cek Password=====" << endl;
        cout << "Password Anda : " << user_pass << endl;
        cek_profil();
        break;
    case 3:
        menu();
        break;
    }
}

void ubah_profil(){
    cout << endl;
    string lanjut;
    cout <<"1. Ubah username" << endl;
    cout <<"2. Ubah password" << endl;
    cout <<"3. Kembali" << endl;
    cout << "Pilih = ";cin>>pilih;
    switch (pilih)
    {
        case 1:{
            cout << endl;
            
            cout << endl;
            cout<< "Masukkan username baru: "; cin >> user;
            cout << "Lanjutkan perubahan? (y/n): ";cin>>lanjut;
            if (lanjut == "y")
            {
                username = user;
                cout << "Username berhasil diubah" << endl;
                menu();
            } else {
                cout << "Username gagal diubah" << endl;
                menu();
            }
            break;
        }
        case 2:{
            cout << endl;
            
            cout << endl;
            cout<< "Masukkan password baru: "; cin >> user_pass;
            cout << "Lanjutkan perubahan? (y/n): ";cin>>lanjut;
            if (lanjut == "y")
            {
                pass = user_pass;
                cout << "Username berhasil diubah" << endl;
                menu();
            } else {
                cout <<"Password gagal diubah" << endl;
                menu();
            }
            break;
        }
        case 3:{
            cout << endl;
            
            menu();
            break;
        }
    
    default:
        break;
    }
}

void utama()
{
    cout << endl;
    int pilih;

    cout <<"1. Masuk " << endl;
    cout <<"2. Daftar" << endl;
    cout <<"3. Keluar " << endl;
    cout <<"Pilih = ";cin>>pilih;
    switch (pilih)
    {
        case 1:{
            cout << endl;
            
            login();
            break;
        }
        case 2:{
            cout << endl;
            
            cout << "Selamat datang di menu daftar" << endl;
            cout << "Username : ";cin>>username;
            cout << "Password : ";cin>>pass;
            cout << "Terimakasih silahkan login" << endl;
            utama();
            break;
        }
        case 3:{
            cout << endl;
            
            cout << "Sampai jumpa :)" << endl;
            break;
        }
        default:
            break;
    }
}

int main()
{
    cout << endl;
    
    utama();
    return 0;
}
