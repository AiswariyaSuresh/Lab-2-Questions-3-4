class Line
{
private:
	double slope, intercept;

public:
	Line();
	Line(double k, double b);
	void Print();
	bool operator == (const Line& l2) const;
	double operator * (double n);
	double operator + (double n);
};