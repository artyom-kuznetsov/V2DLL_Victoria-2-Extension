// FUN_005c68c0 @ 005c68c0  (requested 005C68C0, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005c68c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f66b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125fdd8 == 0) {
    ExceptionList = &local_10;
    local_14 = (int *)FUN_00aae9af();
    local_8 = 0;
    if (local_14 != (int *)0x0) {
      FUN_008b0060();
    }
    local_8 = 0xffffffff;
    FUN_005c2810();
  }
  iVar2 = FUN_005c2ad0();
  if (iVar2 != 0) {
    FUN_005bd130();
  }
  piVar3 = *(int **)(param_1 + 0x38);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)*piVar3;
    local_14 = (int *)piVar3[2];
    piVar3 = (int *)(**(code **)(*piVar1 + 0x30))(local_18);
    if (*piVar3 < piVar1[0xf]) {
      piVar3 = (int *)(**(code **)(*piVar1 + 0x30))(local_1c);
      piVar1[0xf] = *piVar3;
    }
    if ((*(int *)(piVar1[0xe] + 0xb4) < piVar1[0x10]) && (DAT_00f09547 != '\0')) {
      piVar1[0x10] = *(int *)(piVar1[0xe] + 0xb4);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 0xb8);
    FUN_005bd930();
    piVar3 = local_14;
    if ((*(int *)(piVar1[0xe] + 0xb8) < iVar2) || (iVar2 == 0)) {
      *(int *)(*(int *)(param_1 + 0xa4) + 0xb8) = *(int *)(piVar1[0xe] + 0xb8);
    }
    else {
      *(int *)(*(int *)(param_1 + 0xa4) + 0xb8) = iVar2;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_005bdbd0();
  }
  ExceptionList = local_10;
  return;
}

