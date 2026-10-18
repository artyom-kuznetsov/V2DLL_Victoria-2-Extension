// FUN_00ae6780 @ 00ae6780 body=[[00ae6780, 00ae6816]]


void FUN_00ae6780(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37dfb;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  uVar5 = 0;
  if (in_ECX[1] != 0) {
    iVar4 = 0;
    do {
      iVar1 = *in_ECX;
      iVar2 = *(int *)(iVar1 + iVar4 + 0x24);
      local_4 = 0;
      if (iVar2 != 0) {
        (*(code *)PTR__free_00f01b10)(iVar2,uVar3);
      }
      iVar1 = *(int *)(iVar1 + iVar4 + 0x14);
      local_4 = 0xffffffff;
      if (iVar1 != 0) {
        (*(code *)PTR__free_00f01b10)(iVar1);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x34;
    } while (uVar5 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

