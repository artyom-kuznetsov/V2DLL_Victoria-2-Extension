// FUN_0052db30 @ 0052db30 body=[[0052db30, 0052dcc2]]


void FUN_0052db30(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  longlong lVar7;
  undefined1 *apuStack_b0 [6];
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  uint local_74;
  int local_70;
  undefined1 local_60 [60];
  int local_24;
  uint local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f690;
  local_10 = ExceptionList;
  iVar4 = param_2[0x18];
  for (iVar6 = in_ECX; iVar6 != 0; iVar6 = iVar6 + -1) {
    iVar4 = *(int *)(iVar4 + 0x224);
  }
  local_14 = *(int **)(iVar4 + 0x18);
  local_70 = 0x52db77;
  ExceptionList = &local_10;
  FUN_004dab20();
  iVar4 = param_2[0x18];
  for (iVar6 = in_ECX; iVar6 != 0; iVar6 = iVar6 + -1) {
    iVar4 = *(int *)(iVar4 + 0x224);
  }
  *(undefined4 *)(iVar4 + 0x184) = 0;
  *(undefined1 *)(iVar4 + 0x188) = 0;
  local_70 = local_18;
  local_74 = local_1c;
  uStack_78 = DAT_00f0b344;
  iStack_7c = DAT_00f0b340;
  iStack_80 = 0x52dbb5;
  lVar7 = __allmul();
  iVar4 = param_2[0x18];
  uVar5 = (uint)(lVar7 >> 0xf);
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    iVar4 = *(int *)(iVar4 + 0x224);
  }
  puVar2 = (uint *)(iVar4 + 0x210);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + uVar5;
  *(int *)(iVar4 + 0x214) =
       *(int *)(iVar4 + 0x214) + (int)((ulonglong)(lVar7 >> 0xf) >> 0x20) +
       (uint)CARRY4(uVar3,uVar5);
  *(int *)(iVar4 + 0x218) = *(int *)(iVar4 + 0x218) + 0x32;
  iVar4 = *(int *)(param_1 + 0x20);
  if (param_2[0x17] != iVar4) {
    local_24 = param_2[0x16];
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[0x17] * 4);
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(iVar6 + 0x20)) {
      puStack_94 = auStack_90;
      local_74 = local_1c;
      local_70 = local_18;
      uStack_98 = 0x52dc36;
      (**(code **)(*param_2 + 0x20))();
      local_8 = 0;
      iVar4 = *local_14;
      local_14 = (int *)apuStack_b0;
      (**(code **)(iVar4 + 0x18))(apuStack_b0);
      apuStack_b0[0] = local_60;
      local_8 = 0xffffffff;
      uStack_78 = FUN_004f6370();
      iStack_7c = param_1 + 0x1c;
      local_8 = 1;
      uStack_84 = 0x52dc74;
      iStack_80 = iVar6;
      FUN_0053faa0();
      local_8 = 0xffffffff;
      local_70 = 0x52dc7f;
      FUN_0047aa50();
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x1580);
      puVar2 = (uint *)(iVar6 + iVar4 * 8);
      uVar5 = *puVar2;
      *puVar2 = *puVar2 + local_1c;
      piVar1 = (int *)(iVar6 + iVar4 * 8 + 4);
      *piVar1 = *piVar1 + local_18 + (uint)CARRY4(uVar5,local_1c);
    }
  }
  local_70 = local_18;
  local_74 = local_1c;
  uStack_78 = 4;
  iStack_7c = 0x52dcb0;
  FUN_00525770();
  ExceptionList = local_10;
  return;
}

