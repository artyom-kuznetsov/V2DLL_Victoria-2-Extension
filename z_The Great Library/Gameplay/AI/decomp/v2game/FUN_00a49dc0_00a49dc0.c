// FUN_00a49dc0 @ 00a49dc0 body=[[00a49dc0, 00a49f2f] [00a49f33, 00a49f5f] [00a49f63, 00a49f8e] [00a49f92, 00a4a01d] [00a4a021, 00a4a037]]


void FUN_00a49dc0(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *****pppppuVar2;
  int iVar3;
  undefined4 ****local_c4;
  undefined4 ****local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_58;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b4e2d3;
  local_1c = ExceptionList;
  iStack_8c = param_5[1];
  local_90 = *param_5;
  iStack_88 = param_3 + local_90 * -2;
  param_4 = param_4 - iStack_8c;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = (undefined4 ****)((uint)local_bc[0] & 0xffffff00);
    ExceptionList = &local_1c;
    iStack_84 = param_4;
    FUN_00408ed0(param_1,0,0xffffffff);
    local_14 = 0;
    iStack_94 = param_4 + 0x32;
    local_a0 = local_90;
    iStack_9c = iStack_8c;
    iStack_98 = iStack_88;
    if (local_a8 < 0x10) {
      local_c4 = local_bc;
    }
    else {
      local_c4 = local_bc[0];
    }
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
              (*(int **)(in_ECX + 0x30),0,local_c4,local_ac,&local_a0,0x510,0xff000000);
    if (param_4 < iStack_94) {
      iVar3 = *(int *)(param_1 + 0x10) + -2;
      do {
        if (iVar3 < 2) goto joined_r0x00a4a012;
        uStack_60 = 0xf;
        uStack_64 = 0;
        auStack_74[0] = auStack_74[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfce2c,3);
        local_14._0_1_ = 1;
        FUN_009895f0(iVar3);
        iVar3 = iVar3 + -1;
        local_14._0_1_ = 2;
        uVar1 = FUN_00988f20(auStack_74);
        local_14._0_1_ = 3;
        FUN_00408ed0(uVar1,0,0xffffffff);
        if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_58);
        }
        uStack_44 = 0xf;
        uStack_48 = 0;
        uStack_58 = uStack_58 & 0xffffff00;
        if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_3c);
        }
        local_14 = (uint)local_14._1_3_ << 8;
        uStack_28 = 0xf;
        uStack_2c = 0;
        uStack_3c = uStack_3c & 0xffffff00;
        if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_74[0]);
        }
        iStack_94 = iStack_84 + 0x32;
        local_a0 = local_90;
        iStack_9c = iStack_8c;
        iStack_98 = iStack_88;
        pppppuVar2 = (undefined4 *****)local_bc[0];
        if (local_a8 < 0x10) {
          pppppuVar2 = local_bc;
        }
        (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
                  (*(int **)(in_ECX + 0x30),0,pppppuVar2,local_ac,&local_a0,0x510,0xff000000);
      } while (iStack_84 < iStack_94);
      FUN_00408ed0(local_bc,0,0xffffffff);
    }
joined_r0x00a4a012:
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
  }
  ExceptionList = local_1c;
  return;
}

