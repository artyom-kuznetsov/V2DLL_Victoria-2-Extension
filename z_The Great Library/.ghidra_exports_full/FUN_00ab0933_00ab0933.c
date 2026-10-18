// _atof @ 00ab0933 body=[[00ab0933, 00ab0945]]


/* Library Function - Single Match
    _atof
   
   Library: Visual Studio 2010 Release */

double __cdecl _atof(char *_String)

{
  double dVar1;
  
  dVar1 = __atof_l(_String,(_locale_t)0x0);
  return dVar1;
}

