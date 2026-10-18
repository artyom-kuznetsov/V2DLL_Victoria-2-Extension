// FUN_00544780 @ 00544780 body=[[00544780, 005447b8] [005447c2, 0054487a] [00544887, 005448a9]]


bool FUN_00544780(int param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int local_38 [3];
  undefined1 local_2c;
  int local_28;
  undefined **local_24;
  undefined4 local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_1c = DAT_012586db;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46468;
  local_10 = ExceptionList;
  if (*param_4 != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*param_4);
  }
  local_18 = DAT_012588e8;
  ExceptionList = &local_10;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_2 = (int *)*param_2;
  local_14 = 0x7fffffff;
  local_24 = CRailroadPathFind::vftable;
  local_20 = param_5;
  if (param_2 != (int *)0x0) {
    do {
      iVar1 = *param_2;
      param_2 = (int *)param_2[2];
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_2c = 0;
      local_28 = 0;
      local_8 = 0;
      cVar2 = FUN_005b8cc0(&local_24,param_1 + 0x1c,
                           *(undefined4 *)(*(int *)(local_18 + 0xacc) + iVar1 * 4),local_38,0);
      if ((cVar2 != '\0') && (local_38[2] < local_14)) {
        FUN_004e94a0(local_38);
        param_4[4] = local_28;
        local_14 = local_38[2];
      }
      local_8 = 0xffffffff;
      if (local_38[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
    } while (param_2 != (int *)0x0);
  }
  ExceptionList = local_10;
  return 0 < param_4[2];
}

