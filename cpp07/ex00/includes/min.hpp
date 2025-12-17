#ifndef MIN_HPP
#define MIN_HPP

template <typename T>
const T& min(const T &a, const T &b) {
    return (a < b) ? a : b;
}

#endif
