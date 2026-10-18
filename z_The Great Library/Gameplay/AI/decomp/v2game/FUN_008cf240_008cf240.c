// FUN_008cf240 @ 008cf240 body=[[008cf240, 008cf319] [008cf31d, 008cf41e] [008cf422, 008cf441] [008cf445, 008cf45b]]


void FUN_008cf240(int param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  int in_ECX;
  undefined4 **local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  pvVar2 = ExceptionList;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58cac;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    ExceptionList = pvVar2;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x19) = 1;
    ExceptionList = pvVar2;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_c = 0;
  uVar4 = FUN_0049d040(DAT_0125870c,local_110);
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1c) = uVar4;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110[0]);
  }
  if (*(int *)(in_ECX + 0x1c) == 0) {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c = 1;
    pcVar3 = &stack0x00000008;
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = (undefined4 **)((uint)local_12c[0] & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
    local_c._0_1_ = 2;
    uVar4 = FUN_004015b0(local_f4,0xbde,0x10004);
    local_c._0_1_ = 3;
    FUN_00987d50(uVar4,"unknown continent \'",0x13,0);
    pppuVar5 = (undefined4 ***)local_12c[0];
    if (local_118 < 0x10) {
      pppuVar5 = local_12c;
    }
    uVar4 = FUN_00418e30(uVar4,pppuVar5);
    uVar4 = FUN_00418e30(uVar4,"\' in trigger.");
    FUN_00401280(uVar4);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c[0]);
    }
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = (undefined4 **)((uint)local_12c[0] & 0xffffff00);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

