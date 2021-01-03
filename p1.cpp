#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;



string  getBmiCategory(const double bmi){
    string value = "";
    if(bmi > 0 && bmi <= 18.5)
        value = "Underweight";
    else if (bmi <= 23)
        value = "Normal Range";
    else if (bmi <= 25) 
        value = "Overweight-At Risk";
    else if (bmi <= 30) 
        value = "Overweight-Moderately Obese";
    else if (bmi > 30) 
        value = "Overweight-Severely Obese";
    
    return value;
}

int main(){
    string name;double weight, height;
    cout << "Enter your Name" << endl;
    getline(cin,name);

    cout <<  "Enter your weight(kg) and height(meter)" << endl;
    cin >>  weight >> height;

    double bmi = weight/(height * height);

    cout << name <<", Your BMI is " <<fixed<<setprecision(1)<< bmi <<", you are "<< getBmiCategory(bmi)<< endl;


    // cout << getBmiCategory(18);

    return 0;
}
