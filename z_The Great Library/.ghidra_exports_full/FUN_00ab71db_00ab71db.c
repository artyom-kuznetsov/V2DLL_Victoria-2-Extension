// __msize @ 00ab71db body=[[00ab71db, 00ab720d]]


/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2010 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    return 0xffffffff;
  }
  SVar2 = HeapSize(hHeap_00f202e8,0,_Memory);
  return SVar2;
}

