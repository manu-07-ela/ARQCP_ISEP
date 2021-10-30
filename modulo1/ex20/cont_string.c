int cont_string(char *str){
    int cont=0;
    for(int i=0; *(str+i)!='\0'; i++){
        cont++;
    }

    return cont;
}
