// FUN_00b10bc0 @ 00b10bc0 body=[[00b10bc0, 00b10ec2]]


undefined4 * FUN_00b10bc0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b39912;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar3 = (*(code *)PTR_FUN_00f01b08)
                    (0x6c,0xc9,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffd8);
  local_4 = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00adf8e0();
    uVar4 = FUN_00b10a30(uVar4);
  }
  local_4 = local_4 & 0xffffff00;
  *param_1 = &PTR_FUN_00e3fb28;
  param_1[1] = 0;
  FUN_00ad3250(uVar4);
  local_4 = 0;
  if ((int *)param_1[1] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)param_1[1] + 0x10))();
  }
  piVar1 = (int *)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(in_ECX + 100);
  *(undefined1 *)(iVar3 + 0x68) = *(undefined1 *)(in_ECX + 0x68);
  *(undefined1 *)(iVar3 + 0x69) = *(undefined1 *)(in_ECX + 0x69);
  uVar2 = *(uint *)(in_ECX + 0xc);
  FUN_00b10f10(uVar2);
  uVar5 = 0;
  if (3 < (int)uVar2) {
    iVar3 = 0;
    local_18 = (uVar2 - 4 >> 2) + 1;
    uVar5 = local_18 * 4;
    do {
      iVar6 = *(int *)(in_ECX + 8);
      iVar8 = *piVar1;
      *(undefined4 *)(iVar8 + 4 + iVar3) = *(undefined4 *)(iVar6 + 4 + iVar3);
      *(undefined4 *)(iVar8 + iVar3) = *(undefined4 *)(iVar6 + iVar3);
      *(undefined1 *)(iVar8 + 0x20 + iVar3) = *(undefined1 *)(iVar6 + 0x20 + iVar3);
      iVar6 = iVar6 + iVar3;
      iVar8 = iVar8 + iVar3;
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
      *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
      iVar6 = *(int *)(in_ECX + 8);
      iVar8 = *piVar1;
      *(undefined4 *)(iVar3 + 0x28 + iVar8) = *(undefined4 *)(iVar6 + 0x28 + iVar3);
      *(undefined4 *)(iVar3 + 0x24 + iVar8) = *(undefined4 *)(iVar6 + 0x24 + iVar3);
      *(undefined1 *)(iVar3 + 0x44 + iVar8) = *(undefined1 *)(iVar6 + 0x44 + iVar3);
      iVar6 = iVar6 + 0x24 + iVar3;
      iVar8 = iVar3 + 0x24 + iVar8;
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
      *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
      puVar9 = (undefined4 *)(*piVar1 + iVar3 + 0x48);
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 8) + iVar3 + 0x48);
      puVar9[1] = puVar7[1];
      *puVar9 = *puVar7;
      *(undefined1 *)(puVar9 + 8) = *(undefined1 *)(puVar7 + 8);
      puVar9[2] = puVar7[2];
      puVar9[3] = puVar7[3];
      puVar9[4] = puVar7[4];
      puVar9[5] = puVar7[5];
      puVar9[6] = puVar7[6];
      puVar9[7] = puVar7[7];
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 8) + iVar3 + 0x6c);
      puVar9 = (undefined4 *)(*piVar1 + iVar3 + 0x6c);
      puVar9[1] = puVar7[1];
      *puVar9 = *puVar7;
      *(undefined1 *)(puVar9 + 8) = *(undefined1 *)(puVar7 + 8);
      puVar9[2] = puVar7[2];
      puVar9[3] = puVar7[3];
      iVar3 = iVar3 + 0x90;
      local_18 = local_18 + -1;
      puVar9[4] = puVar7[4];
      puVar9[5] = puVar7[5];
      puVar9[6] = puVar7[6];
      puVar9[7] = puVar7[7];
    } while (local_18 != 0);
  }
  if (uVar5 < uVar2) {
    iVar3 = uVar5 * 0x24;
    iVar6 = uVar2 - uVar5;
    do {
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 8) + iVar3);
      puVar9 = (undefined4 *)(*piVar1 + iVar3);
      puVar9[1] = *(undefined4 *)(*(int *)(in_ECX + 8) + 4 + iVar3);
      *puVar9 = *puVar7;
      *(undefined1 *)(puVar9 + 8) = *(undefined1 *)(puVar7 + 8);
      puVar9[2] = puVar7[2];
      iVar3 = iVar3 + 0x24;
      iVar6 = iVar6 + -1;
      puVar9[3] = puVar7[3];
      puVar9[4] = puVar7[4];
      puVar9[5] = puVar7[5];
      puVar9[6] = puVar7[6];
      puVar9[7] = puVar7[7];
    } while (iVar6 != 0);
  }
  ExceptionList = local_c;
  return param_1;
}

