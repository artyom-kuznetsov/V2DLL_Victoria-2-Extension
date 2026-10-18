// FUN_005143b0 @ 005143b0 body=[[005143b0, 005144b8]]


void FUN_005143b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint local_10;
  uint local_c;
  
  piVar3 = *(int **)(param_1 + 0x9d8);
  local_10 = 0;
  local_c = 0;
  while ((*(int **)(param_1 + 0x9d8) <= piVar3 && (piVar3 < *(int **)(param_1 + 0x9dc)))) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
    iVar2 = *(int *)(param_1 + 0xbe4) * 4;
    piVar3 = piVar3 + 1;
    if ((((*(int *)(iVar1 + 0xe8) ==
           *(int *)(*(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xacc)) + 0xe8)) ||
         (*(int *)(iVar1 + 0x16c) ==
          *(int *)(*(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xacc)) + 0x16c))) &&
        (*(int *)(iVar1 + 300) != 0)) &&
       ((*(int *)(iVar1 + 0x158) != 0 &&
        ((local_10 = local_10 + 1, *(char *)(iVar1 + 0x170) != '\0' ||
         (*(int *)(iVar1 + 300) != *(int *)(iVar1 + 0x134))))))) {
      local_c = local_c + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  *(undefined4 *)(param_1 + 0x7cc) = 0;
  if (local_10 != 0) {
    uVar4 = __alldiv(local_c << 0x1e,((int)local_c >> 0x1f) << 0x1e | local_c >> 2,local_10 << 0xf,
                     ((int)local_10 >> 0x1f) << 0xf | local_10 >> 0x11);
    *(undefined8 *)(param_1 + 0x7c8) = uVar4;
  }
  return;
}

