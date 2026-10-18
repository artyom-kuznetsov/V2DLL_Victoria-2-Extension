// FUN_00992740 @ 00992740 body=[[00992740, 0099286c] [00992870, 00992978] [0099297c, 00992b5c] [00992b60, 00992c39] [00992c3d, 00992c51]]


undefined4 * FUN_00992740(undefined4 *param_1,undefined4 *param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  int in_stack_00000020;
  uint in_stack_00000024;
  undefined1 local_210 [12];
  undefined4 uStack_204;
  undefined4 *local_200;
  undefined ***local_1fc;
  undefined4 ****ppppuStack_1f8;
  undefined **local_f4 [19];
  undefined1 *local_a8;
  undefined4 ****local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined **local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b580eb;
  local_10 = ExceptionList;
  local_a8 = local_210;
  local_8 = 0;
  local_1fc = (undefined ***)0xf;
  local_200 = (undefined4 *)0x0;
  local_210[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_4,0);
  FUN_009d7860();
  local_8._0_1_ = 1;
  *param_1 = &PTR_FUN_00e37dc0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(char *)((int)param_1 + 0x11) = param_3;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(bool *)((int)param_1 + 0x13) = in_ECX == 0;
  if (param_3 == '\0') {
    ppppuStack_1f8 = (undefined4 ****)param_2;
    if (0xf < (uint)param_2[5]) {
      ppppuStack_1f8 = (undefined4 ****)*param_2;
    }
    local_1fc = (undefined ***)0x992a8a;
    iVar2 = PHYSFS_openRead();
    param_1[0xc] = iVar2;
    if (iVar2 == 0) {
      ppppuStack_1f8 = (undefined4 ****)0x4;
      local_1fc = (undefined ***)&DAT_00e36c08;
      local_200 = param_2;
      uStack_204 = 0x992aaa;
      iVar2 = FUN_005484e0();
      if (iVar2 == -1) {
        ppppuStack_1f8 = (undefined4 ****)0x15;
        local_1fc = (undefined ***)0xe37ccc;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        local_200 = (undefined4 *)0x992ad0;
        FUN_00409350();
        local_8._0_1_ = 0xd;
        FUN_00988fa0();
        local_8._0_1_ = 0xe;
        FUN_004015b0(local_2c,0x246);
        local_8._0_1_ = 0x10;
        uVar3 = FUN_004238b0();
        FUN_00401280(uVar3);
        ppppuStack_1f8 = (undefined4 ****)local_f4;
        local_8._0_1_ = 0xd;
        local_1fc = (undefined ***)0x992b31;
        FUN_00987ac0();
        ppppuStack_1f8 = (undefined4 ****)local_f4;
        local_f4[0] = std::ios_base::vftable;
        local_1fc = (undefined ***)0x992b47;
        FUN_00aad52d();
        local_8._0_1_ = 1;
        if (0xf < local_18) {
          ppppuStack_1f8 = (undefined4 ****)local_2c[0];
                    /* WARNING: Subroutine does not return */
          local_1fc = (undefined ***)&UNK_00992b5d;
          FUN_00aae91b();
        }
      }
      ppppuStack_1f8 = (undefined4 ****)0x15;
      local_1fc = (undefined ***)0xe37ccc;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = 0;
      local_200 = (undefined4 *)0x992b7e;
      FUN_00409350();
      local_8._0_1_ = 0x11;
      FUN_00988fa0();
      iVar2 = FUN_009d77e0(0x248);
      local_8._0_1_ = 0x12;
      ppppuStack_1f8 = (undefined4 ****)0xffffffff;
      local_1fc = (undefined ***)0x0;
      local_200 = (undefined4 *)(iVar2 + 8);
      local_6c = &PTR_FUN_00e37db4;
      local_68 = *(undefined4 *)(iVar2 + 4);
      local_50 = 0xf;
      local_54 = 0;
      local_64 = 0;
      uStack_204 = 0x992bda;
      FUN_00408ed0();
      ppppuStack_1f8 = (undefined4 ****)0xffffffff;
      local_8._0_1_ = 0x13;
      local_1fc = (undefined ***)0x0;
      local_200 = (undefined4 *)(iVar2 + 0x24);
      local_34 = 0xf;
      local_38 = 0;
      local_48 = 0;
      uStack_204 = 0x992bf6;
      FUN_00408ed0();
      ppppuStack_1f8 = (undefined4 ****)&DAT_00e6fc00;
      local_1fc = &local_6c;
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_6c = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
      local_200 = (undefined4 *)0x992c0f;
      __CxxThrowException_8();
    }
    if (param_1[0xc] == 0) goto LAB_00992c2b;
  }
  else {
    ppppuStack_1f8 = (undefined4 ****)0x9927dd;
    FUN_00991960();
    iVar2 = 0;
    _param_3 = 0;
    if (in_stack_00000020 < 1) {
LAB_00992829:
      ppppuStack_1f8 = (undefined4 ****)param_2;
      if (0xf < (uint)param_2[5]) {
        ppppuStack_1f8 = (undefined4 ****)*param_2;
      }
      local_1fc = (undefined ***)0x99283b;
      iVar2 = PHYSFS_openWrite();
    }
    else {
      do {
        puVar4 = param_4;
        if (in_stack_00000024 < 0x10) {
          puVar4 = &param_4;
        }
        if (*(char *)((int)puVar4 + iVar2) == '+') {
          _param_3 = _param_3 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < in_stack_00000020);
      if (_param_3 == 0) goto LAB_00992829;
      if ((uint)param_2[5] < 0x10) {
        ppppuStack_1f8 = (undefined4 ****)param_2;
        local_1fc = (undefined ***)0x992827;
        iVar2 = PHYSFS_openAppend();
      }
      else {
        ppppuStack_1f8 = (undefined4 ****)*param_2;
        local_1fc = (undefined ***)0x99281d;
        iVar2 = PHYSFS_openAppend();
      }
    }
    param_1[0xc] = iVar2;
    if (iVar2 == 0) {
      ppppuStack_1f8 = (undefined4 ****)0x99284e;
      local_1fc = (undefined ***)PHYSFS_getLastError();
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = (undefined4 ****)((uint)local_a4[0] & 0xffffff00);
      ppppuStack_1f8 = (undefined4 ****)local_1fc;
      do {
        cVar1 = *(char *)ppppuStack_1f8;
        ppppuStack_1f8 = (undefined4 ****)((int)ppppuStack_1f8 + 1);
      } while (cVar1 != '\0');
      ppppuStack_1f8 = (undefined4 ****)((int)ppppuStack_1f8 - (int)((int)local_1fc + 1));
      local_200 = (undefined4 *)0x992886;
      FUN_00409350();
      ppppuStack_1f8 = (undefined4 ****)0x4;
      local_1fc = (undefined ***)&DAT_00e36c08;
      local_200 = param_2;
      local_8._0_1_ = 2;
      uStack_204 = 0x992899;
      iVar2 = FUN_005484e0();
      if (iVar2 == -1) {
        ppppuStack_1f8 = (undefined4 ****)0x15;
        local_1fc = (undefined ***)0xe37ccc;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        local_200 = (undefined4 *)0x9928bf;
        FUN_00409350();
        ppppuStack_1f8 = (undefined4 ****)0xe37d20;
        local_8._0_1_ = 3;
        FUN_00988fa0(param_2);
        local_8._0_1_ = 4;
        uVar3 = FUN_004015b0(local_2c,0x238,0x1000);
        local_8._0_1_ = 6;
        local_1fc = (undefined ***)FUN_004238b0(uVar3);
        local_200 = (undefined4 *)0x992915;
        local_1fc = (undefined ***)FUN_00418e30();
        ppppuStack_1f8 = local_a4[0];
        if (local_90 < 0x10) {
          ppppuStack_1f8 = local_a4;
        }
        local_200 = (undefined4 *)0x992934;
        local_200 = (undefined4 *)FUN_00418e30();
        uStack_204 = 0x99293a;
        FUN_00401280();
        ppppuStack_1f8 = (undefined4 ****)local_f4;
        local_8._0_1_ = 3;
        local_1fc = (undefined ***)0x99294d;
        FUN_00987ac0();
        ppppuStack_1f8 = (undefined4 ****)local_f4;
        local_f4[0] = std::ios_base::vftable;
        local_1fc = (undefined ***)0x992963;
        FUN_00aad52d();
        local_8._0_1_ = 2;
        if (0xf < local_18) {
          ppppuStack_1f8 = (undefined4 ****)local_2c[0];
                    /* WARNING: Subroutine does not return */
          local_1fc = (undefined ***)&UNK_00992979;
          FUN_00aae91b();
        }
      }
      ppppuStack_1f8 = (undefined4 ****)0x9;
      local_1fc = (undefined ***)0xe37d20;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_200 = (undefined4 *)0x992994;
      FUN_00409350();
      local_8._0_1_ = 7;
      ppppuStack_1f8 = (undefined4 ****)0x15;
      local_1fc = (undefined ***)0xe37ccc;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = 0;
      local_200 = (undefined4 *)0x9929b6;
      FUN_00409350();
      ppppuStack_1f8 = (undefined4 ****)param_2;
      local_8._0_1_ = 8;
      local_1fc = (undefined ***)0x9929cb;
      FUN_00988fa0();
      ppppuStack_1f8 = (undefined4 ****)local_2c;
      local_8._0_1_ = 9;
      local_1fc = (undefined ***)0x9929e3;
      FUN_00988f20();
      local_8._0_1_ = 10;
      FUN_00988f20();
      iVar2 = FUN_009d77e0(0x23a);
      local_8._0_1_ = 0xb;
      ppppuStack_1f8 = (undefined4 ****)0xffffffff;
      local_6c = &PTR_FUN_00e37db4;
      local_68 = *(undefined4 *)(iVar2 + 4);
      local_1fc = (undefined ***)0x0;
      local_200 = (undefined4 *)(iVar2 + 8);
      local_50 = 0xf;
      local_54 = 0;
      local_64 = 0;
      uStack_204 = 0x992a44;
      FUN_00408ed0();
      ppppuStack_1f8 = (undefined4 ****)0xffffffff;
      local_8._0_1_ = 0xc;
      local_1fc = (undefined ***)0x0;
      local_200 = (undefined4 *)(iVar2 + 0x24);
      local_34 = 0xf;
      local_38 = 0;
      local_48 = 0;
      uStack_204 = 0x992a60;
      FUN_00408ed0();
      ppppuStack_1f8 = (undefined4 ****)&DAT_00e6fc00;
      local_1fc = &local_6c;
      local_8 = CONCAT31(local_8._1_3_,0xb);
      local_6c = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
      local_200 = (undefined4 *)0x992a79;
      __CxxThrowException_8();
    }
  }
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  local_1fc = (undefined ***)0x992c25;
  ppppuStack_1f8 = (undefined4 ****)param_2;
  uVar3 = PHYSFS_getRealDir();
  param_1[0xd] = uVar3;
LAB_00992c2b:
  if (0xf < in_stack_00000024) {
    ppppuStack_1f8 = (undefined4 ****)param_4;
                    /* WARNING: Subroutine does not return */
    local_1fc = (undefined ***)&UNK_00992c3a;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

