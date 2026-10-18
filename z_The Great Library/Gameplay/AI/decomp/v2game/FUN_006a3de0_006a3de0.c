// FUN_006a3de0 @ 006a3de0 body=[[006a3de0, 006a3fad] [006a407f, 006a4098] [006a41ed, 006a41ff] [006a4203, 006a422a] [006a4239, 006a4268]]


int FUN_006a3de0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
                code *param_6,char param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_100 [2];
  undefined1 local_f8;
  undefined **local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_94;
  undefined4 local_8c;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined **local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b92979;
  local_10 = ExceptionList;
  local_18 = param_2 - param_1 >> 2;
  if (local_18 < 1) {
    return param_1;
  }
  local_94 = 0x2d2d2d;
  local_8c = 0x2d2d2d;
  ExceptionList = &local_10;
  while( true ) {
    local_84 = local_18 / 2;
    uVar1 = *(undefined4 *)(param_1 + local_84 * 4);
    local_bc = local_94;
    local_b8 = 0;
    local_100[0] = 0xf;
    local_100[1] = 0;
    local_f8 = 1;
    local_f0 = 0x18d;
    local_f4 = CColor::vftable;
    local_ec = DAT_00f092fc;
    local_e8 = DAT_00f092fc;
    local_e4 = DAT_00f092fc;
    local_e0 = DAT_00f092fc;
    local_dc = 1;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    local_b4 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = DAT_01259abc;
    local_a0 = 0xf;
    local_9c = 0xf;
    local_74 = CColor::vftable;
    local_3c = local_8c;
    local_6c = DAT_00f092fc;
    local_68 = DAT_00f092fc;
    local_64 = DAT_00f092fc;
    local_60 = DAT_00f092fc;
    local_80 = 0xf;
    local_7c = 0;
    local_78 = 1;
    local_70 = 0x18d;
    local_5c = 1;
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = DAT_01259abc;
    local_20 = 0xf;
    local_1c = 0xf;
    local_8 = 1;
    (*param_6)(*param_3,param_5,local_100,0);
    (*param_6)(uVar1,param_5,&local_80,0);
    uVar4 = local_a0;
    if (param_7 != '\0') {
      uVar4 = local_9c;
    }
    uVar2 = local_100[0];
    if (uVar4 != 0xf) {
      uVar2 = uVar4;
    }
    if (uVar2 < 0xf) {
      iVar3 = (*(code *)(&PTR_LAB_006a426c)[(byte)(&DAT_006a428c)[uVar2]])();
      return iVar3;
    }
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58);
    }
    local_8 = 0xffffffff;
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    if (0xf < local_c4) break;
    param_1 = param_1 + 4 + local_84 * 4;
    local_18 = local_18 + (-1 - local_84);
    if (local_18 < 1) {
      ExceptionList = local_10;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_d8);
}

