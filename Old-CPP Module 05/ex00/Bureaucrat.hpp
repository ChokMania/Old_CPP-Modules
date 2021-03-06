#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	std::string getName(void) const;
	int getGrade(void) const;

	void incrementGrade(void);
	void decrementGrade(void);

private:
    Bureaucrat();
    std::string const _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif