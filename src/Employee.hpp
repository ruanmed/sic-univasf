#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_
#include "User.hpp"
class Employee : public User
{
	private:
		int siape;
	public:
		Employee();
		~Employee();
		void	setSiape(int in);
		int		getSiape(void);
};
#endif /* EMPLOYEE_HPP_ */
