// FUN_00892230 @ 00892230 body=[[00892230, 008922bf] [008922c3, 008923ca] [008923ce, 008923ed] [008923f1, 00892407]]


void FUN_00892230(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
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
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58cac;
  local_14 = ExceptionList;
  pcVar2 = &stack0x00000008;
  local_fc = 0xf;
  local_100 = 0;
  local_110[0] = local_110[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  local_c = 0;
  uVar3 = FUN_00973bd0(local_110);
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar3;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110[0]);
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("effect.cpp",10);
    local_c = 1;
    pcVar2 = &stack0x00000008;
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = (undefined4 **)((uint)local_12c[0] & 0xffffff00);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
    local_c._0_1_ = 2;
    uVar3 = FUN_004015b0(local_f4,0xfcd,0x10004);
    local_c._0_1_ = 3;
    FUN_00987d50(uVar3,"unknown ideology \'",0x12,0);
    pppuVar4 = (undefined4 ***)local_12c[0];
    if (local_118 < 0x10) {
      pppuVar4 = local_12c;
    }
    uVar3 = FUN_00418e30(uVar3,pppuVar4);
    uVar3 = FUN_00418e30(uVar3,"\' in effect.");
    FUN_00401280(uVar3);
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

