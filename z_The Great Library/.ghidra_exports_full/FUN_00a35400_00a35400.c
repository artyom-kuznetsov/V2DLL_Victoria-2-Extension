// FUN_00a35400 @ 00a35400 body=[[00a35400, 00a35587] [00a35590, 00a3560e] [00a35612, 00a35629] [00a3562d, 00a35659]]


/* WARNING: Removing unreachable block (ram,0x00a35621) */
/* WARNING: Removing unreachable block (ram,0x00a35609) */

undefined4 * FUN_00a35400(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48c3c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x1b5;
  param_1[0xc] = 0x1b5;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_00e404d4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar3 = DAT_01258b40;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  if (DAT_01258b40 != 0) {
    local_20 = *(int *)(DAT_01258b40 + 0xbc) - *(int *)(DAT_01258b40 + 0xb8) >> 5;
    if (0 < local_20) {
      local_1c = 0;
      do {
        FUN_00a840b0();
        puVar5 = (undefined4 *)(*(int *)(iVar3 + 0xb8) + local_1c);
        puVar1 = (undefined4 *)param_1[0x18];
        if ((puVar5 < puVar1) && (puVar2 = (undefined4 *)param_1[0x17], puVar2 <= puVar5)) {
          if (puVar1 == (undefined4 *)param_1[0x19]) {
            FUN_007b94a0();
          }
          if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[0x18] =
                 *(undefined4 *)(param_1[0x17] + ((int)puVar5 - (int)puVar2 >> 2) * 4);
          }
        }
        else {
          if (puVar1 == (undefined4 *)param_1[0x19]) {
            FUN_007b94a0();
          }
          if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[0x18] = *puVar5;
          }
        }
        param_1[0x18] = param_1[0x18] + 4;
        local_1c = local_1c + 0x20;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    local_20 = (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x54;
    if (0 < local_20) {
      iVar4 = 0;
      do {
        local_8._0_1_ = 5;
        FUN_00408ed0(*(int *)(iVar3 + 200) + 4 + iVar4,0,0xffffffff);
        FUN_009beeb0(*(int *)(iVar3 + 200) + 0x20 + iVar4);
        FUN_00a36470();
        iVar4 = iVar4 + 0x54;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    param_1[0x1b] = *(undefined4 *)(iVar3 + 0xe0);
  }
  ExceptionList = local_10;
  return param_1;
}

