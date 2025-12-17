#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

#include "Form.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
        
        Bureaucrat();
    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        
        void incrementGrades();
        void decrementGrades();
        
        void signForm(Form &form);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too high !";
                }
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too low !";
                }
        };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &copy);

#endif