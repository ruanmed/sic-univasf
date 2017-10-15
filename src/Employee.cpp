#include "Employee.hpp"
Employee::Employee(): User() // chama construtor de User
{
	siape = 0;
}
Employee::~Employee()
{
	//adieu
}
void	Employee::setSiape(int in)
{
	siape = in;
}
int		Employee::getSiape(void)
{
	return siape;
}
