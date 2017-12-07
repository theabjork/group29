#include "Services.h"

Services::Services()
{
}

void Services::add_employee_info(const Employee& employee){

    employee_repo.add_to_file(employee);
}
