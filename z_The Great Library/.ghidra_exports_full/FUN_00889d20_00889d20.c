// FUN_00889d20 @ 00889d20 body=[[00889d20, 00889db8] [00889dc0, 00889f59] [00889f60, 00889fbe]]


void FUN_00889d20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 *local_70;
  int local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3c390;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_008a88d0();
  local_48 = 0;
  local_58 = 0x2d2d2d;
  local_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      ExceptionList = local_14;
      return;
    }
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
    local_c = 1;
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    puVar9 = *(undefined4 **)(iVar1 + 0x48);
    puVar6 = (undefined4 *)0x0;
    puVar4 = local_70;
    while ((local_70 = puVar4, puVar8 = puVar6, *(undefined4 **)(iVar1 + 0x48) <= puVar9 &&
           (puVar9 < *(undefined4 **)(iVar1 + 0x4c)))) {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      local_50 = uVar2;
      cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_60);
      puVar6 = puVar8;
      puVar4 = local_70;
      if (cVar5 == '\x01') {
        puVar6 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = uVar2;
          puVar6[1] = puVar8;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar7 = local_68 + 1;
        bVar10 = local_68 != 0;
        puVar4 = puVar6;
        local_68 = iVar7;
        if (bVar10) {
          puVar8[2] = puVar6;
          puVar4 = local_70;
        }
      }
    }
    while (local_70 != (undefined4 *)0x0) {
      local_50 = *local_70;
      local_70 = (undefined4 *)local_70[2];
      cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_60);
      if (cVar5 == '\x01') {
        puVar9 = *(undefined4 **)(in_ECX + 8);
        while (puVar9 != (undefined4 *)0x0) {
          piVar3 = (int *)*puVar9;
          puVar9 = (undefined4 *)puVar9[2];
          (**(code **)(*piVar3 + 0x2c))(local_60,param_2);
        }
      }
    }
  }
  else {
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
    local_c = 0;
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    puVar9 = *(undefined4 **)(iVar1 + 0x9d8);
    puVar6 = (undefined4 *)0x0;
    puVar4 = local_70;
    while ((local_70 = puVar4, puVar8 = puVar6, *(undefined4 **)(iVar1 + 0x9d8) <= puVar9 &&
           (puVar9 < *(undefined4 **)(iVar1 + 0x9dc)))) {
      uVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      local_50 = uVar2;
      cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_60);
      puVar6 = puVar8;
      puVar4 = local_70;
      if (cVar5 == '\x01') {
        puVar6 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = uVar2;
          puVar6[1] = puVar8;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar7 = local_68 + 1;
        bVar10 = local_68 != 0;
        puVar4 = puVar6;
        local_68 = iVar7;
        if (bVar10) {
          puVar8[2] = puVar6;
          puVar4 = local_70;
        }
      }
    }
    while (local_70 != (undefined4 *)0x0) {
      local_50 = *local_70;
      local_70 = (undefined4 *)local_70[2];
      cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_60);
      if (cVar5 == '\x01') {
        puVar9 = *(undefined4 **)(in_ECX + 8);
        while (puVar9 != (undefined4 *)0x0) {
          piVar3 = (int *)*puVar9;
          puVar9 = (undefined4 *)puVar9[2];
          (**(code **)(*piVar3 + 0x2c))(local_60,param_2);
        }
      }
    }
  }
  FUN_00849e90();
  ExceptionList = local_14;
  return;
}

