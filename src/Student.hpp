#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include "User.hpp"
#include "Course.hpp"
class Student : public User
{
	private:
		int enrollmentYear;
		int enrollmentSemester;
		Course &course;
	public:
		Student();
		~Student();
		void	setCourse(Course& in);
		void	getCourse(Course& out);
		void	setEnrollmentYear(int in);
		int		getEnrollmentYear(void);
		void	setEnrollmentSemester(int in);
		int		getEnrollmentSemester(void);
};




#endif /* STUDENT_HPP_ */
