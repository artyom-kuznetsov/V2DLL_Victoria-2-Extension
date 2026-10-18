// FUN_0044bc60 @ 0044bc60 body=[[0044bc60, 0044bd9a] [0044bda4, 0044bdc3]]


undefined4 * FUN_0044bc60(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b51e66;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CModifier::vftable;
  iVar4 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  piVar1 = param_1 + 6;
  *piVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  FUN_0044eca0();
  if (0 < (int)(DAT_0125a5b8 - DAT_0125a5b4 & 0xfffffffcU)) {
    FUN_00401000(0x3f000000);
    uVar3 = FUN_00b31c00();
    do {
      puVar2 = (undefined4 *)(*piVar1 + iVar4 * 8);
      puVar2[1] = *(undefined4 *)(DAT_0125a5b4 + iVar4 * 4);
      *puVar2 = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_0125a5b8 - DAT_0125a5b4 >> 2);
  }
  iVar5 = 0;
  iVar4 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  if (0 < iVar4) {
    FUN_00401000(0x3f000000);
    uVar3 = FUN_00b31c00();
    do {
      *(undefined4 *)(*piVar1 + iVar5 * 8) = uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (param_1[2] == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[2]);
}

