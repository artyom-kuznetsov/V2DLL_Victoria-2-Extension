// FUN_00766990 @ 00766990 body=[[00766990, 00766a08] [00766a0c, 00766b50] [00766b54, 00766b7e]]


/* WARNING: Removing unreachable block (ram,0x00766a00) */

void FUN_00766990(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_f8 [16];
  undefined4 uStack_e8;
  char *pcStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [16];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **ppuStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  uint uStack_7c;
  char *pcStack_78;
  int iStack_74;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59ae7;
  local_10 = ExceptionList;
  local_18 = 0;
  iStack_74 = 0xe;
  pcStack_78 = "InitialSession";
  uStack_7c = 0x7669cf;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  iStack_74 = 0x7669df;
  (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  iStack_74 = 0x7669ed;
  cVar1 = FUN_00416db0();
  local_11 = cVar1 == '\0';
  local_8 = 0xffffffff;
  if ((bool)local_11) {
    iStack_74 = 0x766a22;
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x44))();
    pcStack_78 = (char *)0x766a2c;
    iStack_74 = param_1 + 8;
    (**(code **)(*piVar2 + 8))();
    pcStack_78 = (char *)0x766a36;
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    pcStack_78 = (char *)0xbb8;
    uStack_7c = 0x766a45;
    (**(code **)(**(int **)(iVar3 + 0x38) + 0xc))();
    uStack_7c = 0x260;
    puStack_80 = (undefined1 *)0x766a4f;
    iVar3 = FUN_00aae9af();
    local_8 = 1;
    local_1c = iVar3;
    if (iVar3 == 0) {
      uStack_7c = 0;
    }
    else {
      uStack_7c = 0;
      puStack_80 = &DAT_00ded94d;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      uStack_84 = 0x766a81;
      FUN_00409350();
      local_20 = (undefined1 *)&ppuStack_a8;
      local_24 = (undefined1 *)&ppuStack_a8;
      uStack_a4 = 0x18d;
      ppuStack_a8 = CVersion::vftable;
      uStack_a0 = 0;
      puStack_80 = (undefined1 *)0xf;
      uStack_84 = 0;
      local_18 = 1;
      uStack_94 = 0;
      uStack_ac = 0xffffffff;
      uStack_b0 = 0;
      puStack_b4 = local_44;
      local_8 = 3;
      uStack_b8 = 0x766ac5;
      FUN_00408ed0();
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_ac = 0;
      uStack_b0 = 0;
      puStack_b4 = (uint *)0x0;
      uStack_b8 = 0x20;
      uStack_bc = 0x29a;
      uStack_c0 = 2;
      local_24 = auStack_dc;
      local_8 = 4;
      uStack_e0 = 8;
      uStack_c8 = 0xf;
      uStack_cc = 0;
      pcStack_e4 = "NoAdress";
      auStack_dc[0] = 0;
      uStack_e8 = 0x766b02;
      FUN_00409350();
      local_28 = auStack_f8;
      local_8._0_1_ = 5;
      pcStack_e4 = (char *)0xf;
      uStack_e8 = 0;
      auStack_f8[0] = 0;
      FUN_00409350("InitialSession",0xe);
      local_8 = CONCAT31(local_8._1_3_,2);
      uStack_7c = FUN_009aeb90(iVar3);
    }
    local_8 = 0xffffffff;
    if ((local_18 & 1) != 0) {
      if (0xf < local_30) {
        uStack_7c = local_44[0];
                    /* WARNING: Subroutine does not return */
        puStack_80 = &UNK_00766b51;
        FUN_00aae91b();
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
    }
    puStack_80 = (undefined1 *)0x766b6c;
    (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  }
  ExceptionList = local_10;
  return;
}

