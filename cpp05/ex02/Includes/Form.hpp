#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool        _sign;
        const int   _gradeSign;
        const int   _gradeToExecute;
        
    public:
        Form(const std::string &name, int gradeSign, int gradeToExecute);
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        ~Form();
        
        std::string getName() const;
        bool        getSigned() const;
        int         gradeSign() const;
        int         gradeToExecute() const;
        
        void        beSigned(const Bureaucrat bureaucrat);
        
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade too low !";
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade too high !";
                }
        };
        
};

std::ostream &operator<<(std::ostream &o, const Form &copy);

#endif