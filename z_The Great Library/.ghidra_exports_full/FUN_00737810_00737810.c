// FUN_00737810 @ 00737810 body=[[00737810, 007378f5]]


undefined4 FUN_00737810(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0xa4) != 0) {
    ExceptionList = &local_10;
    FUN_00816010();
    piVar3 = (int *)FUN_00705450();
    if ((int *)*piVar3 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)*piVar3;
    }
    uVar4 = (uint)piVar3[2] >> 2;
    if (*(uint *)(iVar1 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar1 + 8);
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + uVar4 * 4) + (piVar3[2] & 3U) * 4);
    if ((*(int *)(in_ECX + 0xa4) != 0) &&
       (iVar1 = *(int *)(in_ECX + 0xa4) + -1, *(int *)(in_ECX + 0xa4) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(in_ECX + 0xa0) = 0;
    }
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xb8);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_007304f0(iVar1,*(int *)(in_ECX + 0x6c) == 0);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

