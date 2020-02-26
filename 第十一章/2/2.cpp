double Worker:: magval() const
{
	mag = sqrt(x*x + y*y);
	return mag;
}

double Worker:: angval() const
{
	if (x == 0.0 || y == 0.0)
	{
		ang = 0.0;
	}
	else
	{
		ang = atan2(y, x);
	}
	return ang;
}