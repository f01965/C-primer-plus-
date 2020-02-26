#ifndef CD_H_
#define CD_H_
class Cd
{
private:
	char performers[50];
	char label[20];
	int  selections;
	double playtime;
public:
	Cd(char *s1, char *s2, int n, double x);
	Cd(const Cd &d);
	Cd();
	~Cd();
	virtual void Report() const;
	Cd &operator=(const Cd &d);
};
class Classic :public Cd
{
private:
	char *str;
public:
	Classic(const char *s, char *s1, char *s2, int n, double x);
	Classic(const char *s, const Cd &cl);
	Classic(const Classic &cl);
	Classic();
	~Classic();
	virtual void Report() const;
	Classic &operator=(const Classic &cl);
	
};


#endif