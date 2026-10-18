// FUN_007221d0 @ 007221d0 body=[[007221d0, 00722249] [00722250, 0072238c] [00722390, 007223fd]]


void FUN_007221d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  FUN_0071faa0(in_ECX,0);
  iVar2 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar2 = iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0);
  iVar5 = 0;
  for (iVar3 = iVar2 - DAT_00f1027c; -1 < iVar3; iVar3 = iVar3 - (&DAT_00f1027c)[iVar5]) {
    iVar5 = iVar5 + 1;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (1 < iVar5) {
    do {
      iVar4 = iVar4 + (&DAT_00f1027c)[iVar3];
      iVar6 = iVar6 + (&DAT_00f10280)[iVar3];
      iVar3 = iVar3 + 2;
    } while (iVar3 < iVar5 + -1);
  }
  if (iVar3 < iVar5) {
    iVar5 = (&DAT_00f1027c)[iVar3];
  }
  else {
    iVar5 = 0;
  }
  iVar5 = ((iVar2 - iVar4) - iVar6) - iVar5;
  if (*(int *)(in_ECX + 0x490) == iVar5) {
    iVar2 = *(int *)(in_ECX + 0x70);
    if (0 < iVar2) {
      if (iVar2 == 1) {
        FUN_007221b0();
        return;
      }
      *(int *)(in_ECX + 0x70) = iVar2 + -1;
    }
  }
  else {
    *(int *)(in_ECX + 0x490) = iVar5;
    if (*(char *)(in_ECX + 0x58) != '\0') {
      *(undefined1 *)(in_ECX + 0x58) = 0;
      FUN_00721bb0(in_ECX);
      FUN_0071d070(in_ECX);
    }
    puVar7 = *(undefined4 **)(in_ECX + 0x5c);
    iVar2 = DAT_012587f0;
    while (DAT_012587f0 = iVar2, puVar7 != (undefined4 *)0x0) {
      uVar1 = *puVar7;
      puVar7 = (undefined4 *)puVar7[2];
      FUN_0071b3b0(uVar1);
      iVar2 = DAT_012587f0;
    }
    iVar5 = 0;
    *(undefined4 *)(in_ECX + 0x70) = 0;
    iVar3 = *(int *)(iVar2 + 0x3c) - *(int *)(iVar2 + 0x38) >> 2;
    if (0 < iVar3) {
      do {
        iVar6 = *(int *)(*(int *)(iVar2 + 0x38) + iVar5 * 4);
        if ((iVar6 != 0) && (iVar6 != DAT_012587f0 + 0xa8)) {
          FUN_00721fd0(in_ECX,iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    FUN_0071d9e0(in_ECX);
    for (puVar7 = *(undefined4 **)(in_ECX + 0x308);
        (*(undefined4 **)(in_ECX + 0x308) <= puVar7 && (puVar7 < *(undefined4 **)(in_ECX + 0x30c)));
        puVar7 = puVar7 + 1) {
      (**(code **)(*(int *)*puVar7 + 0x20))();
    }
    FUN_00723e70();
    for (puVar7 = *(undefined4 **)(in_ECX + 0x270);
        (*(undefined4 **)(in_ECX + 0x270) <= puVar7 && (puVar7 < *(undefined4 **)(in_ECX + 0x274)));
        puVar7 = puVar7 + 1) {
      (**(code **)(*(int *)*puVar7 + 0x20))();
    }
    FUN_00723c20();
    for (puVar7 = *(undefined4 **)(in_ECX + 0x3a0);
        (*(undefined4 **)(in_ECX + 0x3a0) <= puVar7 && (puVar7 < *(undefined4 **)(in_ECX + 0x3a4)));
        puVar7 = puVar7 + 1) {
      (**(code **)(*(int *)*puVar7 + 0x20))();
    }
    FUN_00724120();
    FUN_0071f230(in_ECX);
    iVar2 = *(int *)(*(int *)(in_ECX + 0x494) + 4);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x67) != '\0')) {
      FUN_00477ad0(*(int *)(in_ECX + 0x494));
      return;
    }
  }
  return;
}

