// FUN_005ed3e0 @ 005ed3e0 body=[[005ed3e0, 005ed4f8] [005ed513, 005ed5aa]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ed3e0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_f4 [4];
  uint uStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  if (param_3 == 0x332) {
    ExceptionList = &pvStack_14;
    iVar2 = FUN_00aae9af(0x24);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_005163c0();
    }
    (**(code **)(*piVar3 + 0xc))(param_2);
    puVar4 = (undefined4 *)FUN_00aae9af(0x14);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar2 = piVar3[8];
      _DAT_012588d0 = _DAT_012588d0 + 1;
      *puVar4 = CHistoryEntry::vftable;
      puVar4[1] = 0x18d;
      puVar4[2] = 43800000;
      puVar4[2] = DAT_01259abc;
      *(char *)(puVar4 + 3) = (char)iVar2;
      *puVar4 = CAllianceChange::vftable;
      puVar4[4] = 0;
    }
    puVar4[4] = piVar3;
    puVar4[2] = param_1;
    (**(code **)(*in_ECX + 0x18))(puVar4);
  }
  else {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = 0;
    ExceptionList = &pvStack_14;
    FUN_00409350("diplomatichistory.cpp",0x15);
    local_c = 0;
    uVar1 = FUN_004015b0(local_f4,0x11c,0x10004);
    uVar5 = 0;
    local_c = CONCAT31(local_c._1_3_,1);
    iVar2 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
    puVar4 = (undefined4 *)(iVar2 + 0x14);
    FUN_00987d50(uVar1,"Unknown History Command ==>\'",0x1c,0);
    uVar1 = FUN_00418e30(uVar1,param_2 + 0x24,extraout_ECX,"\'<==  for diplomacy: ");
    uVar1 = FUN_00418e30(uVar1);
    if (0xf < *(uint *)(iVar2 + 0x28)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    uVar1 = FUN_00418e30(uVar1,puVar4);
    FUN_00401280(uVar1);
    uStack_1c = 0;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar5);
    }
  }
  ExceptionList = pvStack_24;
  return;
}

