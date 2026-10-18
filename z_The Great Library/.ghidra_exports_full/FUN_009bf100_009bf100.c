// FUN_009bf100 @ 009bf100 body=[[009bf100, 009bf368] [009bf36c, 009bf396]]


undefined4 * FUN_009bf100(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  undefined **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49da7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  param_1[0x50] = in_ECX;
  puVar1 = param_1 + 0x52;
  *param_1 = &PTR_FUN_00e3a380;
  param_1[0x4f] = param_2;
  param_1[0x51] = param_3;
  *puVar1 = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = DAT_00f092dc;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  local_2c = DAT_00f092fc;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x100;
  param_1[0x61] = local_2c;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x66] = local_2c;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  local_8 = 4;
  local_1c = 0;
  local_30 = 0x18d;
  local_34 = CColor::vftable;
  local_28 = 0;
  local_24 = 0;
  local_20 = local_2c;
  FUN_009b68e0();
  local_2c = 0;
  local_28 = 0;
  local_30 = 0x18d;
  local_34 = CColor::vftable;
  local_24 = DAT_00f092fc;
  local_20 = DAT_00f092fc;
  local_1c = 0;
  FUN_009b68e0();
  *(undefined4 **)(param_1[0x51] + 0x1bc) = param_1;
  FUN_004bf300(*(int *)(param_1[0x50] + 0x110) - *(int *)(param_1[0x50] + 0x10c) >> 2);
  local_18 = *(int **)(param_1[0x50] + 0x10c);
  param_3 = (uint *)(param_1[0x50] + 0x10c);
LAB_009bf275:
  do {
    if ((local_18 < (int *)*param_3) || ((int *)param_3[1] <= local_18)) {
      *(undefined4 *)(param_1[0x51] + 0x1d0) = 0;
      local_24 = 0;
      local_34 = (undefined **)((uint)local_34 & 0xffffff00);
      local_20 = 0xf;
      FUN_00409350(&DAT_00e02bd4,4);
      local_8._0_1_ = 5;
      FUN_009bf5b0(&local_34);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
      FUN_00ad1430(0,1);
      ExceptionList = local_10;
      return param_1;
    }
    lVar4 = (ulonglong)(uint)(*(int *)(*local_18 + 0x1c) - *(int *)(*local_18 + 0x18) >> 2) * 0x40;
    uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
    puVar2 = (undefined4 *)param_1[0x53];
    param_2 = uVar5;
    if (&param_2 < puVar2) {
      puVar3 = (undefined4 *)*puVar1;
      if (&param_2 < puVar3) goto LAB_009bf2f5;
      if (puVar2 == (undefined4 *)param_1[0x54]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x53] =
             *(undefined4 *)(*puVar1 + ((int)&param_2 - (int)puVar3 >> 2) * 4);
        param_1[0x53] = param_1[0x53] + 4;
        local_18 = local_18 + 1;
        goto LAB_009bf275;
      }
    }
    else {
LAB_009bf2f5:
      if (puVar2 == (undefined4 *)param_1[0x54]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x53] = uVar5;
      }
    }
    param_1[0x53] = param_1[0x53] + 4;
    local_18 = local_18 + 1;
  } while( true );
}

