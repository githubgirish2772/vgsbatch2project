float volume_cuboid (float l,float b,float h);
{
	return l*b*h;
}
float tsa_cuboid (float l,float b,float h);
{
	return 2*( l * b + b * h + h * l );
}
float lsa_cuboid (float l,float b,float h);
{
	return 2*h*(l+b);
}
float diagonal_cuboid (float l,float b,float h);
{
	return sqrt(l*l+b*b+h*h);
}

