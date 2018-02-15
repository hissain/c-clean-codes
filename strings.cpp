
int sstrlen(const char *str){
    register int len = 0;
    while(str[len]) len++;
    return len;
}

void sstrcpy(char *dst, const char *src){
    int len = sstrlen(src);
    for(register int i = 0; i < len; i++)
        dst[i] = src[i];
    dst[len] = 0;
}

bool sstrcmp(const char *s1, const char *s2){
    int l1 = sstrlen(s1);
    int l2 = sstrlen(s2);
    
    if(l1 != l2)
        return false;
    
    for(register int i = 0; i < l1; i++)
        if(s1[i] != s2[i])
            return false;
    return true;
}

void sstrcat(char *dst, const char *src){
    int len = sstrlen(dst);
    register int i = 0;
    for(i = 0; src[i]; i++)
        dst[i + len] = src[i];
    dst[i + len] = 0;
}

void sstrncpy(char *dst, conts char *src, int n){
    int len = sstrlen(src);
    register int i = 0;
    for(i = 0; i < n && src[i]; i++)
        dst[i] = src[i];
    dst[i] = 0;
}

void sstrncat(char *dst, conts char *src, int n){
    int len = sstrlen(dst);
    register int i = 0;
    for(i = 0; i < n && src[i]; i++)
        dst[i + len] = src[i];
    dst[i + len] = 0;
}

char* sstrchr(const char *str, const char c){
    register int i = 0;
    for(i = 0; str[i]; i++){
        if(str[i] == c)
            break;
    }
    return (str + i);
}

void sstrrev(const char *str){
    int len = sstrlen(str);
    for(register int i = 0; i < len/2; i++){
        char c = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = c;
    }
}

