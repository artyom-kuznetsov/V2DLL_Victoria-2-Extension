// FUN_009e4070 @ 009e4070 body=[[009e4070, 009e40ac] [009e40b0, 009e40dc] [009e40e0, 009e4118] [009e4120, 009e4288] [009e4290, 009e4440]]


void FUN_009e4070(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b3a768;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(in_ECX + 0x47c) + 0x38))();
  puVar1 = *(undefined4 **)(in_ECX + -0x14);
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 4))();
  }
  if (*(int **)(in_ECX + 0x230) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x230) + 0x38))();
  }
  for (iVar3 = *(int *)(in_ECX + 0x45c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x3c4) + 4))(iVar3);
    (**(code **)(*piVar2 + 0x38))();
  }
  iVar3 = 0;
  iVar4 = *(int *)(in_ECX + 600) - *(int *)(in_ECX + 0x254) >> 2;
  if (0 < iVar4) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x254) + iVar3 * 4) + 0x38))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar4 = 0;
  iVar3 = *(int *)(in_ECX + 0x278) - *(int *)(in_ECX + 0x274) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x274) + iVar4 * 4) + 0x38))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = 0;
  iVar3 = *(int *)(in_ECX + 0x2b8) - *(int *)(in_ECX + 0x2b4) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2b4) + iVar4 * 4) + 0x38))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  for (iVar3 = *(int *)(in_ECX + 0x41c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x334) + 4))(iVar3);
    (**(code **)(*piVar2 + 0x38))();
  }
  for (uVar5 = *(uint *)(in_ECX + 0x40c);
      (*(uint *)(in_ECX + 0x40c) <= uVar5 && (uVar5 < *(uint *)(in_ECX + 0x410)));
      uVar5 = uVar5 + 0x20) {
    (**(code **)(*(int *)(*(int *)(uVar5 + 0x1c) + 0x18) + 0x38))();
  }
  for (iVar3 = *(int *)(in_ECX + 0x42c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x358) + 4))(iVar3);
    (**(code **)(*piVar2 + 0x38))();
  }
  for (iVar3 = *(int *)(in_ECX + 0x43c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x37c) + 4))(iVar3);
    (**(code **)(*piVar2 + 0x38))();
  }
  for (iVar3 = *(int *)(in_ECX + 0x44c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x3a0) + 4))(iVar3);
    (**(code **)(*piVar2 + 0x54))();
  }
  iVar4 = 0;
  iVar3 = *(int *)(in_ECX + 0x2d8) - *(int *)(in_ECX + 0x2d4) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2d4) + iVar4 * 4) + 0x38))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = 0;
  iVar3 = *(int *)(in_ECX + 0x298) - *(int *)(in_ECX + 0x294) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x294) + iVar4 * 4) + 0x38))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = 0;
  iVar3 = *(int *)(in_ECX + 0x2f8) - *(int *)(in_ECX + 0x2f4) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2f4) + iVar4 * 4) + 0x38))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = 0;
  iVar3 = *(int *)(in_ECX + 0x318) - *(int *)(in_ECX + 0x314) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x314) + iVar4 * 4) + 0x38))();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  for (iVar3 = *(int *)(in_ECX + 0x46c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 1000) + 4))(iVar3);
    (**(code **)(*piVar2 + 0x38))();
  }
  if (*(int *)(in_ECX + 0x494) == -1) {
    *(undefined1 *)(*(int *)(in_ECX + 0x47c) + 0x124) = 0;
    ExceptionList = pvStack_14;
    return;
  }
  if (*(char *)(in_ECX + 0x4e) == '\0') {
    *(undefined1 *)(*(int *)(in_ECX + 0x47c) + 0x124) = 0;
    ExceptionList = pvStack_14;
    return;
  }
  if (DAT_0131ca9c == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(0xc);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 10000;
      *(undefined1 *)((int)piVar2 + 9) = 1;
      *piVar2 = (int)CNullSound::vftable;
    }
    uStack_c = 0;
    if ((piVar2 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
      (**(code **)*DAT_0131ca9c)(1);
    }
    uStack_c = 0xffffffff;
    DAT_0131ca9c = piVar2;
  }
  (**(code **)(*DAT_0131ca9c + 0x24))(*(undefined4 *)(in_ECX + 0x494));
  *(undefined1 *)(*(int *)(in_ECX + 0x47c) + 0x124) = 0;
  ExceptionList = pvStack_18;
  return;
}

