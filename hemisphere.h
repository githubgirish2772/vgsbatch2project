float hemisphere_Volume(float r)
{
	return (2/3) * 3.14 * r * r * r;
}
float hemisphere_CSA(float r)
{
	return 2 * 3.14 * r * r ;
}
float hemisphere_TSA(float r)
{
	return 3 * 3.14 * r * r ;
}
