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
    
}