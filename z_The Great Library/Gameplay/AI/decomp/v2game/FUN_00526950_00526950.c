// FUN_00526950 @ 00526950 body=[[00526950, 00526a2a]]


void FUN_00526950(int param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar4 = DAT_012586dc;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00baf590;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  uVar2 = *(uint *)(*(int *)(iVar4 + 0x40) + 0x3c);
  lVar6 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  iVar4 = DAT_01258a3c;
  iVar5 = 0;
  if (0 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar4 + 0xc) + iVar5 * 4);
      if (*(char *)(iVar3 + 0x4c) != '\0') {
        iVar3 = *(int *)(iVar3 + 0x28);
        plVar1 = (longlong *)(*(int *)(param_1 + 0x8c0) + iVar3 * 8);
        *plVar1 = lVar6 + CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x8c0) + 4 + iVar3 * 8),
                                   (int)*plVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2);
  }
  FUN_00979430(param_1 + 0x8b0);
  FUN_0050e1a0();
  FUN_005417d0(param_1);
  ExceptionList = local_14;
  return;
}

