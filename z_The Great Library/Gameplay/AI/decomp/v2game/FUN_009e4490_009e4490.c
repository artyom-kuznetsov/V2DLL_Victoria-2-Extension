// FUN_009e4490 @ 009e4490 body=[[009e4490, 009e4688] [009e4690, 009e4840]]


void FUN_009e4490(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b3a768;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(in_ECX + -0xc) != 0) {
    ExceptionList = &pvStack_14;
    (**(code **)(**(int **)(in_ECX + 0x47c) + 0x34))();
  }
  *(undefined1 *)(in_ECX + 0x4f) = 1;
  if (*(int **)(in_ECX + 0x230) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x230) + 0x34))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x45c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x3c4) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x34))();
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 600) - *(int *)(in_ECX + 0x254) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x254) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x278) - *(int *)(in_ECX + 0x274) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x274) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x2b8) - *(int *)(in_ECX + 0x2b4) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2b4) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  for (iVar2 = *(int *)(in_ECX + 0x41c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x334) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x34))();
  }
  for (uVar4 = *(uint *)(in_ECX + 0x40c);
      (*(uint *)(in_ECX + 0x40c) <= uVar4 && (uVar4 < *(uint *)(in_ECX + 0x410)));
      uVar4 = uVar4 + 0x20) {
    (**(code **)(*(int *)(*(int *)(uVar4 + 0x1c) + 0x18) + 0x34))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x42c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x358) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x34))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x43c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x37c) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x34))();
  }
  for (iVar2 = *(int *)(in_ECX + 0x44c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x3a0) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x50))();
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x2d8) - *(int *)(in_ECX + 0x2d4) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2d4) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x298) - *(int *)(in_ECX + 0x294) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x294) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x2f8) - *(int *)(in_ECX + 0x2f4) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2f4) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0x318) - *(int *)(in_ECX + 0x314) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x314) + iVar3 * 4) + 0x34))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  for (iVar2 = *(int *)(in_ECX + 0x46c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 1000) + 4))(iVar2);
    (**(code **)(*piVar1 + 0x34))();
  }
  if (*(int *)(in_ECX + 0x490) == -1) {
    *(undefined1 *)(*(int *)(in_ECX + 0x47c) + 0x124) = 1;
    ExceptionList = pvStack_14;
    return;
  }
  if (*(char *)(in_ECX + 0x4e) == '\0') {
    *(undefined1 *)(*(int *)(in_ECX + 0x47c) + 0x124) = 1;
    ExceptionList = pvStack_14;
    return;
  }
  if (DAT_0131ca9c == (int *)0x0) {
    piVar1 = (int *)FUN_00aae9af(0xc);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[1] = 10000;
      *(undefined1 *)((int)piVar1 + 9) = 1;
      *piVar1 = (int)CNullSound::vftable;
    }
    uStack_c = 0;
    if ((piVar1 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
      (**(code **)*DAT_0131ca9c)(1);
    }
    uStack_c = 0xffffffff;
    DAT_0131ca9c = piVar1;
  }
  (**(code **)(*DAT_0131ca9c + 0x24))(*(undefined4 *)(in_ECX + 0x490));
  *(undefined1 *)(*(int *)(in_ECX + 0x47c) + 0x124) = 1;
  ExceptionList = pvStack_18;
  return;
}

