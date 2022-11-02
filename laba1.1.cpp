#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of task:";
    cin >> n;
    switch (n){
        case 1:
            cout<<"Отрывок из стихотворения Владимира Маяковского 'Надоело'\n\n";
            cout<<"\tДля истории\n";
            cout<<"\tКогда все расселятся в раю и в аду, \n";
            cout<<"\tземля итогами подведена будет —\n";
            cout<<"\tпомните: \n";
            cout<<"\tв 1916 году\n";
            cout<<"\tиз Петрограда исчезли красивые люди."<< endl;
            break;
        case 2:
            float temp,ans;
            cout << "Enter your temperature in Celsius:";
            cin >> temp;
            ans = temp * 9/5 + 32;
            cout << "Temperature in fahrenheit equal: "<< ans << endl;
            break;
        case 3:
            int a,b,c,d;
            int chisl, znam,i;
            char s;
            cout << "Enter first fraction:";
            cin >> a >> s >> b;
            cout << "Enter second fraction:";
            cin >> c >> s >> d;
            chisl = a * d + c * b;
            znam = b * d;
            i = 1;
            while (i < min(chisl,znam)){
                if ((chisl %  i == 0) and (znam % i == 0)){
                    chisl = chisl / i;
                    znam = znam / i;
                }
                i++;
            }
            cout << chisl << "/" << znam  << endl;
            break;
        case 4:
            int a1,c1;
            int ans1,ans2, count;
            float b1;
            cout << "Enter the number of pounds:";
            cin >> a1;
            cout << "Enter the number of shillings:";
            cin >> b1;
            cout << "Enter the number of pence:";
            cin >> c1;
            cout << "£" <<  a1+(b1*12+c1)/240;
            break;
        case 5:
            int fon, shill;
            double pen, shi, pen1, pen2, pen3;
            char toch;
            cout << "Введите десятичные фунты: ";
            cin >> fon >> toch >> pen;
            pen = 2.4 * pen;
            pen2 = pen / 12;
            shill = floor(pen/12);
            pen1 = pen2 - shill;
            pen3 = round(pen1 * 12);
            cout << "Эквивалентная сумма в старой форме записи: " << fon << "." << shill << "." << pen3;
            break;
        default:
            cout << "The number of this task is not found!" << endl;
    }
    return 0;
}