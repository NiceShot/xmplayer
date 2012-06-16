#ifndef _GETTEXT_H_
#define _GETTEXT_H_

bool LoadLanguage(char * file, int size);

/*
 * input msg = a text in ASCII
 * output = the translated msg in utf-8
 */
const char *gettext(const char *msg);

#endif /* _GETTEXT_H_ */