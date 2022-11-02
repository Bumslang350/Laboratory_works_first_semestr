#include <iostream>

using namespace std;

struct timee{
    int hours;
    int minutes;
    int seconds;
};

void hms_to_secs(int hours,int minutes,int seconds){
    long totalsecs;
    totalsecs = hours * 3600 + minutes * 60 + seconds;
    cout << "In "<< hours<<" hours "<< minutes<<" minutes "<<seconds<<" seconds - "<<totalsecs<<" seconds "<<endl;
}

long time_to_secs(int hours,int minutes,int seconds){
    long totalsecs;
    totalsecs = hours * 3600 + minutes * 60 + seconds;
    return totalsecs;
}

void secs_to_time(long seconds,struct timee){
    timee t;
    t.hours = seconds / 3600;
    t.minutes = (seconds - t.hours * 3600) / 60;
    t.seconds = seconds % 60;
    cout << "Total seconds - "<< seconds << " It is equal: "<< t.hours<<":"<<t.minutes<<":"<<t.seconds<<endl;

}

void swap(int &a,int &b){
    int c;
    c = a;
    a = b;
    b = c;
}

void swapT(timee &four, timee &five) {
  timee help;
  help = four;
  four = five;
  five = help;
}

int func_shet();



int main(){
    int b;
    b = 1;
    while(b == 1){
        int a;
        cout << "Enter the number of task:";
        cin >> a;
        
        
        switch (a){
            case 1:
                int hs,mt,secs;
                int contin;
                contin = 1;
                while(contin == 1){
                    cout << "Enter how much hours, minutes and seconds you have: ";
                    cin >> hs >> mt >> secs;
                    hms_to_secs(hs,mt,secs);
                    cout << "If you want to continue enter 1, else 0: ";
                    cin >> contin;
                }
                
                break;
            
            case 2:
                timee t1;
                timee t2;
                char s;
                long totsecs;

                cout << "Enter how much hours,minutes,seconds(h:m:s): ";
                cin >> t1.hours >> s>> t1.minutes >> s >> t1.seconds;
                totsecs = time_to_secs(t1.hours,t1.minutes,t1.seconds);
                cout << t1.hours<< ":"<< t1.minutes<<":" << t1.seconds<< ":"<< " It is equal: "<< totsecs<< " seconds"<<endl;
                secs_to_time(totsecs,t2);
                
                
                break;

            case 3:
                int a,b;
                cout << "Enter two integer: ";
                cin >>a>>b;
                cout << "a == "<<a<< " b == "<<b<<endl;
                swap(a,b);
                cout << "a == "<<a<< " b == "<<b<<endl;
               
                break;
            case 4:
                timee four, five; char Ch;
                cout << "Enter the first time(H:M:S): "; cin >> four.hours >> Ch >> four.minutes >> Ch >> four.seconds;
                cout << "Enter the second time(H:M:S): "; cin >> five.hours >> Ch >> five.minutes >> Ch >> five.seconds;
                swapT(four, five);
                cout << "First time: " << four.hours << ":" << four.minutes << ":" << four.seconds<< endl;
                cout << "Second time: " << five.hours << ":" << five.minutes << ":" << five.seconds << endl;
                break;
            case 5:
                int count;
                cout <<"Enter the count(count > 10): ";
                cin >> count;
                for(int i = 0; i < count; i++){
                    cout << "Before this time func was called; "<<func_shet() << " time"<<endl;
                }
                
               
                break;
            default:
                break;
        }
    cout << "If you dont want choose next task press 0, else 1:";
    cin >> b;
    }
}

int func_shet(){
    static int j = -1;
    j++;
    return j;
}