// FUN_004a6f10 @ 004a6f10 body=[[004a6f10, 004a6fd5] [004a6fd9, 004a7059] [004a705d, 004a70fe] [004a7102, 004a7121] [004a7125, 004a7139]]


undefined1 * FUN_004a6f10(undefined1 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint *local_78;
  uint local_74;
  undefined4 local_60 [5];
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint *local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_00b767d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_28 = *(uint **)(*(int *)(in_ECX + 0x6c) + 0x58);
  uVar3 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 0x6c) + 0x5c) * 4)
  ;
  iVar1 = *(int *)(in_ECX + 0x7c);
  local_18 = 1;
  if (iVar1 == 2) {
    local_74 = 0x4a6f78;
    FUN_004dab20();
    local_1c = (undefined1 *)&local_78;
    local_78 = local_28;
    local_74 = local_24;
    local_74 = FUN_00988bb0(local_60,1);
    local_78 = local_44;
    local_8 = 1;
    uVar3 = FUN_0042c180();
    local_74 = 0xffffffff;
    local_78 = (uint *)0x0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00448aa0(uVar3);
    if (0xf < local_30) {
      local_74 = local_44[0];
                    /* WARNING: Subroutine does not return */
      local_78 = (uint *)&UNK_004a6fd6;
      FUN_00aae91b();
    }
  }
  else {
    if (iVar1 == 3) {
      local_74 = in_ECX + 8;
      local_78 = (uint *)0x1;
      puVar4 = (undefined4 *)FUN_004da800(uVar3);
      local_78 = (uint *)*puVar4;
      local_74 = puVar4[1];
      local_1c = (undefined1 *)&local_78;
      local_74 = FUN_00988bb0(local_60,1);
      local_78 = local_44;
      local_8 = 3;
      uVar3 = FUN_0042c180();
      local_74 = 0xffffffff;
      local_78 = (uint *)0x0;
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00448aa0(uVar3);
      if (0xf < local_30) {
        local_74 = local_44[0];
                    /* WARNING: Subroutine does not return */
        local_78 = (uint *)&UNK_004a705a;
        FUN_00aae91b();
      }
      if (local_4c < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
      local_74 = local_60[0];
      goto LAB_004a711d;
    }
    if ((iVar1 != 0) && (iVar1 != 1)) {
      ExceptionList = pvVar2;
      return param_1;
    }
    local_74 = in_ECX + 8;
    local_78 = (uint *)0x1;
    puVar4 = (undefined4 *)FUN_004da720(*(undefined4 *)(in_ECX + 0x70),uVar3);
    local_78 = (uint *)*puVar4;
    local_74 = puVar4[1];
    local_1c = (undefined1 *)&local_78;
    local_74 = FUN_00988bb0(local_60,1);
    local_78 = local_44;
    local_8 = 5;
    uVar3 = FUN_0042c180();
    local_74 = 0xffffffff;
    local_78 = (uint *)0x0;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00448aa0(uVar3);
    if (0xf < local_30) {
      local_74 = local_44[0];
                    /* WARNING: Subroutine does not return */
      local_78 = (uint *)&UNK_004a70ff;
      FUN_00aae91b();
    }
  }
  if (local_4c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_74 = local_60[0];
LAB_004a711d:
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  local_78 = (uint *)&UNK_004a7122;
  FUN_00aae91b();
}

