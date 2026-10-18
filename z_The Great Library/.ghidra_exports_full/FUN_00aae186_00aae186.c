// __Getwctypes @ 00aae186 body=[[00aae186, 00aae1a6]]


/* Library Function - Single Match
    __Getwctypes
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __Getwctypes(wchar_t *param_1,wchar_t *param_2,short *param_3,_Ctypevec *param_4)

{
  GetStringTypeW(1,param_1,(int)param_2 - (int)param_1 >> 1,(LPWORD)param_3);
  return param_2;
}

