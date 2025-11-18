/*
BMI results from dividing the individual's mass (in kilograms) by the square of height (in meters).
by the square of the height (in meters). The body mass index is
an indicator of a person's weight in relation to his or her height.
BMI classification:
(a) Less than 16: Entry criteria.
(b) 16 to 16.9: underweight.
(c) 17 to 18.4: low weight.
(d) 18.5 to 24.9: normal weight.
(e) 25 to 29.9: overweight.
(f) 30 to 34.9: premorbid obesity.
(g) 40 to 45: morbid obesity.
(h) Greater than 45: hypermorbid obesity.
Write an algorithm that given a person's weight in pounds (1 lb =
0, 453592 Kg) and his height in centimeters, calculates his BMI and indicates as output the weight in kilograms, the weight in kilograms, the height in centimeters and the height in centimeters.
the weight in kilograms, the person's BMI value and the category in which he/she was classified.
in which he/she was classified
*/

#include <iostream>

using namespace std;

int main(){
    float weight_lb, height_cm;
    float BMI;

    cout <<"Enter the person's weight in pounds: "<<endl;
    cin >> weight_lb;

    cout <<"Enter the height in centimeters: "<<endl;
    cin >> height_cm;

    float weight_kg = weight_lb * (1 / 2.2046);
    float height_m = height_cm * (1.0 / 100);

    BMI = weight_kg / (height_m * height_m);

    if(BMI<16){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"Does not qualify";
    }
    else if(BMI>=16 && BMI<=16.9){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"underweight";
    }
    else if(BMI>=17 && BMI<=18.4){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"Low weight";
    }
    else if(BMI>=18.5 && BMI<=24.9){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"normal weight";
    }
    else if(BMI>=25 && BMI<=29.9){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"overweight";
    }
    else if(BMI>=30 && BMI<=34.9){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"premorbid obesity";
    }
    else if(BMI>=40 && BMI<=45){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"morbid obesity";
    }
    else if(BMI>45){
        cout <<"Weight in kg is "<<weight_kg<<endl;
        cout <<"BMI value is "<<BMI<<endl;
        cout <<"hypermorbid obesity";
    }
    return 0;
}