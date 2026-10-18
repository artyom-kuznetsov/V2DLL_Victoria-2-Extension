// FUN_0099fa00 @ 0099fa00 body=[[0099fa00, 0099fad5] [0099fad9, 0099faef] [0099faf3, 0099fb09] [0099fb0d, 0099fb96] [0099fb9a, 0099fc5c] [0099fc60, 0099fc76] [0099fc7a, 0099fc90] [0099fc94, 0099fcb5] [0099fcbe, 0099fd46] [0099fd4a, 0099fd79]]


void FUN_0099fa00(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *****pppppuVar3;
  undefined4 in_ECX;
  char local_2a0 [256];
  undefined4 local_1a0;
  char local_19c [256];
  undefined4 ****local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  undefined4 ****local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 ****local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f5e3;
  local_10 = ExceptionList;
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (undefined4 ****)((uint)local_48[0] & 0xffffff00);
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfaf28,1);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
    FUN_00409350(&DAT_00dfaf28,1);
    local_8._0_1_ = 1;
    FUN_00988f20(in_ECX);
    local_8._0_1_ = 2;
    puVar2 = (undefined4 *)FUN_00988f20(local_48);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_1a0 = 0xf;
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    __snprintf(local_19c,0xff,"%s",puVar2);
    FUN_0099ff90(param_1);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
    pppppuVar3 = (undefined4 *****)local_48[0];
    uVar1 = local_34;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
    ExceptionList = &local_10;
    FUN_00408ed0(in_ECX,0,0xffffffff);
    local_8 = 4;
    local_1a0 = 0xf;
    pppppuVar3 = (undefined4 *****)local_2c[0];
    if (local_18 < 0x10) {
      pppppuVar3 = local_2c;
    }
    __snprintf(local_19c,0xff,"%s",pppppuVar3);
    FUN_0099ff90(param_1);
    pppppuVar3 = (undefined4 *****)local_2c[0];
    uVar1 = local_18;
  }
  if (0xf < uVar1) {
    local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pppppuVar3);
  }
  local_8 = 0xffffffff;
  FUN_004013e0(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = (undefined4 ****)((uint)local_48[0] & 0xffffff00);
    FUN_00409350(&DAT_00dfaf28,1);
    local_8 = 5;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
    FUN_00409350(&DAT_00dfaf28,1);
    local_8._0_1_ = 6;
    FUN_00988f20(param_2);
    local_8._0_1_ = 7;
    puVar2 = (undefined4 *)FUN_00988f20(local_48);
    local_8 = CONCAT31(local_8._1_3_,8);
    local_1a0 = 0xf;
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    __snprintf(local_19c,0xff,"%s",puVar2);
    FUN_0099ff90(param_1);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  else {
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = (undefined4 ****)((uint)local_9c[0] & 0xffffff00);
    FUN_00408ed0(param_2,0,0xffffffff);
    local_8 = 9;
    pppppuVar3 = (undefined4 *****)local_9c[0];
    if (local_88 < 0x10) {
      pppppuVar3 = local_9c;
    }
    __snprintf(local_2a0,0xff,"%s",pppppuVar3);
    FUN_0099ff90(param_1);
    local_8 = 0xffffffff;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = (undefined4 ****)((uint)local_9c[0] & 0xffffff00);
  }
  local_8 = 0xffffffff;
  FUN_004013e0(param_1);
  ExceptionList = local_10;
  return;
}

