#include "Repositories.h"

Repositories::Repositories()
{
    //ctor
}

void Repositories::add_to_file(const Employee& employee){

    ofstream fout;
    fout.open("salaryFile.txt", ios::app);
    if(fout.is_open()){
        fout << employee;
        fout.close();
    }

}
