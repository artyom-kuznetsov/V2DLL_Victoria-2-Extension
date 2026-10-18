// FUN_004182d0 @ 004182d0 body=[[004182d0, 0041843e] [00418442, 00418461] [00418465, 0041847b]]


void FUN_004182d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int in_ECX;
  char *pcVar6;
  undefined1 *unaff_EDI;
  uint uStack_12c;
  undefined4 uStack_124;
  undefined1 local_114 [4];
  uint uStack_110;
  undefined4 local_104;
  undefined4 local_100;
  char local_f8 [136];
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5c41c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  puVar2 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  FUN_00418780(param_2,param_4);
  *(undefined4 **)(*(int *)(param_1 + 0x10) + param_3 * 4) = puVar2;
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = 0;
  FUN_00409350("citypool.cpp",0xc);
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  pcVar3 = __itoa(in_ECX,local_f8,10);
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  local_c._0_1_ = 2;
  uVar4 = FUN_004015b0(local_114,0x97,0x10002);
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_00987d50(uVar4,"Initialized cities with total ",0x1e,0);
  puVar5 = unaff_EDI;
  if (uStack_12c < 0x10) {
    puVar5 = &stack0xfffffec0;
  }
  uVar4 = FUN_00418e30(uVar4,puVar5);
  uVar4 = FUN_00418e30(uVar4," meshes of special buildings.");
  FUN_00401280(uVar4);
  uStack_1c = 2;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI);
  }
  if (0xf < uStack_110) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_124);
  }
  ExceptionList = pvStack_24;
  return;
}

