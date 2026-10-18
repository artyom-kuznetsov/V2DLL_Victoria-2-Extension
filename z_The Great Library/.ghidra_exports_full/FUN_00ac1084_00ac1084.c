// __mbspbrk @ 00ac1084 body=[[00ac1084, 00ac109a]]


/* Library Function - Single Match
    __mbspbrk
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbspbrk(uchar *_Str,uchar *_Control)

{
  uchar *puVar1;
  
  puVar1 = __mbspbrk_l(_Str,_Control,(_locale_t)0x0);
  return puVar1;
}

