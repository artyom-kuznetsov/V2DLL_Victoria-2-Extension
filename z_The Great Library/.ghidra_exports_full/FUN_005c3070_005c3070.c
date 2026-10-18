// FUN_005c3070 @ 005c3070 body=[[005c3070, 005c3196]]


undefined4 * FUN_005c3070(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b5a841;
  local_10 = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CTrait::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,2);
  param_1[0x12] = param_3;
  if (*(int *)(param_2 + 0x10) < 1) {
    param_1[10] = 0;
  }
  else {
    uVar2 = FUN_009902d0(param_2,1);
    param_1[10] = uVar2;
  }
  FUN_005c4ad0();
  if (0 < (int)(DAT_0125fe14 - DAT_0125fe10 & 0xfffffffcU)) {
    FUN_00401000(0x3f000000);
    uVar2 = FUN_00b31c00();
    do {
      puVar1 = (undefined4 *)(param_1[6] + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(DAT_0125fe10 + iVar3 * 4);
      *puVar1 = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0125fe14 - DAT_0125fe10 >> 2);
  }
  FUN_005c31d0(param_1);
  ExceptionList = local_10;
  return param_1;
}

