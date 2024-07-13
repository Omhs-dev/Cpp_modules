#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <vector>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    
    Bureaucrat();
public:
    Bureaucrat(const std::string &name, int grande);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    ~Bureaucrat();
    
    std::string getName() const;
    int getGrade() const;
    
    void incrementGrades();
    void decrementGrades();
};


#endif