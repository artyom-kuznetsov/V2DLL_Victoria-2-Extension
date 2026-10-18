// FUN_005682d0 @ 005682d0 body=[[005682d0, 0056833d] [00568343, 00568364] [0056836a, 0056838b] [00568391, 005683b2] [005683b8, 005683d9] [005683df, 00568400] [00568406, 00568427] [0056842d, 0056845e]]


void FUN_005682d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3fddc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTechnologyStatus::vftable;
  local_8 = 7;
  iVar3 = (int)(param_1[0xc5] - param_1[0xc4]) >> 2;
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = *(undefined4 **)(param_1[0xc4] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (param_1[0xc4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xc4]);
  }
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  if (param_1[0xbf] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xbf]);
  }
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  if (param_1[0xbb] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xbb]);
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  if (param_1[0xb7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb7]);
  }
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  if (param_1[0xb2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb2]);
  }
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  if (param_1[0xae] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xae]);
  }
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  if (param_1[0xaa] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xaa]);
  }
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  local_8 = 0xffffffff;
  FUN_00568180(param_1);
  ExceptionList = local_10;
  return;
}

