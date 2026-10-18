// FUN_008a1b70 @ 008a1b70 body=[[008a1b70, 008a1bed]]


void FUN_008a1b70(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58c30;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x28) != 0) {
    ExceptionList = &local_14;
    iVar6 = FUN_005e64d0();
    iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + 0x28);
    uVar4 = *(uint *)(in_ECX + 0x20);
    puVar1 = (uint *)(*(int *)(iVar6 + 0x10) + iVar3 * 8);
    uVar5 = *puVar1;
    piVar2 = (int *)(*(int *)(iVar6 + 0x10) + iVar3 * 8);
    iVar3 = *(int *)(in_ECX + 0x24);
    *piVar2 = uVar4 + *puVar1;
    piVar2[1] = iVar3 + piVar2[1] + (uint)CARRY4(uVar4,uVar5);
    FUN_00979430(iVar6);
  }
  ExceptionList = local_14;
  return;
}

