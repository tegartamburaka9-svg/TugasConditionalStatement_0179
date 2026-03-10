#include <iostream>
#include <string>
using namespace std;

void inputData (float &berat,float &tinggi){
    cout<< "masukan berat badan = ";
    cin>> berat;
    cout<< "masukan tinggi badan = ";
    cin>> tinggi;
}

float hitungBMI(float berat,float tinggi){
    return berat/(tinggi*tinggi);
}

string Status_BMI(float BMI){
    if (BMI < 18.5)
        return "berat badan kurang";
    else if(BMI < 25)
        return "berat badan normal";
         else if(BMI < 30)
        return "berat badan kelebihan";
    else
        return "obesitas";
}
int main(){
    float berat,tinggi,BMI;
    
    cout << "selamat datang mahasisawa kelas A 2025" <<endl;

    inputData(berat,tinggi);

    BMI = hitungBMI(berat,tinggi);

    cout <<"\n--hasil--"<<endl;
    
   cout << "BMI anda = "<<BMI<<" ,status = "<<Status_BMI(BMI)<<endl;

   return 0;

}


