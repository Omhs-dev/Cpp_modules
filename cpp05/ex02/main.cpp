#include "Includes/Bureaucrat.hpp"
#include "Includes/Form.hpp"

int main(void) {
    // Case 1: Bureaucrat tries to sign a form but has a too low grade
    try {
        Bureaucrat bureaucrat("Bob", 11);
        Form form("FormA", 1, 2);

        std::cout << form << std::endl;
        bureaucrat.signForm(form);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
