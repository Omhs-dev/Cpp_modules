#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int main(void) {
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
