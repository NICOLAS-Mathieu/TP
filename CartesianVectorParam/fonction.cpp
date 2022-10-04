#include <ostream>
#include "vector.hh"
#include "config.h"
#include <string.h>
using namespace std;

Vector& Vector::operator+(const Vector& rhs)
{
	Vector v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] + rhs.x[i];
	}
	return v;
}

Vector &Vector::operator+=(const Vector& rhs) 
{
	Vector v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] + rhs.x[i];
	}
	return v;
}

Vector& Vector::operator-=(const Vector& rhs)
{
	Vector v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] - rhs.x[i];
	}
	return v;
}

Vector& Vector::operator+=(const value k)
{
	Vector v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] + k;
	}
	return v;
}

Vector& Vector::operator*(const value k)
{
	Vector v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] * k;
	}
	return v;
}

Vector &Vector::operator*=(const value k)
{
	Vector v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] * k;
	}
	return v;
}

value& Vector::operator*(const Vector& rhs)
{
	value S = 0;
	for (int i = 0; i < NDIM; i++)
	{
		S = this->x[i] * rhs.x[i];
	}
	return S;
}

value& Vector::operator[](const value i)
{
	return this->x[i];
}

std::ostream& operator<<(std::ostream& out, Vector v)
{
	out << '{ ';
	for (int i = 0; i < NDIM; i++)
	{
		out << v[i] << ' ';
	}
	out << '}';
	return out;
}