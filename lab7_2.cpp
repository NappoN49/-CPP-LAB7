#include<iostream>
using namespace std;

int main(){
    string trash;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    string name;
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.\nFahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<name<<": ";
    int ID;
    cin>>ID;
    getline(cin,trash);
    cout<<"Fahsai: I think you may be GEAR "<< (ID/10000000)-12 <<". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    string cinema;
    getline(cin,cinema);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    string time;
    getline(cin,time);
    cout<<"Fahsai: "<<time<<"....that is OK!!! I'm looking forward to watching "<<cinema<<" with you.\n";
    cout<<name<<": ";
    getline(cin,trash);
    cout<<"Fahsai: 555+ see you "<<time<<". Bye Bye \\(^ ^)/";

    return 0;
}
