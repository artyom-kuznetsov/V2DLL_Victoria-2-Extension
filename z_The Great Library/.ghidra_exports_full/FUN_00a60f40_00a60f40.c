// FUN_00a60f40 @ 00a60f40 body=[[00a60f40, 00a61365] [00a61369, 00a61379] [00a61383, 00a61399]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a60f40(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint **ppuVar8;
  DWORD DVar9;
  uint uVar10;
  uint *puStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  uint *puStack_148;
  uint uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  uint local_110;
  int local_10c;
  undefined4 local_108;
  int *piStack_f8;
  undefined **appuStack_c8 [19];
  void *pvStack_7c;
  undefined1 uStack_74;
  undefined1 uStack_60;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b54a91;
  pvStack_14 = ExceptionList;
  local_11c = *(int *)(param_1[7] + 0x68);
  ExceptionList = &pvStack_14;
  *(int *)(param_1[7] + 0x68) = local_11c + 1;
  local_110 = 0;
  local_118 = 0;
  uStack_140 = *(undefined4 *)(param_3 + 0xc);
  uStack_13c = (uint)*(ushort *)(param_3 + 0x10);
  local_114 = 0;
  uStack_144 = 0xa60f9e;
  local_10c = local_11c;
  uStack_140 = FUN_00a60430();
  uStack_13c = 1;
  uStack_144 = 8;
  puStack_148 = &local_110;
  iStack_14c = 0xa60fb5;
  local_108 = uStack_140;
  (**(code **)(*param_1 + 0x14))();
  iStack_14c = 0xa60fc1;
  FUN_00a5fb40();
  uStack_1c = 0;
  for (; piStack_f8 != (int *)0x0; piStack_f8 = (int *)piStack_f8[2]) {
    local_11c = *piStack_f8;
    iStack_14c = 1;
    uStack_120 = 2;
    iStack_154 = 8;
    puStack_158 = &uStack_120;
    iStack_150 = local_118;
    (**(code **)(*param_1 + 0x14))();
  }
  iStack_14c = 0x20;
  iStack_150 = 0xa61008;
  iVar5 = FUN_00aae9af();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(iVar5 + 4) = uVar1;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined1 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x1c) = uStack_12c;
  }
  uVar10 = *(uint *)(iVar5 + 0x1c) % (uint)param_1[0x20];
  iStack_14c = 8;
  iStack_150 = 0xa6104e;
  piVar6 = (int *)FUN_00aae9af();
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar2 = *(int *)(param_1[0x21] + uVar10 * 4);
    *piVar6 = iVar5;
    piVar6[1] = iVar2;
  }
  *(int **)(param_1[0x21] + uVar10 * 4) = piVar6;
  param_1[0x1f] = param_1[0x1f] + 1;
  iVar5 = param_1[7];
  iVar2 = *(int *)(iVar5 + 0x5c);
  iStack_14c = 0x10;
  iStack_150 = 0xa6108c;
  puVar7 = (undefined4 *)FUN_00aae9af();
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = uStack_12c;
    puVar7[1] = iVar2;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
  }
  iVar3 = *(int *)(iVar5 + 0x60);
  *(undefined4 **)(iVar5 + 0x5c) = puVar7;
  *(int *)(iVar5 + 0x60) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(iVar5 + 0x58) = puVar7;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar7;
  }
  uStack_120 = uStack_128 | 2;
  iStack_14c = 1;
  iStack_150 = -1;
  iStack_154 = 8;
  puStack_158 = &uStack_120;
  (**(code **)(*param_1 + 0x14))();
  puStack_148 = (uint *)(uint)*(ushort *)(param_1 + 0x23);
  if (*(ushort *)(param_1 + 0x23) == 0) {
    uVar1 = *(undefined4 *)(param_3 + 0xc);
    uStack_144 = uStack_13c & 0xffff;
    puStack_148 = (uint *)0x7;
    (**(code **)(*param_1 + 0x14))(&puStack_148);
    *(undefined2 *)(param_1 + 0x23) = (undefined2)iStack_14c;
    *(undefined4 *)(param_1[7] + 0x40) = uVar1;
    uStack_144 = 0;
    puStack_158 = (uint *)0x1;
    ppuVar8 = &puStack_158;
    iStack_154 = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1[7] + 0x40);
    (**(code **)(*param_1 + 0x14))(&stack0xfffffec8,8,0xffffffff,1);
    *(undefined2 *)(param_1 + 0x23) = puStack_158._0_2_;
    *(undefined4 *)(param_1[7] + 0x40) = uVar1;
    iStack_154 = 0;
    puStack_148 = (uint *)0x1;
    ppuVar8 = &puStack_148;
    uStack_144 = uVar1;
  }
  (**(code **)(*param_1 + 0x14))(ppuVar8,8,0xffffffff);
  iStack_14c = *(int *)(param_1[7] + 0x54);
  iStack_154 = iStack_14c >> 0x1f;
  iStack_150 = 4;
  (**(code **)(*param_1 + 0x14))(&iStack_150,8,puStack_148,1);
  puVar7 = (undefined4 *)FUN_00aae9af(4);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 1;
  }
  *(undefined4 **)(param_3 + 0x14) = puVar7;
  DVar9 = timeGetTime();
  DAT_012586d0 = DVar9 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  puVar4 = puStack_158;
  (**(code **)(*param_1 + 0x6c))(puStack_158);
  *(uint **)(param_1[7] + 0x10c) = puVar4;
  for (puVar7 = *(undefined4 **)(param_1[7] + 4); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)puVar7[2]) {
    (**(code **)(*(int *)*puVar7 + 4))(6);
  }
  DVar9 = timeGetTime();
  DAT_012586d0 = DVar9 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  uStack_144 = 0xf;
  puStack_148 = (uint *)0x0;
  puStack_158 = (uint *)((uint)puStack_158 & 0xffffff00);
  FUN_00409350("server.cpp",10);
  uStack_60 = 1;
  piVar6 = (int *)FUN_004015b0(&puStack_158,0x200,0x301);
  uStack_60 = 2;
  FUN_00987d50(piVar6,"New Client Connected",0x14,0);
  FUN_00408be0(piVar6);
  uVar10 = 0;
  if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))(),
     iVar5 == -1)) {
    uVar10 = 4;
  }
  if (uVar10 != 0) {
    uVar10 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar10;
    if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
      uVar10 = uVar10 | 4;
    }
    FUN_00401120(uVar10,0);
  }
  uStack_74 = 1;
  FUN_00987ac0(appuStack_c8);
  appuStack_c8[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_c8);
  if (puStack_158 < (uint *)0x10) {
    if (iStack_150 == 0) {
      ExceptionList = pvStack_7c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_150);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(1);
}

