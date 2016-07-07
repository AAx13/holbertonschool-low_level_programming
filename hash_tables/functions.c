#include <unistd.h>

int print_char(char c)
{
        return write(1, &c, 1);
}

/* this function will compare two strings and return the ascii difference */
int string_compare(const char *str1, const char *str2)
{
        int i;

        for(i = 0; *(str1 + i) != 0 || *(str2 + i) != 0; i++) {
                if(*(str1 + i) != *(str2 + i)) {
                        return *(str1 + i) - *(str2 + i);
                }
        }

        return 0;
}

/* this function is used to assign an index to a new node in a hash table */
unsigned int hash(const char *key, unsigned int size)
{
        unsigned int hash;
        unsigned int i;

        hash = 0;
        i = 0;
        while (key && key[i])
        {
                hash = (hash + key[i]) % size;
                ++i;
        }
        return (hash);
}
