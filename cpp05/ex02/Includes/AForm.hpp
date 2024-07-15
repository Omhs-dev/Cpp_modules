#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool        _sign;
        const int   _gradeSign;
        const int   _gradeToExecute;
        
    public:
        AForm(const std::string &name, int gradeSign, int gradeToExecute);
        AForm(const AForm &copy);
        AForm &operator=(const AForm &copy);
        ~AForm();

        std::string getName() const;
        bool        getSigned() const;
        int         gradeSign() const;
        int         gradeToExecute() const;
        
        void        beSigned(const Bureaucrat bureaucrat);
        
        virtual     void execute(Bureaucrat const &executor) const = 0;
        
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
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Form not signed !";
                }
        };
};

std::ostream &operator<<(std::ostream &o, const AForm &copy);

#endif