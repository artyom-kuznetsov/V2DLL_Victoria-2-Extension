// __onexit_nolock @ 00aae7e1 body=[[00aae7e1, 00aae896]]


/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2010 Release */

PVOID __onexit_nolock(PVOID param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  PVOID pvVar4;
  int iVar5;
  
  _Memory = DecodePointer(Ptr_013f3bec);
  puVar1 = DecodePointer(Ptr_013f3be8);
  if ((puVar1 < _Memory) || (iVar5 = (int)puVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return (PVOID)0x0;
  }
  sVar2 = __msize(_Memory);
  if (sVar2 < iVar5 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = __realloc_crt(_Memory,sVar3 + sVar2), pvVar4 == (void *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return (PVOID)0x0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return (PVOID)0x0;
      }
    }
    puVar1 = (undefined4 *)((int)pvVar4 + (iVar5 >> 2) * 4);
    Ptr_013f3bec = EncodePointer(pvVar4);
  }
  pvVar4 = EncodePointer(param_1);
  *puVar1 = pvVar4;
  Ptr_013f3be8 = EncodePointer(puVar1 + 1);
  return param_1;
}

