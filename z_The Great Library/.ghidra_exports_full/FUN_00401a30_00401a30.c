// FUN_00401a30 @ 00401a30 body=[[00401a30, 00401b6c] [00401b70, 00401cac]]


void FUN_00401a30(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x10);
  iVar3 = *(int *)(unaff_ESI + 0x14) - iVar1;
  while (0 < iVar3 >> 2) {
    (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(*(undefined4 *)(iVar1 + -4 + (iVar3 >> 2) * 4))
    ;
    piVar2 = *(int **)(*(int *)(unaff_ESI + 0x10) + -4 +
                      (*(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 2) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(1);
    }
    iVar3 = *(int *)(unaff_ESI + 0x14);
    iVar1 = *(int *)(unaff_ESI + 0x10);
    if (((iVar3 - iVar1 & 0xfffffffcU) != 0) && (iVar1 != iVar3)) {
      *(int *)(unaff_ESI + 0x14) = iVar3 + -4;
    }
    iVar3 = *(int *)(unaff_ESI + 0x14) - iVar1;
  }
  iVar1 = *(int *)(unaff_ESI + 0x20);
  iVar3 = *(int *)(unaff_ESI + 0x24) - iVar1;
  while (0 < iVar3 >> 2) {
    (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(*(undefined4 *)(iVar1 + -4 + (iVar3 >> 2) * 4))
    ;
    piVar2 = *(int **)(*(int *)(unaff_ESI + 0x20) + -4 +
                      (*(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x20) >> 2) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(1);
    }
    iVar3 = *(int *)(unaff_ESI + 0x24);
    iVar1 = *(int *)(unaff_ESI + 0x20);
    if (((iVar3 - iVar1 & 0xfffffffcU) != 0) && (iVar1 != iVar3)) {
      *(int *)(unaff_ESI + 0x24) = iVar3 + -4;
    }
    iVar3 = *(int *)(unaff_ESI + 0x24) - iVar1;
  }
  iVar1 = *(int *)(unaff_ESI + 0x30);
  iVar3 = *(int *)(unaff_ESI + 0x34) - iVar1;
  while (0 < iVar3 >> 2) {
    piVar2 = *(int **)(iVar1 + -4 + (iVar3 >> 2) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(piVar2);
      (**(code **)(*piVar2 + 0x24))(1);
    }
    iVar3 = *(int *)(unaff_ESI + 0x34);
    iVar1 = *(int *)(unaff_ESI + 0x30);
    if (((iVar3 - iVar1 & 0xfffffffcU) != 0) && (iVar1 != iVar3)) {
      *(int *)(unaff_ESI + 0x34) = iVar3 + -4;
    }
    iVar3 = *(int *)(unaff_ESI + 0x34) - iVar1;
  }
  iVar1 = *(int *)(unaff_ESI + 0x40);
  iVar3 = *(int *)(unaff_ESI + 0x44) - iVar1;
  while (0 < iVar3 >> 2) {
    (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(*(undefined4 *)(iVar1 + -4 + (iVar3 >> 2) * 4))
    ;
    piVar2 = *(int **)(*(int *)(unaff_ESI + 0x40) + -4 +
                      (*(int *)(unaff_ESI + 0x44) - *(int *)(unaff_ESI + 0x40) >> 2) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(1);
    }
    iVar3 = *(int *)(unaff_ESI + 0x44);
    iVar1 = *(int *)(unaff_ESI + 0x40);
    if (((iVar3 - iVar1 & 0xfffffffcU) != 0) && (iVar1 != iVar3)) {
      *(int *)(unaff_ESI + 0x44) = iVar3 + -4;
    }
    iVar3 = *(int *)(unaff_ESI + 0x44) - iVar1;
  }
  if (*(int *)(unaff_ESI + 0x220) != *(int *)(unaff_ESI + 0x224)) {
    uVar4 = FUN_0040a4e0(*(int *)(unaff_ESI + 0x224),in_ECX);
    FUN_0040a110(*(undefined4 *)(unaff_ESI + 0x224),in_ECX);
    *(undefined4 *)(unaff_ESI + 0x224) = uVar4;
  }
  if (*(int *)(unaff_ESI + 0x230) != *(int *)(unaff_ESI + 0x234)) {
    uVar4 = FUN_0040a4e0(*(int *)(unaff_ESI + 0x234),in_ECX);
    FUN_0040a110(*(undefined4 *)(unaff_ESI + 0x234),in_ECX);
    *(undefined4 *)(unaff_ESI + 0x234) = uVar4;
  }
  if (*(int *)(unaff_ESI + 0x240) != *(int *)(unaff_ESI + 0x244)) {
    uVar4 = FUN_0040a550(*(int *)(unaff_ESI + 0x244),in_ECX);
    FUN_0040a190(in_ECX);
    *(undefined4 *)(unaff_ESI + 0x244) = uVar4;
  }
  if (*(int *)(unaff_ESI + 0x250) != *(int *)(unaff_ESI + 0x254)) {
    uVar4 = FUN_0040a5b0(*(int *)(unaff_ESI + 0x254),in_ECX);
    FUN_0040a190(in_ECX);
    *(undefined4 *)(unaff_ESI + 0x254) = uVar4;
  }
  *(undefined1 *)(unaff_ESI + 0x21c) = 1;
  return;
}

