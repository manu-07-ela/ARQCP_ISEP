void power_ref(int *x, int y) 
{
	int i;
	int result = *x;
	
	for(i=0; i<y-1; i++) 
	{
		*x *= result;
	}
}
