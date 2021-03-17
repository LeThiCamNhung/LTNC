// tuan 6 bai 1
void rFilter(char *s) {

    int size=10;
    while (('A' <= *s && *s <= 'Z') || ('a' <= *s && *s <= 'z'))
    {
        *(s++);
    }
    
    while (*s != '\0')
    {
        *(s++) = '_';
    }
}
