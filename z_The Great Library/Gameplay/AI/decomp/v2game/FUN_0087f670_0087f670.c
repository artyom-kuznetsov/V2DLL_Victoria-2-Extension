// FUN_0087f670 @ 0087f670 body=[[0087f670, 0087f7bf]]


undefined1 * FUN_0087f670(undefined1 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined1 local_10 [12];
  
  iVar2 = *(int *)(in_ECX + 0x2c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(in_ECX + 0x1d) != '\0') {
    iVar2 = *(int *)(param_2 + 0x34);
  }
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
  iVar2 = *(int *)(param_2 + 0xc);
  if (*(int *)(in_ECX + 0x28) != 0) {
    iVar2 = *(int *)(in_ECX + 0x28);
  }
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (((*(char *)(in_ECX + 0x24) == 'R') && (*(char *)(in_ECX + 0x25) == 'E')) &&
       (*(char *)(in_ECX + 0x26) == 'B')) {
      iVar3 = DAT_01258a94;
      if (*(uint *)(param_2 + 0x38) < 0x1269) {
        iVar3 = DAT_01258a98;
      }
      if ((iVar3 != 0) && (iVar3 = FUN_009c1d40(), iVar3 != 0)) {
        if (*(int *)(*(int *)(iVar3 + 0x30) + 0x100) == 6) {
          if (*(int *)(*(int *)(iVar3 + 0x30) + 0xfc) != 6) {
            iVar2 = FUN_004e4d40(iVar3,local_10,piVar1);
            goto LAB_0087f744;
          }
        }
        else {
          iVar2 = *(int *)(iVar3 + 0x48);
        }
      }
    }
  }
  else {
    iVar2 = FUN_008a8dc0();
LAB_0087f744:
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (piVar1[0x16] != 0) {
    if (iVar2 == 0) goto LAB_0087f793;
    iVar3 = piVar1[0x53];
    iVar4 = piVar1[0x52];
    if (iVar4 == iVar3) goto LAB_0087f793;
    do {
      if (*(int *)(iVar4 + 4) == iVar2) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar3);
    iVar2 = iVar4 - iVar3;
  }
  if (iVar2 != 0) {
    (**(code **)(*piVar1 + 0x1c))(param_1);
    return param_1;
  }
LAB_0087f793:
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return param_1;
}

