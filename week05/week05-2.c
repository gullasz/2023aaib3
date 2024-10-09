//c
char* toLowerCase(char* s) {
    for(int i=0;s[i]!=0;i++)
    {
        if(isupper(s[i])) s[i]=tolower(s[i]);
    }
    return s;
}