// FUN_0088e620 @ 0088e620 body=[[0088e620, 0088e76b]]


void FUN_0088e620(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  int iVar5;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x20);
  uVar2 = *(undefined4 *)(in_EAX + 0x24);
  if (*(char *)(in_EAX + 0x1c) != '\0') {
    iVar5 = *(int *)(param_1 + 0x24);
    if (*(int *)(iVar5 + 0xc) != 0) {
      uVar1 = *(undefined4 *)(iVar5 + 8);
      unaff_ESI[1] = *(undefined4 *)(iVar5 + 0xc);
      *unaff_ESI = uVar1;
      return;
    }
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar5 + 0x10) * 4);
    uVar1 = *(undefined4 *)(iVar5 + 300);
    *unaff_ESI = *(undefined4 *)(iVar5 + 0x128);
    unaff_ESI[1] = uVar1;
    return;
  }
  if (*(char *)(in_EAX + 0x1d) != '\0') {
    iVar5 = *(int *)(param_1 + 0x24);
    if (*(int *)(iVar5 + 0x30) != 0) {
      uVar1 = *(undefined4 *)(iVar5 + 0x30);
      *unaff_ESI = *(undefined4 *)(iVar5 + 0x2c);
      unaff_ESI[1] = uVar1;
      return;
    }
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar5 + 0x34) * 4);
    uVar1 = *(undefined4 *)(iVar5 + 0x128);
    unaff_ESI[1] = *(undefined4 *)(iVar5 + 300);
    *unaff_ESI = uVar1;
    return;
  }
  piVar3 = (int *)FUN_00519a40(*(undefined4 *)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  if (*(char *)(in_EAX + 0x28) == '\0') {
    unaff_ESI[1] = uVar2;
    *unaff_ESI = uVar1;
    return;
  }
  iVar5 = piVar3[1] - *piVar3 >> 3;
  if (iVar5 == 0) {
    unaff_ESI[1] = 0;
    *unaff_ESI = 0x2d2d2d;
    return;
  }
  iVar4 = FUN_009b7910();
  iVar4 = iVar4 % iVar5;
  uVar1 = *(undefined4 *)(*piVar3 + iVar4 * 8);
  unaff_ESI[1] = *(undefined4 *)(*piVar3 + 4 + iVar4 * 8);
  *unaff_ESI = uVar1;
  return;
}

