#include <iostream>
using namespace std;

int main(){

    int number;
    
    //Mulai Program
    int a;
    int b;
    
    
    
    
    //Menu
    
    cout << "Menu" << endl;
    
    cout << "\n1.Penambahan Dan Pengurangan" << endl;
    cout << "2.Keluar" << endl;
    cout << "Pilih Salah Satu: \n";
    cin >> a;
    
    
    
    
    if (a == 1) //Penambahan Dan Pengurangan
    
    
    {
        
        
        //Menu
        
    
    cout << "Penambahan Dan Pengurangan \n" << endl;
cout << "Masukan Nilai Contohnya 1+6 \n" << endl;
cout << "Lalu Klik Enter \n" << endl;


//Mulai Program


    cout << "Masukan Nilai: ";  //Masukan Nilai
    cin >> a;
    cin >> b;

//Jawaban

    cout << "Jawaban: ";
    cout << a + b << endl;

//Jawaban Kebalikanya


    cout << "Jawaban Kebalikanya: ";
    cout << a - b << endl;
    
    cout << "\nTerima Kasih" << endl;
    }
    
    
    if(a == 2){
      
   cout << "\nTerima Kasih" << endl;
    }
    return 0;
}


