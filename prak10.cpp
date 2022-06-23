#include <iostream>
using namespace std; 

class Mhs{
  public:
    void input();
    void output();
    void proses();
    string nama,nim;
    string inama,inim;
    Mhs *next;
    Mhs *temp;
    Mhs *kepala=0;

    
  int bnyk_data;

};

void Mhs::input(){
  cout<<"====== DATA MAHASISWA ======";
  cout<<"\nmasukkan banyak data :"; cin>>bnyk_data;
  for(int i=0; i<bnyk_data; i++){
    temp= new Mhs;  
    cout<<"mahasiswa ke- "<<i+1<<endl;
    cout<<"nama = ";
    cin>>inama;
    cout<<"nim = ";
    cin>>inim;
    proses();
  }
}
void Mhs::proses(){
  temp->nama=inama;
  temp->nim=inim;
  temp->next=kepala;
  kepala=temp;
}
void Mhs::output(){
  Mhs *cetak=kepala;
  while( cetak != 0){
    cout << "\nNama Mahasiswa: " << cetak -> nama;
    cout << "\nNIM Mahasiswa: " << cetak -> nim;
    cetak = cetak -> next;
  }
}


int main(){
  Mhs simpul;
  simpul.input();
  simpul.output();
  return 0;
}
