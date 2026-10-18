// _calloc @ 00ab27d1 body=[[00ab27d1, 00ab2810]]


/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  pvVar1 = (void *)__calloc_impl(_Count,_Size,&local_8);
  if ((pvVar1 == (void *)0x0) && (local_8 != 0)) {
    piVar2 = __errno();
    if (piVar2 != (int *)0x0) {
      piVar2 = __errno();
      *piVar2 = local_8;
    }
  }
  return pvVar1;
}

