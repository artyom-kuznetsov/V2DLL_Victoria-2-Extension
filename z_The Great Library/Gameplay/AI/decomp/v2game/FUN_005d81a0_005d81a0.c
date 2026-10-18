// FUN_005d81a0 @ 005d81a0 body=[[005d81a0, 005d8300]]


undefined4 * FUN_005d81a0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  
  if (((*(int *)(in_ECX + 0xc4) <
        *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
      (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(in_ECX + 0xc4) * 4) == 0)) ||
     (iVar3 = *(int *)(in_ECX + 0xdc), *(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0')) {
    FUN_00401000(0x3f000000);
    uVar2 = FUN_00b31c00();
    *param_1 = uVar2;
    return param_1;
  }
  cVar1 = FUN_004b7db0(in_ECX + 0xc0);
  if (cVar1 != '\0') {
LAB_005d8247:
    *param_1 = 0;
    return param_1;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0xd9) != '\0') {
    cVar1 = FUN_00539260(iVar3);
    if (cVar1 != '\0') goto LAB_005d8247;
  }
  iVar3 = *(int *)(in_ECX + 0x1b8) * 2000 + 1000;
  cVar1 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x20))();
  if (cVar1 != '\0') {
    iVar3 = iVar3 + *(int *)(*(int *)(*(int *)(in_ECX + 0xd8) + 0x48) + 0x38);
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  uVar2 = __alldiv((longlong)
                   (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(in_ECX + 0xc4) * 4) + 0xbcc) + 0x24) + 1000)
                   * (longlong)iVar3,1000,0);
  *param_1 = uVar2;
  return param_1;
}

