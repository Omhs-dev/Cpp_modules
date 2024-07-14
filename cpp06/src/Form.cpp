#include "../Includes/Form.hpp"

Form::Form(std::string &name, int gradeSign, int gradeToExecute)
{
    this->_name = name;
    this->_sign = false;
    this->_gradeSign = gradeSign;
    this->_gradeToExecute = 0;
    
}