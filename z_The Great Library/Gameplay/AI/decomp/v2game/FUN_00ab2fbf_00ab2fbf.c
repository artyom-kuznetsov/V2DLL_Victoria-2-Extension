// __freea @ 00ab2fbf body=[[00ab2fbf, 00ab2fde]]


/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2010 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}

