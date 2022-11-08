#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);

/*from prifunc.c*/
int _putchar(char c);
int printToScreen (char *str);

/*from strfunc.c*/
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *insertString (char *str, char *ins, int pos, int trim);


#endif /* _MAIN_H_ */
