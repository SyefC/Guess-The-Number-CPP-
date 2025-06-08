#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

auto nice = 1;
int i = 0;
int num = 0;

using namespace std;

string low(string str){
while(str[i] != '\0'){
    str[i] = tolower(str[i]);
    i++;
}
i = 0;
return str;
}

void play(){
system("cls");
        srand(time(0));
    int random = 1 + rand() % 100;
    while(1){
        cout << "Enter a Number from 1 to 100: " << endl;
cin >> num;
if(num > random){
    system("cls");
    cout << "\033[32mtoo high!\033[0m" << endl;
}
else if(num < random){
    system("cls");
    cout << "\033[31mtoo low!\033[0m" << endl;
}
else if(num == random){
    system("cls");
    cout << "\033[33mYou Win!\033[0m" << endl;
    break;
}
else{
    cout << "error!" << endl;
    break;
}
 }
}

string in;

int main(){
    cout << "Would you like to play guess the number? (type yes or no)" << endl;
    cin >> in;
    in = low(in);
    if(in == "yes"){
play();
    }
    else if(in == "no"){
cout << "ok :(" << endl;
    }
}