// FUN_00772120 @ 00772120 body=[[00772120, 00772198] [0077219c, 007722c9] [007722cd, 007722f7]]


/* WARNING: Removing unreachable block (ram,0x00772190) */

void FUN_00772120(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_f4 [16];
  undefined4 uStack_e4;
  char *pcStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined **ppuStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
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
  uStack_74 = 0xe;
  pcStack_78 = "InitialSession";
  puStack_7c = (undefined1 *)0x77215f;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  uStack_74 = 0x77216f;
  (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  uStack_74 = 0x77217d;
  cVar1 = FUN_00416db0();
  local_11 = cVar1 == '\0';
  local_8 = 0xffffffff;
  if ((bool)local_11) {
    uStack_74 = 0x7721af;
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    uStack_74 = 3000;
    pcStack_78 = "h`\x02";
    (**(code **)(**(int **)(iVar2 + 0x38) + 0xc))();
    pcStack_78 = (char *)0x260;
    puStack_7c = (undefined1 *)0x7721c8;
    iVar2 = FUN_00aae9af();
    local_8 = 1;
    local_1c = iVar2;
    if (iVar2 == 0) {
      pcStack_78 = (char *)0x0;
    }
    else {
      pcStack_78 = (char *)0x0;
      puStack_7c = &DAT_00ded94d;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      uStack_80 = 0x7721fa;
      FUN_00409350();
      local_20 = (undefined1 *)&ppuStack_a4;
      local_24 = (undefined1 *)&ppuStack_a4;
      uStack_a0 = 0x18d;
      ppuStack_a4 = CVersion::vftable;
      uStack_9c = 0;
      puStack_7c = (undefined1 *)0xf;
      uStack_80 = 0;
      local_18 = 1;
      uStack_90 = 0;
      uStack_a8 = 0xffffffff;
      uStack_ac = 0;
      puStack_b0 = local_44;
      local_8 = 3;
      uStack_b4 = 0x77223e;
      FUN_00408ed0();
      uStack_94 = 0;
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_ac = 0;
      puStack_b0 = (uint *)0x0;
      uStack_b4 = 0x20;
      uStack_b8 = 0x29a;
      uStack_bc = 2;
      local_24 = auStack_d8;
      local_8 = 4;
      uStack_dc = 8;
      uStack_c4 = 0xf;
      uStack_c8 = 0;
      pcStack_e0 = "NoAdress";
      auStack_d8[0] = 0;
      uStack_e4 = 0x77227b;
      FUN_00409350();
      local_28 = auStack_f4;
      local_8._0_1_ = 5;
      pcStack_e0 = (char *)0xf;
      uStack_e4 = 0;
      auStack_f4[0] = 0;
      FUN_00409350("InitialSession",0xe);
      local_8 = CONCAT31(local_8._1_3_,2);
      pcStack_78 = (char *)FUN_009aeb90(iVar2);
    }
    local_8 = 0xffffffff;
    if ((local_18 & 1) != 0) {
      if (0xf < local_30) {
        pcStack_78 = (char *)local_44[0];
                    /* WARNING: Subroutine does not return */
        puStack_7c = &UNK_007722ca;
        FUN_00aae91b();
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
    }
    puStack_7c = (undefined1 *)0x7722e5;
    (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  }
  ExceptionList = local_10;
  return;
}

