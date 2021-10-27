#include <iostream>
#include <fstream>
#include <string>

void readfile(std::string dataname){
    int a;
    int b;
    int c;
    std::ifstream infile(dataname);
    std::ofstream fout("datensumme.txt");
    fout <<"Sum"<<std::endl;
    while(infile>>a>>b){
        c=a+b;
        fout <<c<<std::endl;

    }
    fout.close();
}
int main(){
    std::string dataname="daten.txt";
    readfile(dataname);

    
}