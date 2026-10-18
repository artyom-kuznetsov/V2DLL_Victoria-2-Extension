// FUN_0093b950 @ 0093b950 body=[[0093b950, 0093ba29] [0093ba2d, 0093ba95] [0093ba99, 0093bab8] [0093babc, 0093badf] [0093bae3, 0093bb21] [0093bb25, 0093bb55]]


undefined1 * FUN_0093b950(undefined1 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_9c [8];
  undefined4 uStack_94;
  uint *puStack_90;
  undefined4 local_8c;
  undefined2 *local_88;
  uint *puStack_84;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00bafc99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 1;
  local_1c = param_3[1] - *param_3 >> 3;
  local_14 = 0;
  if (0 < local_1c) {
    do {
      local_20 = local_9c;
      local_88 = (undefined2 *)0xf;
      local_8c = 0;
      local_9c[0] = 0;
      FUN_00409350(&DAT_00dedc20,2);
      local_8 = 1;
      iVar1 = local_14 * 8;
      uVar2 = FUN_0093aa90(param_2,*param_3 + iVar1,0);
      local_8 = local_8 & 0xffffff00;
      local_8c = FUN_009c98f0(local_74,uVar2);
      puStack_84 = (uint *)0xffffffff;
      local_88 = (undefined2 *)0x0;
      local_8 = 2;
      puStack_90 = (uint *)0x93ba17;
      FUN_00448aa0();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_60) {
        puStack_84 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
        local_88 = (undefined2 *)&UNK_0093ba2a;
        FUN_00aae91b();
      }
      puStack_84 = (uint *)0x2;
      local_88 = (undefined2 *)&DAT_00df9638;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      local_8c = 0x93ba4e;
      FUN_00409350();
      local_8 = 3;
      puStack_84 = (uint *)0x93ba61;
      FUN_0055dd40();
      puStack_84 = local_3c;
      local_8._0_1_ = 4;
      local_88 = (undefined2 *)0x93ba73;
      local_8c = FUN_00988f20();
      puStack_84 = (uint *)0xffffffff;
      local_88 = (undefined2 *)0x0;
      local_8._0_1_ = 5;
      puStack_90 = (uint *)0x93ba83;
      FUN_00448aa0();
      if (0xf < local_44) {
        puStack_84 = (uint *)local_58;
                    /* WARNING: Subroutine does not return */
        local_88 = (undefined2 *)&UNK_0093ba96;
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffff00;
      if (0xf < local_60) {
        puStack_84 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
        local_88 = (undefined2 *)&UNK_0093bab9;
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      if (0xf < local_28) {
        puStack_84 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
        local_88 = (undefined2 *)&UNK_0093bae0;
        FUN_00aae91b();
      }
      local_88 = (undefined2 *)(*param_3 + iVar1);
      puStack_84 = (uint *)0x0;
      local_8c = param_2;
      puStack_90 = local_74;
      uStack_94 = 0x93bafa;
      local_8c = FUN_0093ae10();
      puStack_84 = (uint *)0xffffffff;
      local_88 = (undefined2 *)0x0;
      local_8 = 6;
      puStack_90 = (uint *)0x93bb10;
      FUN_00448aa0();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_60) {
        puStack_84 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
        local_88 = (undefined2 *)&UNK_0093bb22;
        FUN_00aae91b();
      }
      puStack_84 = (uint *)0x1;
      local_88 = &DAT_00dee2cc;
      local_8c = 0x93bb33;
      FUN_00448740();
      local_14 = local_14 + 1;
    } while (local_14 < local_1c);
  }
  ExceptionList = local_10;
  return param_1;
}

