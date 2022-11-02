#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int b;
    b = 1;
    while(b == 1){
        int a;
        cout << "Enter the number of task:";
        cin >> a;
        
        
        switch (a){
            case 1:
                int k,b;
                k = 20;
                b = 38;
                
                for(int i = 0; i < k; i++){
                    cout << string(b,' ')<<string(39-b,'X')<<endl;   
                    b -= 2;
                    }
                
                break;
            
            case 2:
                double chisl,ans;
                cout << "Enter your integer number: ";
                cin >> chisl;
                
                while(chisl != 0){
                        while(chisl  < 0){
                        cout << "Enter the integer number: ";
                        cin >> chisl;
                        }
                        ans = 1;
                        for(int i = 1; i <= chisl; i++){
                                ans *= i;
                        }
                        cout <<fixed <<setprecision(0) << ans << endl;
                        cout << "Enter your integer number: ";
                        cin >> chisl;
                }
                break;

            case 3:
                double sm,year;
                double per,ans1;
                cout << "Enter initial sum of deposit: ";
                cin >> sm;
                cout << "Enter how many year you will keep in a bank your deposit: ";
                cin >> year;
                cout << "Enter percent in year: ";
                cin >> per;
                ans1 = 0.0;
                per = per / 100.;
                for(int i = 0; i < year; i++){
                        ans1 = sm + sm * per;
                        sm = ans1;
                        cout << "In the end of "<<i+1<<"year you will get "<< round(ans1 * 100) / 100<<" dollars"<<endl;
                }
                cout << "Throw "<<year<< " year you will get "<<round(ans1 * 100)/100<< " dollars!"<< endl;
                break;
            case 4:
                int price;
                int startPay;
                int years;
                float percent;
                int remainder;
                int V, VV;
                cout << "Enter the cost of flat\n";
                cin >> price;
                cout << "Enter the first contribution\n";
                cin >> startPay;
                cout << "Enter how many years you will pay\n";
                cin >> years;
                cout << "Enter the percent of year\n";
                cin >> percent;

                remainder = price - startPay;

                V = remainder * 1. / years;
                VV = remainder;
                for (int i = 0; i < years; i++)
                {

                    remainder += VV * percent / 100;
                    cout << i + 1 << " year " << V + VV * percent / 100 << endl;
                    VV -= V;

                }

                cout << "The sum of payout without the first contribution " << remainder << "\n";
               
                break;
            case 5:
                int funt,shill,pec;
                char contin;
                int funt_kon,shill_kon,pec_kon;
                contin = 'y';
                do{
                cout<<"Enter first sum:";
                cin >> funt>>shill>>pec;
                funt_kon = funt;
                shill_kon = shill;
                pec_kon = pec;
                cout<<"Enter second sum:";
                cin >> funt>>shill>>pec;
                funt_kon += funt;
                shill_kon += shill;
                pec_kon += pec;
                shill_kon += pec_kon / 12;
                pec_kon %= 12;
                funt_kon += shill_kon / 20;
                shill_kon %= 20;

                cout<< "Result: "<< funt_kon<< " "<<shill_kon<<" "<<pec_kon<<endl;
                cout << "Do you wanna continue(y/n):";
                cin >> contin;}while(contin != 'n');
                
                break;
            default:
                break;
        }
    cout << "If you dont want choose next task press 0, else 1:";
    cin >> b;
    }
}