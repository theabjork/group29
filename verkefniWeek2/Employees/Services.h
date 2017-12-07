#ifndef SERVICES_H
#define SERVICES_H
#include "Repositories.h"

class Services
{
    public:
        Services();
        void add_employee_info(const Employee& employee);
    private:
        Repositories employee_repo;
};

#endif // SERVICES_H
