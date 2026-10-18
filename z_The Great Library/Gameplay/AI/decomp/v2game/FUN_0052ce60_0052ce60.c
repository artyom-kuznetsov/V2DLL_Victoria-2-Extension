// FUN_0052ce60 @ 0052ce60 body=[[0052ce60, 0052d12c] [0052d130, 0052d142]]


void FUN_0052ce60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int iVar9;
  undefined1 *apuStack_d0 [6];
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  int iStack_9c;
  undefined1 local_74 [20];
  undefined1 local_60 [44];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f6d6;
  local_10 = ExceptionList;
  iVar2 = in_ECX[0x18];
  iVar3 = iVar2;
  for (iVar9 = param_2; iVar9 != 0; iVar9 = iVar9 + -1) {
    iVar3 = *(int *)(iVar3 + 0x224);
  }
  piVar4 = *(int **)(iVar3 + 0x18);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar2 = *(int *)(iVar2 + 0x224);
  }
  ExceptionList = &local_10;
  *(int *)(iVar2 + 0x17c) = (*(int *)(*(int *)(iVar2 + 0x18) + 0xb8) * 1000) / 1000;
  iStack_9c = param_1;
  uStack_a4._4_4_ = &local_24;
  uStack_a8 = 0x52cefb;
  uStack_a4._0_4_ = piVar4;
  FUN_004da850();
  local_14 = &stack0xffffff6c;
  iStack_9c = 0x52cf1a;
  FUN_00525770();
  local_1c = in_ECX[0x16];
  puVar5 = *(uint **)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x17] * 4);
  if ((*(uint *)(DAT_012588e8 + 0xb60) == puVar5[8]) && (*(uint *)(param_1 + 0x20) != puVar5[8])) {
    local_14 = auStack_b0;
    puStack_b4 = auStack_b0;
    uStack_b8 = 0x52cf6a;
    (**(code **)(*in_ECX + 0x20))();
    local_8 = 0;
    local_18 = (undefined1 *)apuStack_d0;
    (**(code **)(*piVar4 + 0x18))(apuStack_d0);
    apuStack_d0[0] = local_60;
    local_8 = 0xffffffff;
    FUN_004f6370();
    iStack_9c = param_1 + 0x1c;
    local_8 = 1;
    uStack_a4._0_4_ = (int *)0x52cfa6;
    uStack_a4._4_4_ = puVar5;
    FUN_0053faa0();
    FUN_0047aa50();
  }
  else {
    uVar6 = puVar5[0x560];
    iVar2 = *(int *)(param_1 + 0x20);
    puVar5 = (uint *)(uVar6 + iVar2 * 8);
    uVar7 = *puVar5;
    *puVar5 = *puVar5 + local_24;
    piVar1 = (int *)(uVar6 + iVar2 * 8 + 4);
    *piVar1 = *piVar1 + local_20 + (uint)CARRY4(uVar7,local_24);
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_8 = 2;
  iStack_9c = 0x52cff4;
  _memset(local_74,0,0x40);
  FUN_00423920();
  local_8 = 3;
  FUN_0047dbb0();
  iVar2 = piVar4[0x4b];
  uStack_a4 = 0x8000;
  if ((((iVar2 != 0) && (uStack_a4 = 0x8000, DAT_01258734 != 0)) &&
      (uStack_a4 = 0x8000, iVar2 != DAT_01258734 + 0x10)) && (uStack_a4 = 0x8000, iVar2 != 0)) {
    uVar7 = *(uint *)(*(int *)(param_1 + 0xbcc) + 0x18);
    uStack_a4._4_4_ =
         (uint *)((((int)uVar7 >> 0x1f) << 0xf | uVar7 >> 0x11) << 0xf | (uVar7 & 0x1ffff) >> 2);
    iStack_9c = 0x1f40000;
    uStack_a4._0_4_ = (int *)(uVar7 << 0x1e);
    uStack_a8 = 0x52d072;
    uStack_a4 = __alldiv();
    uStack_a4 = uStack_a4 + 0x8000;
  }
  iStack_9c = 0x10000 - *(int *)(param_1 + 0xe70);
  uStack_a8 = 0x52d0a7;
  __allmul();
  iStack_9c = 0x52d0bc;
  FUN_0047de60();
  puVar8 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 4;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 0x18d;
    *puVar8 = CGoodsProject::vftable;
    FUN_0047db00();
    local_8._0_1_ = 5;
    FUN_0047db00();
    puVar8[0x2e] = local_24;
    puVar8[0x2f] = local_20;
  }
  *(undefined4 **)(iVar3 + 0x1d0) = puVar8;
  if (local_34 == 0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

