int size(char *str){
    int size = 0;
    int i = 0;
    while (*(str + i) != 0){
        size++;
        i++;
    }
    return size;
}
