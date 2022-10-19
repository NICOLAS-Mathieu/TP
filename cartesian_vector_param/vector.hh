#pragma once

#include <ostream>
#include <initializer_list>
#include "config.h"
using namespace std;

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(float u, float v);
    Vector(initializer_list<value> l);

    // possibly more

// Public Member functions here
    Vector operator+(const Vector& rhs) const;
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector& operator+=(const value k);
    Vector operator*(const value k);
    Vector& operator*=(const value k);
    value operator*(const Vector& rhs);

    value& operator[](const value i);
    // More to go

private:
// Private Member functions here
    value  x[NDIM];
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
    std::ostream& operator<<(std::ostream& out, Vector v);