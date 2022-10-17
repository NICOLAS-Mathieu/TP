#include <ostream>
#include "vector.hh"
using namespace std;

Vector::Vector(std::initializer_list<value> l)
{
	if (l.size() != NDIM)
	{
		runtime_error("Wrong size");
	}

	auto it = l.begin();

	for (int i = 0; i < l.size(); i++)
	{
		this->x[i] = *(it + i);
	}
}

Vector Vector::operator+(const Vector& rhs) const
{
	auto v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] + rhs.x[i];
	}
	return v;
}

Vector &Vector::operator+=(const Vector& rhs) 
{
	for (int i = 0; i < NDIM; i++)
	{
		this->x[i] += rhs.x[i];
	}
	return *this;
}

Vector& Vector::operator-=(const Vector& rhs)
{
	for (int i = 0; i < NDIM; i++)
	{
		this->x[i] -= rhs.x[i];
	}
	return *this;
}

Vector& Vector::operator+=(const value k)
{
	for (int i = 0; i < NDIM; i++)
	{
		this->x[i] += k;
	}
	return *this;
}

Vector Vector::operator*(const value k)
{
	auto v = Vector{};
	for (int i = 0; i < NDIM; i++)
	{
		v.x[i] = this->x[i] * k;
	}
	return v;
}

Vector &Vector::operator*=(const value k)
{
	for (int i = 0; i < NDIM; i++)
	{
		this->x[i] *= k;
	}
	return *this;
}

value Vector::operator*(const Vector& rhs)
{
	value S = 0;
	for (int i = 0; i < NDIM; i++)
	{
		S += this->x[i] * rhs.x[i];
	}
	return S;
}

value& Vector::operator[](const value i)
{
	return this->x[i];
}

std::ostream& operator<<(std::ostream& o, Vector v)
{
	o << "{ ";
	for (int i = 0; i < NDIM; i++)
	{
		o << v[i] << ' ';
	}
	o << " }";
	return o;
}