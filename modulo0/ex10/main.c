#include <stdio.h>
#include "average.h"

int main(){
	int v[] = {1,2};
	int r = 0;
	int s = 0;
	r = average(v[0], v[1]);
	printf("average =%d\n", r);
	s = average_array(v,2);
	printf("average = %d\n", s);
	return 0;
}
