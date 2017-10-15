#include "Student.hpp"
Student::Student(): User()
{
	enrollmentSemester = 0;
	enrollmentYear = 0;
}
void	Student::setCourse(Course& in)
{
	course = in;
}
void	Student::getCourse(Course& out)
{
	out = course;
}
Student::~Student()
{

}
void	Student::setEnrollmentYear(int in)
{
	enrollmentYear = in;
}
int		Student::getEnrollmentYear(void)
{
	return enrollmentYear;
}
void	Student::setEnrollmentSemester(int in)
{
	enrollmentSemester = in;
}
int		Student::getEnrollmentSemester(void)
{
	return enrollmentSemester;
}
