#ifndef MAX_HPP
#define MAX_HPP

template <typename T>
const T& max(const T &a, const T &b) {
    return (a > b) ? a : b;
}

#endif
