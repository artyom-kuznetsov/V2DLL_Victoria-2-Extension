// FUN_00803cc0 @ 00803cc0 body=[[00803cc0, 00803e37] [00803e3b, 00803e5a] [00803e5e, 00803e83] [00803e87, 00803eb0] [00803eb4, 00803f06] [00803f0a, 00803f57] [00803f5d, 00803f9e] [00803fa2, 00804130] [00804134, 00804188] [0080418c, 008041a8] [008041ac, 008041cb] [008041cf, 008041eb] [008041ef, 00804201]]


void FUN_00803cc0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  char ****ppppcVar4;
  int iVar5;
  uint local_264 [3];
  uint *puStack_258;
  undefined1 local_174 [48];
  int local_144;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined4 local_58;
  char local_54 [4];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  char ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b590f9;
  local_10 = ExceptionList;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  FUN_004367c0();
  local_8._0_1_ = 1;
  local_18 = *(undefined1 **)(DAT_012586e0 + 0x5c);
  if (local_18 == (undefined1 *)0x1) {
    puStack_258 = (uint *)0x803d52;
    FUN_00408ed0();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  FUN_00409350();
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  local_8._0_1_ = 3;
  puStack_258 = (uint *)0x803da0;
  pcVar3 = __itoa(param_2,local_54,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 4;
  local_ec = 0xf;
  local_f0 = 0;
  local_100 = local_100 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  FUN_00988f20();
  local_8._0_1_ = 6;
  FUN_00988f20();
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ec = 0xf;
  local_f0 = 0;
  local_100 = local_100 & 0xffffff00;
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  local_8._0_1_ = 0xb;
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  FUN_00988f20();
  local_8._0_1_ = 0xe;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0xe;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_18 == (undefined1 *)0x2) {
    puStack_258 = (uint *)0x803f77;
    local_8._0_1_ = uVar2;
    FUN_00436de0();
    local_8._0_1_ = 0x10;
    puStack_258 = (uint *)0x803f89;
    FUN_00408ed0();
    local_8._0_1_ = 0xe;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    puStack_258 = (uint *)0x803f3e;
    FUN_00408ed0();
    local_8._0_1_ = 0xe;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0xe;
  if (local_20 < 0x10) {
    ppppcVar4 = local_34;
LAB_00803fbe:
    if ((*(char *)ppppcVar4 != '\0') && (iVar5 = PHYSFS_exists(), iVar5 != 0)) {
      local_18 = (undefined1 *)local_264;
      local_264[0] = local_264[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_174,local_34,0);
      local_8._0_1_ = 0x11;
      if (local_144 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = PHYSFS_fileLength();
        if (0xffffff < iVar5) {
          FUN_00992d60();
          goto LAB_0080417b;
        }
      }
      FUN_00992f20();
      puStack_258 = (uint *)0x0;
      local_264[2] = 0xffffffff;
      local_264[1] = 1;
      local_264[0] = 0;
      iVar5 = D3DXCreateTextureFromFileInMemoryEx
                        (*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),param_3,iVar5,0xfffffffe,
                         0xfffffffe,1,0,0);
      if (iVar5 < 0) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x3c) + 100) + 0xc))();
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        puStack_258 = (uint *)0x8040b6;
        FUN_00409350();
        puStack_258 = local_50;
        local_8._0_1_ = 0x12;
        local_264[2] = 0x8040d3;
        FUN_004015b0();
        local_8._0_1_ = 0x13;
        FUN_00987d20();
        puStack_258 = (uint *)0x8040f0;
        FUN_00455470();
        FUN_00401280();
        local_8._0_1_ = 0x12;
        FUN_00987ac0();
        FUN_00aad52d();
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      *(undefined4 *)(param_2 * 0x3c0 + 0x39c + *(int *)(param_1 + 0x19c)) = local_58;
      FUN_00992d60();
      goto LAB_0080417b;
    }
  }
  else {
    ppppcVar4 = (char ****)local_34[0];
    if ((char ****)local_34[0] != (char ****)0x0) goto LAB_00803fbe;
  }
  *(undefined4 *)(param_2 * 0x3c0 + 0x39c + *(int *)(param_1 + 0x19c)) = 0;
LAB_0080417b:
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34[0] = (char ***)((uint)local_34[0] & 0xffffff00);
  local_24 = 0;
  local_20 = 0xf;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = local_ac & 0xffffff00;
  local_9c = 0;
  local_98 = 0xf;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = local_74 & 0xffffff00;
  local_64 = 0;
  local_60 = 0xf;
  if (local_108 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

