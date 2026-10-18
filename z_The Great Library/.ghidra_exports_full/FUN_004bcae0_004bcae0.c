// FUN_004bcae0 @ 004bcae0 body=[[004bcae0, 004bcb8a]]


void FUN_004bcae0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(*(int *)(in_EDX + 0x68) + 0x28) * 0x10 + *(int *)(in_ECX + 0x194));
  while( true ) {
    if (iVar1 == 0) {
      if (DAT_01258a10 == (undefined4 *)0x0) {
        ExceptionList = &local_10;
        puVar3 = (undefined4 *)FUN_00aae9af(0x278);
        local_8 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          DAT_01258a10 = (undefined4 *)0x0;
        }
        else {
          FUN_00954a40(puVar3);
          *puVar3 = CNullPop::vftable;
          DAT_01258a10 = puVar3;
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x30);
    if (((iVar2 == -1) || (*(int *)(iVar1 + 0x58) < iVar2)) &&
       (*(int *)(iVar1 + 0x70) == *(int *)(in_EDX + 0x70))) break;
    iVar1 = *(int *)(iVar1 + 0x27c);
  }
  return;
}

