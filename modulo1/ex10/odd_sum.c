int odd_sum(int *p){
    int size = *p;
    int result = 0;
    
    if(size == 1 && *(p+1)%2!=0){
		return *(p+1);
	}else{
        for(int i=1; i<=size; i++){
            if(*(p+i)%2!=0){
                result+=*(p+i);
            }
        }
        return result;
	}
}
