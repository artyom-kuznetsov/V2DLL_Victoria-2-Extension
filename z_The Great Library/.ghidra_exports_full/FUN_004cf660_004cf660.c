// FUN_004cf660 @ 004cf660 body=[[004cf660, 004cf74a] [004cf74e, 004cf790] [004cf796, 004cf7bc] [004cf7c0, 004cf81a] [004cf81e, 004cf9a5] [004cf9a9, 004cfa77] [004cfa7b, 004cfb6c] [004cfb70, 004cfc44] [004cfc48, 004cfcbb] [004cfcbf, 004cfcd5]]


void FUN_004cf660(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  int iStack_190;
  undefined1 local_184 [16];
  uint uStack_174;
  undefined1 auStack_16c [4];
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_13c;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_120;
  char acStack_11c [260];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b75a10;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 8);
  FUN_0043cd10();
  (**(code **)(**(int **)(in_ECX + 0x250) + 0x18))(local_184);
  puStack_10 = (undefined1 *)0x0;
  FUN_009a8ee0(auStack_16c,*(int *)(in_ECX + 0x250) + 0x18);
  puStack_10._0_1_ = 1;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  puStack_10._0_1_ = 2;
  cVar3 = FUN_00416db0();
  if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_128 = 0xf;
  uStack_12c = 0;
  uStack_13c = uStack_13c & 0xffffff00;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
  FUN_009adb70();
  if (iStack_168 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (cVar3 == '\0') {
    (**(code **)(**(int **)(iStack_190 + 0x250) + 0x18))();
    puStack_10 = (undefined1 *)0x4;
    FUN_009a0940();
    FUN_0099f770(param_1,0);
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puStack_10 = (undefined1 *)0xffffffff;
  puVar1 = *(undefined4 **)(iStack_190 + 0x38);
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    FUN_009a0940();
    (**(code **)(*piVar2 + 4))();
  }
  if (*(char *)(iStack_190 + 0x80) != '\0') {
    FUN_0099f470();
  }
  if (0 < *(int *)(iStack_190 + 0x84)) {
    FUN_009a0940();
    uStack_120 = 0xc;
    _sprintf(acStack_11c,"%d");
    FUN_0099ff90();
    FUN_004013e0();
  }
  for (iVar4 = *(int *)(iStack_190 + 0x60); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x224)) {
    FUN_009a0940();
    (**(code **)(*(int *)(iVar4 + 8) + 4))();
  }
  FUN_009a0940();
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_120 = 399;
  }
  else {
    uStack_120 = 0xc;
  }
  _sprintf(acStack_11c,"%lld",*(undefined4 *)(iStack_190 + 600));
  FUN_0099ff90();
  FUN_00990880();
  puStack_10 = (undefined1 *)0x5;
  uStack_120 = 0x10;
  __snprintf(acStack_11c,0xff,"%s");
  FUN_0099ff90();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009a0940();
  if (*(char *)(param_1 + 0xc) == '\0') {
    uStack_120 = 399;
  }
  else {
    uStack_120 = 0xc;
  }
  _sprintf(acStack_11c,"%lld",*(undefined4 *)(iStack_190 + 0x260));
  FUN_0099ff90();
  FUN_00990880();
  puStack_10 = (undefined1 *)0x6;
  uStack_120 = 0x10;
  __snprintf(acStack_11c,0xff,"%s");
  FUN_0099ff90();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(iStack_190 + 0x244) != 4) {
    FUN_009a0940();
    (**(code **)(*(int *)(iStack_190 + 0x1c8) + 4))();
  }
  if (*(char *)(iStack_190 + 0x27c) != '\0') {
    FUN_009a0940();
    uStack_120 = 0xe;
    _sprintf(acStack_11c,"%s");
    FUN_0099ff90();
    FUN_00990880();
    puStack_10 = (undefined1 *)0x7;
    uStack_120 = 0x10;
    __snprintf(acStack_11c,0xff,"%s");
    FUN_0099ff90();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0 < *(int *)(iStack_190 + 0x280)) {
    FUN_009a0940();
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_0098fad0();
    }
    else {
      uStack_120 = 0xc;
      _sprintf(acStack_11c,"%d");
    }
    FUN_0099ff90();
    FUN_00990880();
    puStack_10 = (undefined1 *)0x8;
    uStack_120 = 0x10;
    __snprintf(acStack_11c,0xff,"%s");
    FUN_0099ff90();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(iStack_190 + 0x288) != 0) {
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
    pcVar5 = (char *)(iStack_190 + 0x284);
    do {
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    FUN_00409350((char *)(iStack_190 + 0x284),(int)pcVar5 - (iStack_190 + 0x285));
    puStack_10 = (undefined1 *)0x9;
    FUN_009a0940();
    FUN_0099f770(param_1,0);
    if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_18;
  return;
}

