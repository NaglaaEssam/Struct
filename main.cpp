#include <iostream>

using namespace std;
struct phone{
    int code ,exchange,number;
};

int main()
{
    //char ch1,ch2;
    phone num;
    cout<<"enter the code : ";
    cin>>num.code;
    if(num.code>3){
        cout<<"enter the code again : ";
        cin>>num.code;
    }
    cout<<"enter the exchange : ";
    cin>>num.exchange;
    if(num.exchange>3||num.exchange<3){
        cout<<"enter the exchange again : ";
        cin>>num.exchange;

    }
    cout<<"enter the number : ";

    cin>>num.number;
     if(num.number<=4){
        cout<<"enter the number again : ";
        cin>>num.exchange;
     }

    cout<<"the phone number is :( "<<num.code<<")"<<" " <<num.exchange<<"_"<<num.number<<endl;






    return 0;
}
