// __heap_init @ 00ababd8 body=[[00ababd8, 00ababf5]]


/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2010 Release */

int __cdecl __heap_init(void)

{
  hHeap_00f202e8 = HeapCreate(0,0x1000,0);
  return (uint)(hHeap_00f202e8 != (HANDLE)0x0);
}

