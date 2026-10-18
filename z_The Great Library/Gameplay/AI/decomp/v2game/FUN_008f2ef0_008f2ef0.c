// FUN_008f2ef0 @ 008f2ef0 body=[[008f2ef0, 008f30a9]]


uint FUN_008f2ef0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
        if ((*(int *)(param_1 + 0x14) != 0) &&
           (uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(), (char)uVar1 != '\0')) {
          iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                          *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
          if (*(int *)(iVar2 + 0x1304) != 0) {
            __alldiv(*(undefined4 *)(iVar2 + 0x1370),*(undefined4 *)(iVar2 + 0x1374),
                     *(int *)(iVar2 + 0x1304),0);
            uVar1 = FUN_0043e920();
            return uVar1;
          }
          uVar1 = FUN_0043e920();
          return uVar1;
        }
        return uVar1 & 0xffffff00;
      }
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
      iVar6 = *(int *)(iVar2 + 0x1c4);
      if (iVar6 != 0) {
        uVar5 = *(undefined4 *)(iVar2 + 0x234);
        uVar4 = *(undefined4 *)(iVar2 + 0x230);
        goto LAB_008f2f4f;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) +
                      0x188);
      iVar6 = *(int *)(iVar2 + 0xe4);
      if (iVar6 != 0) {
        uVar4 = *(undefined4 *)(iVar2 + 0x150);
        uVar5 = *(undefined4 *)(iVar2 + 0x154);
LAB_008f2f4f:
        lVar3 = __alldiv(uVar4,uVar5,iVar6,0);
        lVar3 = lVar3 << 0xf;
        goto LAB_008f2f5b;
      }
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    iVar6 = *(int *)(iVar2 + 0x1304);
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x1370);
      uVar5 = *(undefined4 *)(iVar2 + 0x1374);
      goto LAB_008f2f4f;
    }
  }
  lVar3 = 0;
LAB_008f2f5b:
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  if ((iVar2 <= *(int *)(in_ECX + 0x24)) &&
     ((iVar2 < *(int *)(in_ECX + 0x24) || ((uint)lVar3 < *(uint *)(in_ECX + 0x20))))) {
    return 0;
  }
  return 1;
}

