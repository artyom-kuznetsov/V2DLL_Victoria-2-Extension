// FUN_005f8ad0 @ 005f8ad0 body=[[005f8ad0, 005f8c96] [005f8c9c, 005f8d06] [005f8d0a, 005f8d39]]


void FUN_005f8ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb6680;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00647f00();
  FUN_009973b0(*(undefined4 *)(in_ECX + 0x9c),3);
  FUN_00997280(*(undefined4 *)(in_ECX + 0x9c),2);
  if (*(int *)(in_ECX + 0x238) == 0) {
    iVar1 = *(int *)(in_ECX + 0x9c);
    local_38 = 0xc0400000;
    local_40 = 0;
    local_3c = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_5c[0] = 0;
    local_5c[1] = 0;
    local_5c[2] = DAT_00f092fc;
    iVar1 = FUN_00996910(&local_40,&local_4c,local_5c,0x3f48f5c3,
                         (float)*(int *)(iVar1 + 0x6b9bc) / (float)*(int *)(iVar1 + 0x6b9c0),
                         0x41000000,0x437a0000,0,
                         CONCAT22((short)*(undefined4 *)(iVar1 + 0x6b9c0),
                                  (short)*(undefined4 *)(iVar1 + 0x6b9bc)));
    *(int *)(in_ECX + 0x238) = iVar1;
    (**(code **)(*(int *)(iVar1 + 0x1c) + 0x34))();
    local_5c[0] = in_ECX + 0xbc;
    FUN_0068f390();
    if (*(char *)(DAT_012588e8 + 3000) == '\0') {
      FUN_005f9260(DAT_012588e8 + 0xbd0);
    }
    else {
      local_5c[0] = 0;
      local_5c[1] = 0;
      local_5c[2] = 0;
      uStack_c = 0;
      FUN_0068df20();
      FUN_005f9260(local_5c);
      uStack_c = 0xffffffff;
      if (local_5c[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
    }
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  FUN_00409350("rightClickMenu",0xe);
  uStack_c = 1;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x98) + 0x28))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x8c) = uVar2;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_24 = 0xf;
  uStack_28 = 0;
  local_38 = local_38 & 0xffffff00;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x18) + 0x38))();
  ExceptionList = pvStack_18;
  return;
}

