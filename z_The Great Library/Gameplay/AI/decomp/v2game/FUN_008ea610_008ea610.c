// FUN_008ea610 @ 008ea610 body=[[008ea610, 008ea69f] [008ea6a3, 008ea7ad] [008ea7b1, 008ea7d0] [008ea7d4, 008ea7ea]]


void FUN_008ea610(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
  int in_ECX;
  uint *puVar5;
  undefined4 **appuStack_12c [4];
  undefined4 uStack_11c;
  uint uStack_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint auStack_f4 [4];
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58cac;
  pvStack_14 = ExceptionList;
  pcVar2 = &stack0x00000008;
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_14;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  puVar5 = local_110;
  local_c = 0;
  FUN_00976610(puVar5);
  uVar3 = FUN_00976870(puVar5);
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110[0]);
  }
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x38))();
  if (cVar1 == '\0') {
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    auStack_f4[0] = auStack_f4[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 1;
    pcVar2 = &stack0x00000008;
    uStack_118 = 0xf;
    uStack_11c = 0;
    appuStack_12c[0] = (undefined4 **)((uint)appuStack_12c[0] & 0xffffff00);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
    local_c._0_1_ = 2;
    uVar3 = FUN_004015b0(auStack_f4,0x181a,0x10004);
    local_c._0_1_ = 3;
    FUN_00987d50(uVar3,"unknown national value \'",0x18,0);
    pppuVar4 = (undefined4 ***)appuStack_12c[0];
    if (uStack_118 < 0x10) {
      pppuVar4 = appuStack_12c;
    }
    uVar3 = FUN_00418e30(uVar3,pppuVar4);
    uVar3 = FUN_00418e30(uVar3,"\' defined in a trigger.");
    FUN_00401280(uVar3);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(appuStack_12c[0]);
    }
    uStack_118 = 0xf;
    uStack_11c = 0;
    appuStack_12c[0] = (undefined4 **)((uint)appuStack_12c[0] & 0xffffff00);
    if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_f4[0]);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

