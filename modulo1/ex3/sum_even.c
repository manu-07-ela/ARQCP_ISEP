int sum_even(int *p, int num){
	int sum=0;
	for(int i=0; i<num;i++){
		sum+=*(p+i);
		}
		return sum;
}
