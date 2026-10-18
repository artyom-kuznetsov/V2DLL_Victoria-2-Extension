// FUN_0041ff70 @ 0041ff70 body=[[0041ff70, 004200b1] [004200b5, 004200d0] [004200d4, 004200ea] [004200ee, 00420128]]


undefined1 * FUN_0041ff70(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  int local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47d51;
  local_10 = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  piVar4 = (int *)*param_2;
  local_14 = 1;
  if ((param_2[1] - (int)piVar4) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify the province id.",0x1f);
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < (uint)piVar4[5]) {
    piVar4 = (int *)*piVar4;
  }
  iVar1 = FUN_00aaf0c5(piVar4);
  if (iVar1 < 1) {
    ExceptionList = local_10;
    return param_1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0xec);
  if (iVar1 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_005d9250();
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
    if (0 < iVar3) {
      *param_1 = 1;
      local_1c = 0xf;
      local_30[0] = local_30[0] & 0xffffff00;
      local_20 = iVar1;
      FUN_00409350(" units reorganized.",0x13);
      local_8 = 1;
      FUN_009888f0(local_68);
      local_8._0_1_ = 2;
      uVar2 = FUN_00988f20(local_30);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00408ed0(uVar2,0,0xffffffff);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c);
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      if (local_54 < 0x10) {
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (local_1c < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
  }
  *param_1 = 0;
  FUN_00409350("No units found in province",0x1a);
  ExceptionList = local_10;
  return param_1;
}

