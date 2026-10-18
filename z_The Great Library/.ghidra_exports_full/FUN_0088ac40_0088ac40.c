// FUN_0088ac40 @ 0088ac40 body=[[0088ac40, 0088add7] [0088addb, 0088ae04] [0088ae08, 0088ae23] [0088ae3d, 0088ae51]]


undefined1 * FUN_0088ac40(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *piVar3;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 local_a0 [20];
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4ab14;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_18 = *(undefined4 *)(param_2 + 8);
  piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) + 0xe44);
  local_20 = 1;
  if (piVar3 != (int *)0x0) {
    local_18 = 0x2d2d2d;
    local_1c = in_ECX;
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      local_58 = *(undefined4 *)(param_2 + 0x10);
      local_54 = *(undefined4 *)(param_2 + 0x14);
      local_4c = *(undefined1 *)(param_2 + 0x1c);
      local_4b = *(undefined1 *)(param_2 + 0x1d);
      local_48 = *(undefined4 *)(param_2 + 0x20);
      local_44 = *(undefined4 *)(param_2 + 0x24);
      local_40 = *(undefined4 *)(param_2 + 0x28);
      local_3c = *(undefined4 *)(param_2 + 0x2c);
      local_38 = *(undefined4 *)(param_2 + 0x30);
      local_34 = *(undefined4 *)(param_2 + 0x34);
      local_30 = *(undefined4 *)(param_2 + 0x38);
      local_2c = *(undefined4 *)(param_2 + 0x3c);
      local_28 = 1;
      local_64 = 0x18d;
      local_68 = CEventScope::vftable;
      local_60 = local_18;
      local_5c = 0;
      if (iVar1 == 0) {
        local_50 = 0;
      }
      else if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
        local_50 = 0;
      }
      else {
        local_50 = **(undefined4 **)(iVar1 + 0x48);
      }
      cVar2 = (**(code **)(*(int *)(local_1c + 0x20) + 0x18))();
      if (cVar2 == '\x01') {
        FUN_00408ed0(&param_4,0,0xffffffff);
        FUN_0087a6c0(local_a0,&local_68,param_3);
        local_8._0_1_ = 2;
        FUN_009893b0();
        local_8._0_1_ = 3;
        FUN_00448aa0();
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    } while (piVar3 != (int *)0x0);
  }
  if (in_stack_00000024 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

