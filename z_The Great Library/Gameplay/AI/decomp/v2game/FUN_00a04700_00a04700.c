// FUN_00a04700 @ 00a04700 body=[[00a04700, 00a0476d] [00a04771, 00a0478e] [00a04792, 00a047b1]]


void FUN_00a04700(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b923;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3e8a4;
  local_8 = 1;
  if ((*(char *)(param_1 + 0x14) != '\0') &&
     (iVar2 = 0, 0 < (int)(param_1[0x10] - param_1[0xf] & 0xfffffffc))) {
    do {
      puVar1 = *(undefined4 **)(param_1[0xf] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(param_1[0x10] - param_1[0xf]) >> 2);
  }
  if (param_1[0xf] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xf]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = CCommand::vftable;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}

