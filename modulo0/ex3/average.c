double average(int *vec, int n){
    int i, soma=0;
    for(i=0;i<sizeof(vec);i++){
        soma+=vec[i];
    }
    return soma/n;
}
