// FUN_009c1590 @ 009c1590 body=[[009c1590, 009c164d]]


undefined4 FUN_009c1590(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar4 = *(uint *)(in_EAX + 8);
  if (*(char *)(in_EAX + 0x10) != '\0') {
    FUN_009c1650();
  }
  *(uint *)(in_EAX + 8) = uVar4;
  *(int *)(in_EAX + 0xc) = iVar1;
  piVar5 = DAT_01258a98;
  piVar3 = DAT_01258a94;
  if (uVar4 < 0x1269) {
    if (DAT_01258a98 == (int *)0x0) {
      return 0;
    }
    uVar4 = (uint)(*(int *)(in_EAX + 8) * 0x10000 + iVar1) % (uint)DAT_01258a98[1];
    piVar3 = (int *)FUN_00aae9af(8);
    if (piVar3 != (int *)0x0) {
      iVar1 = *(int *)(piVar5[2] + uVar4 * 4);
      *piVar3 = in_EAX;
      piVar3[1] = iVar1;
      *(int **)(piVar5[2] + uVar4 * 4) = piVar3;
      *piVar5 = *piVar5 + 1;
      return 1;
    }
  }
  else {
    if (DAT_01258a94 == (int *)0x0) {
      return 0;
    }
    uVar4 = (uint)(*(int *)(in_EAX + 8) * 0x10000 + iVar1) % (uint)DAT_01258a94[1];
    piVar2 = (int *)FUN_00aae9af(8);
    piVar5 = piVar3;
    if (piVar2 != (int *)0x0) {
      iVar1 = *(int *)(piVar3[2] + uVar4 * 4);
      *piVar2 = in_EAX;
      piVar2[1] = iVar1;
      *(int **)(piVar3[2] + uVar4 * 4) = piVar2;
      *piVar3 = *piVar3 + 1;
      return 1;
    }
  }
  *(undefined4 *)(piVar5[2] + uVar4 * 4) = 0;
  *piVar5 = *piVar5 + 1;
  return 1;
}

