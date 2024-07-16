#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

int main(void) {
    try {
        Bureaucrat bureaucrat("Bob", 1);
        Form form("FormA", 1, 2);
		
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        // std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

// using std::cout;
// using std::cerr;
// using std::endl;

// int main(void)
// {
// 	cout << "---------- GENERAL -----------" << endl;
// 	{
// 		// Constructor
// 		Form	a("Contract", 42, 42);
// 		// Copy Constructor
// 		Form	b(a);
// 		// Copy assignment
// 		Form	c = b;

// 		// ostream overload
// 		cout << "a:\n" << a << endl;
// 		cout << "b:\n" << b << endl;
// 		cout << "c:\n" << c << endl;
// 	}

// 	cout << endl;
// 	{
// 		cout << "***** TEST 1: Grade too low *****" << endl;
// 		try
// 		{
// 			Form	a("A", LOWEST_GRADE + 1, LOWEST_GRADE - 1);
// 			cout << a << endl;
// 		}
// 		catch (std::exception& e) {
// 			cout << e.what() << endl;
// 		}

// 		cout << endl;
// 		cout << "***** TEST 2: Grade too high *****" << endl;
// 		try
// 		{
// 			Form	b("B", HIGHEST_GRADE - 1, 42);
// 			cout << b << endl;
// 		}
// 		catch (std::exception& e) {
// 			cout << e.what() << endl;
// 		}

// 		cout << endl;
// 		cout << "****** TEST 3: Able to sign all forms ******" << endl;
// 		try
// 		{
// 			Bureaucrat	s1("Student1", HIGHEST_GRADE);
// 			cout << s1 << endl;

// 			Form	c1("C1", HIGHEST_GRADE, 2);
// 			Form	c2("C2", 90, LOWEST_GRADE);
// 			cout << c1 << endl;
// 			cout << c2 << endl;
			
// 			cout << "--- Signature ---" << endl;

// 			s1.signForm(c1);
// 			s1.signForm(c2);
			
// 			cout << endl;
			
// 			cout << c1 << endl;
// 			cout << c2 << endl;
// 		}
// 		catch (std::exception& e) {
// 			cout << e.what() << endl;
// 		}

// 		cout << endl;
// 		cout << "***** TEST 4: Unable to sign *****" << endl;
// 		try
// 		{
// 			Bureaucrat	s2("Student2", LOWEST_GRADE);
// 			cout << s2 << endl;

// 			Form	c3("C3", HIGHEST_GRADE, 2);
// 			cout << c3 << endl;


// 			s2.signForm(c3);
// 			cout << endl;
// 			cout << c3 << endl;
// 		}
// 		catch (std::exception& e) {
// 			cout << e.what() << endl;
// 		}
		
// 	cout << "\n---------- TESTS FINISHED -----------" << endl;
// 	}
// 	return EXIT_SUCCESS;
// }
