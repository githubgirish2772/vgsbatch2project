float cone_slantheight(float r, float h)
{
	return sqrt(r * r + h * h );
}
float cone_volume(float r, float h)
{
	return 1/3(3.14 * r * r * h );
}
float cone_CSA(float r, float h)
{
	float l= slantheight(r,h);
	return 3.14 * r * l;
}
float cone_TSA(float r, float h)
{
	float l= slantheight(r,h);
	return 3.14 * r * (l+r);
}
