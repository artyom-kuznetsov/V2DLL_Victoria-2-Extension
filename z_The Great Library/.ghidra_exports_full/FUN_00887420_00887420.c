// FUN_00887420 @ 00887420 body=[[00887420, 008876d6] [008876da, 008876ed]]


void FUN_00887420(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8853;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      local_44 = *(uint *)(in_ECX + 0x24);
      local_48 = *(undefined4 *)(in_ECX + 0x20);
      ExceptionList = &local_14;
    }
    else {
      local_44 = *(uint *)(param_1 + 0x30);
      local_48 = *(undefined4 *)(param_1 + 0x2c);
      ExceptionList = &local_14;
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_008a8dc0();
  }
  iVar1 = DAT_012588e8;
  if ((((char)local_48 == 'R') && ((char)((uint)local_48 >> 8) == 'E')) &&
     ((char)((uint)local_48 >> 0x10) == 'B')) {
    local_38 = *(uint *)(param_1 + 0x38);
    local_34 = *(undefined4 *)(param_1 + 0x3c);
    iVar6 = DAT_01258a94;
    if (local_38 < 0x1269) {
      iVar6 = DAT_01258a98;
    }
    if (iVar6 == 0) {
      ExceptionList = local_14;
      return;
    }
    iVar6 = FUN_009c1d40();
    if (iVar6 == 0) {
      ExceptionList = local_14;
      return;
    }
    puVar7 = (undefined4 *)
             FUN_004e4d40(iVar6,&local_38,
                          *(undefined4 *)(*(int *)(iVar1 + 0xacc) + *(int *)(param_1 + 0x10) * 4));
    local_48 = *puVar7;
    local_44 = puVar7[1];
    if (local_44 == 0) {
      ExceptionList = local_14;
      return;
    }
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  local_34 = *(uint *)(param_1 + 0xc);
  local_38 = *(uint *)(param_1 + 8);
  if (local_34 == 0) {
    puVar8 = (uint *)FUN_008a8dc0();
    local_38 = *puVar8;
    local_34 = puVar8[1];
  }
  if ((*(uint *)(iVar1 + 300) == local_34) || (local_34 == local_44)) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_c = 0;
    FUN_004e9b90();
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_44 * 4);
    local_40 = 0x2d2d2d;
    local_3c = 0;
    if ((int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU) < 1) {
      FUN_004ec520();
      FUN_004ecb50(&local_28,0,&local_40,local_48,local_44);
    }
    else {
      FUN_004b5a90(&local_28,&local_48,DAT_012588e8 + 0xb0c,1,&local_40);
    }
    if (DAT_0131bb34 == 0) {
      iVar6 = FUN_00aae9af(0x188);
      local_c._0_1_ = 1;
      if (iVar6 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_0041a160();
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00423700(uVar9);
    }
    iVar6 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (1 < iVar6) {
      iVar10 = 0x10;
      iVar6 = iVar6 + -1;
      do {
        iVar4 = *(int *)(iVar10 + *(int *)(iVar1 + 0x194));
        while (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x120) = 0;
          *(undefined4 *)(iVar4 + 0x124) = 0;
          *(undefined4 *)(iVar4 + 0x118) = 0;
          *(undefined4 *)(iVar4 + 0x11c) = 0;
          iVar4 = *(int *)(iVar4 + 0x27c);
        }
        iVar10 = iVar10 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_34 * 4) + 0x7b4);
    while (piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      piVar2 = (int *)piVar2[2];
      FUN_005c8330(piVar3,0);
      *(undefined1 *)(piVar3 + 0x2f) = 1;
      if ((piVar3[0x10] == 0) && (cVar5 = (**(code **)(*piVar3 + 0x38))(), cVar5 != '\0')) {
        FUN_0068aa10(piVar3);
      }
    }
    if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
  }
  ExceptionList = local_14;
  return;
}

