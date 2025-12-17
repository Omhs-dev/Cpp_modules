#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
public:
    Brain();
    ~Brain();
    std::string getIdea(int index) const;

private:
    std::string ideas[100];
};

#endif 
