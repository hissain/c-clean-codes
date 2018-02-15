

int sstrlen(char *str){
    int len = 0;
    while(str[len]) len++;
    return len;
}


void sstrcpy(char *dst, char *src){
    int len = sstrlen(src);
    for(register int i = 0; i < len; i++)
        dst[i] = src[i];
    dst[len] = 0;
}


bool sstrcmp(char *s1, char *s2){
    int l1 = sstrlen(s1);
    int l2 = sstrlen(s2);
    
    if(l1 != l2)
        return false;
    for(register int i = 0 ; i < l1; i++)
        if(s1[i] != s2[i])
            return false;
    return true;
}
