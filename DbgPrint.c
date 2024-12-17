

#include <stdarg.h>
#include <stdio.h>

ULONG DbgPrint(PCSTR Format, ...)
{
va_list args;
va_start(args, Format);
ULONG result = vprintf(Format, args);
va_end(args);
return result;
}
