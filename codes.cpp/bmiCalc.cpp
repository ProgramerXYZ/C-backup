#include<iostream>
#include<cmath>
using namespace std; 

int main(){
    // var height
    float Height ;
    // input of height
    cout<<"Enter your height in foot."<<endl<<":";
    cin>>Height;
    // var weight
    float Weight;
    // input of weight
    cout<<"Enter your weight in kilograms"<<endl<<":";
    cin>>Weight;

    //calc
    float HEIGHT;
    HEIGHT = Height * 0.3048;
    cout<<HEIGHT;
    float bmi;
    bmi = Weight / pow(HEIGHT, 2);
    float BMI;
    BMI = round(bmi * 1000.0f) / 1000.0f;

    cout<<"Your bmi is "<<BMI<<endl;

    if (BMI>=18.5 && BMI<=25.0)
    {
        cout<<"Your weight is normal."<<endl;
       
    }
    if (BMI<=18.5)
    {
        cout<<"You are underweight!"<<endl; 
    }
    else if (BMI>= 25)
    {
        cout<<"You are overweight!"<<endl;
    
    }
    cout<<"Thanks! for using our BMI calcutor✨";

        


    return 0;

}


