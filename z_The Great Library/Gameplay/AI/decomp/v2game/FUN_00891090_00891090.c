// FUN_00891090 @ 00891090 body=[[00891090, 008911c0]]


void FUN_00891090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_ECX;
  undefined4 local_18;
  int local_14;
  
  FUN_008852b0(in_ECX);
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(param_1 + 0xc) * 4) + 0xbe8) + local_14 * 4) +
                  0x34);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x30);
  iVar3 = *(int *)(iVar1 + 0x2c);
  if (iVar3 != iVar2) {
    do {
      if (*(int *)(iVar3 + 4) == local_14) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar2);
    if (iVar3 != iVar2) {
      FUN_009351c0(iVar1,local_18,local_14,0);
      goto LAB_00891110;
    }
  }
  FUN_00936070(iVar1,local_18,local_14,0);
LAB_00891110:
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_14 * 4));
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    FUN_005b53d0(DAT_012588e8 + 0xab4,
                 *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
    FUN_004b7d50();
    FUN_005dbd90();
  }
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    FUN_005b53d0(DAT_012588e8 + 0xab4,*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_14 * 4));
    FUN_004b7d50();
    FUN_005dbd90();
  }
  return;
}

