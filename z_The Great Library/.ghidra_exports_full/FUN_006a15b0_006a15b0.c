// FUN_006a15b0 @ 006a15b0 body=[[006a15b0, 006a1633] [006a1637, 006a169c] [006a16a0, 006a16f5]]


void FUN_006a15b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  longlong lVar5;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x4c) + 0xbcc);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x34) * 0x58 + 0x44 + *(int *)(in_ECX + 0x3c)) -
          *(int *)(iVar1 + 0x338);
  if (param_2 != 0x7fffffff) {
    if (param_2 < iVar2) {
      *param_3 = 5;
      param_3[0x13] = 0;
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x330);
    for (param_2 = param_2 - iVar2; param_2 != 0; param_2 = param_2 + -1) {
      iVar1 = *(int *)(iVar1 + 0x5c);
    }
    uVar4 = (uint)*(byte *)(*(int *)(param_1 + 8) + 8 + iVar1);
    ExceptionList = &local_14;
    lVar5 = __allmul(*(undefined4 *)(*(int *)(iVar1 + 0x48) + uVar4 * 8),
                     *(undefined4 *)(*(int *)(iVar1 + 0x48) + 4 + uVar4 * 8),0x1f40000,0);
    *param_3 = 5;
    param_3[0x13] = (uint)(lVar5 >> 0xf) >> 0xf | (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) << 0x11;
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  uVar3 = FUN_005659c0(param_1,local_34);
  local_c = 0;
  *param_3 = 3;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_3[4] = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(param_3 + 5) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_3 + 7) = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 *)(param_3 + 9) = *(undefined1 *)(param_1 + 0x58);
  ExceptionList = local_14;
  return;
}

