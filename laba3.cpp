#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

struct employee{
    int number_of_employee;
    float salary_of_employee;
};
struct fraction{
    int f1;
    int f2;
};
struct timee{
    int hours;
    int minutes;
    int seconds;
};

int main(){
    int b;
    b = 1;
    while(b == 1){
        int a;
        cout << "Enter the number of task:";
        cin >> a;
        
        
        switch (a){
            case 1:
                employee first;
                employee second;
                employee third;
                int n;
                float sal;
                for(int i = 1; i < 4 ; i++){
                    cout << "Enter the number of " << i << " employee: ";
                    cin >> n;
                    
                    cout << "Enter the sallary of " << i << " employee: ";
                    cin >> sal;
                    if(i == 1){
                        first.number_of_employee = n;
                        first.salary_of_employee= sal;
                    }
                    if(i == 2){
                        second.number_of_employee = n;
                        second.salary_of_employee = sal;
                    }
                    else{
                        third.number_of_employee = n;
                        third.salary_of_employee = sal;
                    }
                   
                        
                    
                }
                cout<<""<<endl;
                cout << "The number of first employee: "<< first.number_of_employee<<endl;
                cout << "The sallary of first employee: "<<first.salary_of_employee<<endl;
                cout << ""<<endl;
                cout << "The number of second employee: "<< second.number_of_employee<<endl;
                cout << "The sallary of second employee: "<< second.salary_of_employee<<endl;
                cout<< ""<<endl;
                cout << "The number of third employee: "<< third.number_of_employee<<endl;
                cout << "The sallary of third employee: "<< third.salary_of_employee<<endl;
                
                
                break;
            
            case 2:
                char s;
                int k;
                k = 1;
                while(k == 1){
                    cout << "Enter first letter of the proffession: ";
                    cin >> s;

                    switch (s){
                        case 'l':
                            cout <<"Correct proffession: "<< "laborer";
                            break;
                        case 's':
                            cout << "Correct proffession: "<< "secretary";
                            break;
                        case 'm':
                            cout <<"Correct proffession: "<< "manager";
                            break;
                        case 'a':
                            cout <<"Correct proffession: "<< "accountant";
                            break;
                        case 'e':
                            cout <<"Correct proffession: "<< "executive";
                            break;
                        case 'r':
                            cout <<"Correct proffession: "<< "researcher";
                            break;
                        default:
                            cout << "This letter is not definded";
                            break;
                    }
                    cout << "" << endl;
                    cout << "If you want to try again enter 1, else 0: ";
                    cin >> k;
                }
                break;

            case 3:
                fraction ff;
                fraction sf;
                char s1;
                int i;
                int chisl, znam;
                cout << "Enter first fraction:";
                cin >> ff.f1 >> s1 >> ff.f2;
                cout << "Enter second fraction:";
                cin >> sf.f1>> s1 >> sf.f2;
                chisl = ff.f1 * sf.f2 + sf.f1 * ff.f2;
                znam = ff.f2 * sf.f2;
                i = 1;
                while (i < min(chisl,znam)){
                    if ((chisl %  i == 0) and (znam % i == 0)){
                        chisl = chisl / i;
                        znam = znam / i;
                    }
                    i++;
                }
                if(chisl % znam == 0){
                    cout << chisl / znam << endl;
                }
                else{
                    cout << chisl << "/" << znam  << endl;
                }    
                break;
            case 4:
                timee tt;
                long totalsecs;
                cout << "Enter the time(hours minutes seconds): ";
                cin >> tt.hours >> tt.minutes >> tt.seconds;
                totalsecs = tt.hours * 3600 + tt.minutes * 60 + tt.seconds;
                cout << totalsecs<<endl;
                break;
            case 5:
                timee t1;
                timee t2;
                timee t3;
                char st;
                long totalsecs1;
    
                totalsecs1 = 0;
                cout << "Enter the first time(h:m:s): ";
                cin >> t1.hours>>st>>t1.minutes>>st>>t1.seconds;
                cout << "Ente the second time(h:m:s): ";
                cin >> t2.hours>>st>>t2.minutes>>st>>t2.seconds;
                totalsecs1 += t1.hours * 3600 + t1.minutes*60 + t1.seconds + t2.hours*3600 + t2.minutes*60 + t2.seconds;
                t3.hours = totalsecs1 / 3600;
                t3.minutes = (totalsecs1 - t3.hours * 3600) / 60;
                t3.seconds = totalsecs1 % 60;
                cout << t3.hours << ":"<<t3.minutes<<":"<<t3.seconds<<endl;
                break;
            default:
                break;
        }
    cout << "If you dont want choose next task press 0, else 1:";
    cin >> b;
    }
}