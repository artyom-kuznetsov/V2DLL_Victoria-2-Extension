// FUN_008a37b0 @ 008a37b0 body=[[008a37b0, 008a393a] [008a393e, 008a3954]]


void FUN_008a37b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_fc [4];
  uint uStack_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58c24;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0125eadc == 0) {
    ExceptionList = &pvStack_14;
    local_e0 = FUN_00aae9af(0x9c);
    local_c = 0;
    if (local_e0 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00576fe0(local_e0);
    }
    local_c = 0xffffffff;
    FUN_0057ab10(uVar2);
  }
  puVar4 = (undefined4 *)(in_ECX + 0x20);
  piVar3 = (int *)FUN_005661b0(puVar4);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x2c))();
    if (cVar1 != '\0') {
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe40) =
           piVar3[0x13];
      ExceptionList = pvStack_14;
      return;
    }
  }
  local_e8 = 0xf;
  local_ec = 0;
  local_fc[0] = 0;
  FUN_00409350("effect.cpp",10);
  local_c = 1;
  uVar2 = FUN_004015b0(local_fc,0x18d1,0x10004);
  uVar5 = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_00987d50(uVar2,"bad techschool ",0xf,0);
  if (0xf < *(uint *)(in_ECX + 0x34)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  uVar2 = FUN_00418e30(uVar2,puVar4);
  uVar2 = FUN_00418e30(uVar2," in effect");
  FUN_00401280(uVar2);
  uStack_1c = 1;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar5);
  }
  ExceptionList = pvStack_24;
  return;
}

