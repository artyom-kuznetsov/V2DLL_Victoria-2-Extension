// FUN_007db120 @ 007db120 body=[[007db120, 007db551]]


void FUN_007db120(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,short param_8)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  float10 fVar10;
  undefined1 local_144 [64];
  undefined4 local_104 [16];
  undefined4 local_c4 [16];
  undefined1 local_84 [12];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  piVar7 = *(int **)(*(int *)(param_1 + 0x8c) + 100);
  (**(code **)(*piVar7 + 0x15c))(piVar7,*(undefined4 *)(param_1 + 0x98));
  if (*(int *)(param_1 + 0xa0) == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x6bd00) + -4 +
                      *(int *)(param_1 + 0xa0) * 4);
  }
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"BackgroundTex");
  local_24 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"MaskTex");
  local_20 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"SizeTex");
  local_1c = (**(code **)(*piVar7 + 0x24))(piVar7,0,"CounterTex");
  uVar9 = *(uint *)(param_1 + 0xa4);
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar9 * 0x2c + 4 + *(int *)(param_1 + 0x44));
  }
  (**(code **)(*piVar7 + 0xd0))(piVar7,uVar2,uVar3);
  uVar9 = *(uint *)(param_1 + 0xa8);
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar9 * 0x2c + 4 + *(int *)(param_1 + 0x44));
  }
  (**(code **)(*piVar7 + 0xd0))(piVar7,local_24,uVar2);
  uVar9 = *(uint *)(param_1 + 0xac);
  if ((uVar9 == 0xffffffff) || (9999 < uVar9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(uVar9 * 0x2c + 4 + *(int *)(param_1 + 0x44));
  }
  (**(code **)(*piVar7 + 0xd0))(piVar7,local_20,uVar2);
  (**(code **)(*piVar7 + 0xd0))(piVar7,local_1c,param_6);
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"SizeOffset");
  (**(code **)(*piVar7 + 0x78))(piVar7,uVar2,*(undefined4 *)(param_1 + 0x198));
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"SizeFrame");
  (**(code **)(*piVar7 + 0x78))(piVar7,uVar2,(float)param_5);
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"CountryColor");
  local_18 = *(undefined8 *)(param_7 + 8);
  local_10 = *(undefined8 *)(param_7 + 0x10);
  (**(code **)(*piVar7 + 0x88))(piVar7,uVar2,&local_18);
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"SelectionColor");
  bVar1 = true;
  if (param_8 == 1) {
    local_38 = DAT_00f092fc;
    uStack_34 = DAT_00f092fc;
    local_30 = DAT_00f092fc;
    uStack_2c = DAT_00f092fc;
    local_18 = CONCAT44(DAT_00f092fc,DAT_00f092fc);
    local_10 = CONCAT44(DAT_00f092fc,DAT_00f092fc);
  }
  else if (param_8 == 2) {
    local_18 = *(undefined8 *)(param_1 + 0x1dc);
    local_10 = *(undefined8 *)(param_1 + 0x1e4);
  }
  else {
    if (param_8 != 3) {
      bVar1 = false;
      goto LAB_007db36e;
    }
    local_18 = *(undefined8 *)(param_1 + 0x1f8);
    local_10 = *(undefined8 *)(param_1 + 0x200);
  }
  (**(code **)(*piVar7 + 0x88))(piVar7,uVar2,&local_18);
LAB_007db36e:
  iVar6 = *(int *)(param_2 + 0x6bc88);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 0x1c) + 0x16c))();
  puVar8 = local_c4;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar6 + 0x1c) + 0x174))();
  puVar8 = local_104;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  D3DXMatrixMultiply(local_144,local_c4,local_104);
  D3DXMatrixInverse(local_84,0,local_c4);
  local_54 = *(undefined4 *)(param_4 + 0x30);
  local_50 = *(undefined4 *)(param_4 + 0x34);
  local_4c = *(undefined4 *)(param_4 + 0x38);
  local_48 = DAT_00f092fc;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"ViewProjectionMatrix");
  (**(code **)(*piVar7 + 0x98))(piVar7,uVar2,local_144);
  uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"WorldMatrix");
  (**(code **)(*piVar7 + 0x98))(piVar7,uVar2,local_84);
  iVar6 = (**(code **)(*piVar7 + 0x24))(piVar7,0,&DAT_00e19990);
  if (iVar6 != 0) {
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar10 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    (**(code **)(*piVar7 + 0x78))(piVar7,iVar6,(float)fVar10);
  }
  iVar6 = (**(code **)(*piVar7 + 0x24))(piVar7,0,"Selected");
  if (iVar6 != 0) {
    uVar2 = DAT_00f092fc;
    if (!bVar1) {
      uVar2 = 0;
    }
    (**(code **)(*piVar7 + 0x78))(piVar7,iVar6,uVar2);
  }
  local_8 = 0;
  (**(code **)(*piVar7 + 0xfc))(piVar7,&local_8,0);
  if (local_8 != 0) {
    uVar9 = 0;
    do {
      (**(code **)(*piVar7 + 0x100))(piVar7,uVar9);
      FUN_009f9d50();
      (**(code **)(*piVar7 + 0x108))(piVar7);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_8);
  }
  (**(code **)(*piVar7 + 0x10c))(piVar7);
  return;
}

