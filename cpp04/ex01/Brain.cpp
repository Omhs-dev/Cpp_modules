#include "Brain.hpp"

Brain::Brain() {
    // Initialize the array of ideas
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "Idea " + std::to_string(i + 1);
    }
}

Brain::~Brain() {}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    } else {
        return "Invalid Index";
    }
}
