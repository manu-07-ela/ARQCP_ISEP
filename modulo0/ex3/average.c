double average(int *vec, int n){
    int i, soma=0;
    for(i=0;i<n;i++){
        soma += vec[i];
    }

    double qt = (double)n;
        double media = soma/qt;

    return media;
}
