#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;
class String
{
private:
	char *str;
	int len;                // length of string
	static int num_strings; // number of objects
	static const int CINLIM = 80;  // cin input limit
public:
	// constructors and other methods
	String(const char * s); // constructor
	String();               // default constructor
	String(const String & st); // copy constructor
	~String();              // destructor
	int length() const { return len; }
	void stringlow();
	void stringup();
	int has(char ch) const;
	// overloaded operator methods    
	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[](int i);
	const char & operator[](int i) const;
	// add + 
	String operator+(const String & s) const;
	String operator+(const char * s) const;
	// overloaded operator friends
	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
	friend String operator+(const char * st1, const String & st2);

	// static function
	static int HowMany();
};
#endif
