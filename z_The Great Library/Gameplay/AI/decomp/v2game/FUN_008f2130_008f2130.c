// FUN_008f2130 @ 008f2130 body=[[008f2130, 008f21c8] [008f21cc, 008f22da] [008f22de, 008f22fd] [008f2301, 008f2317]]


void FUN_008f2130(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ****ppppuVar5;
  int in_ECX;
  undefined4 ***apppuStack_12c [4];
  undefined4 uStack_11c;
  uint uStack_118;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
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
  local_c = 0;
  iVar3 = FUN_00975ed0(local_110);
  if (iVar3 == 0) {
    iVar3 = FUN_00974850();
  }
  local_c = 0xffffffff;
  *(int *)(in_ECX + 0x1c) = iVar3;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110[0]);
  }
  if ((*(int **)(in_ECX + 0x1c) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x34))(), cVar1 != '\0')) {
    ExceptionList = pvStack_14;
    return;
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  FUN_00409350("trigger.cpp",0xb);
  local_c = 1;
  pcVar2 = &stack0x00000008;
  uStack_118 = 0xf;
  uStack_11c = 0;
  apppuStack_12c[0] = (undefined4 ***)((uint)apppuStack_12c[0] & 0xffffff00);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  local_c._0_1_ = 2;
  uVar4 = FUN_004015b0(local_f4,0x1b0e,0x10004);
  local_c._0_1_ = 3;
  FUN_00987d50(uVar4,"unknown issue \'",0xf,0);
  ppppuVar5 = (undefined4 ****)apppuStack_12c[0];
  if (uStack_118 < 0x10) {
    ppppuVar5 = apppuStack_12c;
  }
  uVar4 = FUN_00418e30(uVar4,ppppuVar5);
  uVar4 = FUN_00418e30(uVar4,"\' in trigger.");
  FUN_00401280(uVar4);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_00987ac0(appuStack_60);
  appuStack_60[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_60);
  if (uStack_118 < 0x10) {
    uStack_118 = 0xf;
    uStack_11c = 0;
    apppuStack_12c[0] = (undefined4 ***)((uint)apppuStack_12c[0] & 0xffffff00);
    if (local_e0 < 0x10) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f4[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(apppuStack_12c[0]);
}

