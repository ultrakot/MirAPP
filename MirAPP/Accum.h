#pragma once
template <class T>
class Accum
{
private:
	T total;
public:
	Accum(T start) : total(start) {};
	T operator+=(T const& t) { return total = total + t; };
	T GetTotal() const { return total; }
};

//template specialization
template <>
class Accum<Cat>
{
private:
	int total;
public:
	Accum(int start) : total(start) {};
	int operator+=(Cat const& t) { return total = total + t.GetNumber(); };
	int GetTotal() const { return total; }
};
