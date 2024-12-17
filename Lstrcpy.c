
#include<windows.h>
#include<tchar.h>

LPTSTR Lstrcpy(LPTSTR lpstring1, LPCTSTR lp2){
LPTSTR lpdest = lpstring1;
while((*lpdest++ = *lp2++) != '\0');
return lpstring1;
}
