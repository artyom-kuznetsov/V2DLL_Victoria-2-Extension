// FUN_004d1fa0 @ 004d1fa0 body=[[004d1fa0, 004d2189] [004d218d, 004d223e] [004d2242, 004d2256]]


void FUN_004d1fa0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *puVar6;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined1 local_60 [24];
  undefined4 local_48;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar4 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb42df;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (piVar2 = *(int **)(in_ECX + 0x48);
      (*(int **)(in_ECX + 0x48) <= piVar2 && (piVar2 < *(int **)(in_ECX + 0x4c)));
      piVar2 = piVar2 + 1) {
    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xacc) + *piVar2 * 4) + 400) = 0;
  }
  *(undefined4 *)(in_ECX + 0x84) = 0;
  FUN_004d1f00(in_ECX);
  FUN_008a8650(0);
  iVar4 = DAT_012587e4;
  if ((*(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48) & 0xfffffffcU) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = **(undefined4 **)(in_ECX + 0x48);
  }
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar3 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x54) *
                   (longlong)
                   (*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0x5c) * 4) + 0xbcc) + 0x290
                            ) + 1000),1000,0);
  iVar1 = *(int *)(iVar1 + *(int *)(in_ECX + 0x5c) * 4);
  if (0 < iVar3) {
    iVar3 = __alldiv((longlong)(*(int *)(*(int *)(iVar1 + 0xbcc) + 0x288) + 1000) * (longlong)iVar3,
                     1000,0);
  }
  piVar2 = (int *)(iVar1 + 0xea0);
  *piVar2 = *piVar2 + iVar3;
  if (*piVar2 < 0) {
    *(undefined4 *)(iVar1 + 0xea0) = 0;
  }
  FUN_00520ed0(*(undefined4 *)(*(int *)(iVar4 + 4) + *(int *)(in_ECX + 0x5c) * 4));
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  FUN_00409350("on_colony_to_state",0x12);
  local_c = 2;
  if (DAT_0131a584 == 0) {
    iVar4 = FUN_00aae9af(0x1c);
    local_c._0_1_ = 3;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008b0060();
    }
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_008b2fa0(uVar5);
  }
  iVar4 = FUN_008b3060(local_98);
  if (iVar4 != 0) {
    iVar4 = FUN_008b24f0(iVar4,local_60);
    if (iVar4 != 0) {
      puVar6 = local_60;
      uVar5 = FUN_008a6620(extraout_ECX,puVar6);
      FUN_008a8120(uVar5,puVar6);
    }
  }
  local_c = 0xffffffff;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_98[0]);
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  FUN_00409350("on_colony_to_state_free_slaves",0x1e);
  local_c = 9;
  if (DAT_0131a584 == 0) {
    iVar4 = FUN_00aae9af(0x1c);
    local_c._0_1_ = 10;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_008b0060();
    }
    local_c = CONCAT31(local_c._1_3_,9);
    FUN_008b2fa0(uVar5);
  }
  iVar4 = FUN_008b3060(local_7c);
  if (iVar4 != 0) {
    iVar4 = FUN_008b24f0(iVar4,local_60);
    if (iVar4 != 0) {
      puVar6 = local_60;
      uVar5 = FUN_008a6620(extraout_ECX_00,puVar6);
      FUN_008a8120(uVar5,puVar6);
    }
  }
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  ExceptionList = local_14;
  return;
}

