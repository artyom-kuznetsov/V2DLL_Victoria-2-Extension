// FUN_0071d210 @ 0071d210 body=[[0071d210, 0071d278] [0071d27c, 0071d2ca] [0071d2ce, 0071d31c] [0071d320, 0071d442] [0071d446, 0071d499] [0071d49d, 0071d4f0] [0071d4f4, 0071d547] [0071d54b, 0071d59e] [0071d5a2, 0071d5f5] [0071d5f9, 0071d6be] [0071d6c2, 0071d7ca] [0071d7ce, 0071d8e9] [0071d8ed, 0071d9d0]]


void FUN_0071d210(void)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  uint *puVar5;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined4 *local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint *local_20;
  int *local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ea44;
  local_10 = ExceptionList;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("government_needs_list",0x15);
  local_8 = 0;
  local_20 = (uint *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x7c))(local_7c);
  local_8 = 0xffffffff;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("factory_needs_list",0x12);
  local_8 = 1;
  local_1c[1] = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x7c))(local_58);
  local_8 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("pop_needs_list",0xe);
  local_8 = 2;
  local_1c[2] = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x7c))(local_3c);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  (**(code **)(*local_20 + 0x5c))();
  (**(code **)(*local_1c[1] + 0x5c))();
  (**(code **)(*local_1c[2] + 0x5c))();
  local_1c[1] = *(int **)(unaff_ESI + 300);
  if (local_1c[1] != *(void **)(unaff_ESI + 0x130)) {
    local_20 = (uint *)0x0;
    FID_conflict__memcpy(local_1c[1],*(void **)(unaff_ESI + 0x130),0);
    *(int *)(unaff_ESI + 0x130) = (int)local_20 + (int)local_1c[1];
  }
  local_1c[1] = *(int **)(unaff_ESI + 0x13c);
  if (local_1c[1] != *(void **)(unaff_ESI + 0x140)) {
    local_20 = (uint *)0x0;
    FID_conflict__memcpy(local_1c[1],*(void **)(unaff_ESI + 0x140),0);
    *(int *)(unaff_ESI + 0x140) = (int)local_20 + (int)local_1c[1];
  }
  local_1c[1] = *(int **)(unaff_ESI + 0x14c);
  if (local_1c[1] != *(int **)(unaff_ESI + 0x150)) {
    local_20 = (uint *)0x0;
    FID_conflict__memcpy(local_1c[1],*(int **)(unaff_ESI + 0x150),0);
    *(int *)(unaff_ESI + 0x150) = (int)local_20 + (int)local_1c[1];
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("needs_government_sort_by_goods",0x1e);
  local_8 = 3;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_ESI + 0x160);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("needs_government_sort_by_value",0x1e);
  local_8 = 4;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_ESI + 0x18c);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("needs_factories_sort_by_goods",0x1d);
  local_8 = 5;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_ESI + 0x1bc);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("needs_factories_sort_by_value",0x1d);
  local_8 = 6;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_ESI + 0x1e8);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("needs_pops_sort_by_goods",0x18);
  local_8 = 7;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_ESI + 0x218);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("needs_pops_sort_by_value",0x18);
  local_8 = 8;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_3c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(unaff_ESI + 0x244);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_20 = (uint *)(DAT_012587f0 + 0xc);
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  puVar4 = (undefined4 *)*local_20;
  puVar5 = local_20;
LAB_0071d610:
  do {
    do {
      if ((puVar4 < (undefined4 *)*puVar5) || ((undefined4 *)puVar5[1] <= puVar4)) {
        FUN_0071d9e0(unaff_ESI);
        ExceptionList = local_10;
        return;
      }
      local_1c[1] = (int *)*puVar4;
      piVar3 = (int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3e4) +
                      (uint)*(byte *)(local_1c[1][2] + 0x3a4 + *(int *)(DAT_012588e8 + 0xbcc)) * 8);
      local_60 = puVar4 + 1;
      iVar2 = piVar3[1];
      puVar4 = local_60;
    } while ((iVar2 < 0) || ((iVar2 < 1 && (*piVar3 == 0))));
    piVar3 = (int *)FUN_00aae9af(0x38);
    local_8 = 9;
    if (piVar3 == (int *)0x0) {
      local_1c[2] = (int *)0x0;
    }
    else {
      local_1c[2] = *(int **)(unaff_ESI + 0x54);
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_1c[0] = piVar3;
      FUN_00409350("goods_needs_entry",0x11);
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00719e50(piVar3,local_1c[2],local_58,unaff_ESI + 0x464);
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      *piVar3 = (int)CGoodsNeedEntry::vftable;
      piVar3[7] = (int)CGoodsNeedEntry::vftable;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      local_1c[2] = piVar3;
    }
    local_8 = 0xffffffff;
    ppiVar1 = *(int ***)(unaff_ESI + 0x130);
    local_1c[0] = local_1c[2];
    if (local_1c < ppiVar1) {
      if (local_1c < *(int ***)(unaff_ESI + 300)) goto LAB_0071d73b;
      local_1c[2] = (int *)((int)local_1c - (int)*(int ***)(unaff_ESI + 300) >> 2);
      if (ppiVar1 == *(int ***)(unaff_ESI + 0x134)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(unaff_ESI + 0x130) != (undefined4 *)0x0) {
        **(undefined4 **)(unaff_ESI + 0x130) =
             *(undefined4 *)(*(int *)(unaff_ESI + 300) + (int)local_1c[2] * 4);
      }
    }
    else {
LAB_0071d73b:
      if (ppiVar1 == *(int ***)(unaff_ESI + 0x134)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(unaff_ESI + 0x130) != (undefined4 *)0x0) {
        **(undefined4 **)(unaff_ESI + 0x130) = local_1c[2];
      }
    }
    *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + 4;
    piVar3 = (int *)FUN_00aae9af(0x38);
    local_8 = 0xb;
    if (piVar3 == (int *)0x0) {
      local_1c[2] = (int *)0x0;
    }
    else {
      local_1c[2] = *(int **)(unaff_ESI + 0x54);
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_1c[0] = piVar3;
      FUN_00409350("goods_needs_entry",0x11);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00719e50(piVar3,local_1c[2],local_58,unaff_ESI + 0x464);
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      *piVar3 = (int)CGoodsNeedEntry::vftable;
      piVar3[7] = (int)CGoodsNeedEntry::vftable;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      local_1c[2] = piVar3;
    }
    local_8 = 0xffffffff;
    local_1c[0] = local_1c[2];
    ppiVar1 = *(int ***)(unaff_ESI + 0x140);
    if (local_1c < ppiVar1) {
      if (local_1c < *(int ***)(unaff_ESI + 0x13c)) goto LAB_0071d847;
      local_1c[2] = (int *)((int)local_1c - (int)*(int ***)(unaff_ESI + 0x13c) >> 2);
      if (ppiVar1 == *(int ***)(unaff_ESI + 0x144)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(unaff_ESI + 0x140) != (undefined4 *)0x0) {
        **(undefined4 **)(unaff_ESI + 0x140) =
             *(undefined4 *)(*(int *)(unaff_ESI + 0x13c) + (int)local_1c[2] * 4);
      }
    }
    else {
LAB_0071d847:
      if (ppiVar1 == *(int ***)(unaff_ESI + 0x144)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(unaff_ESI + 0x140) != (undefined4 *)0x0) {
        **(undefined4 **)(unaff_ESI + 0x140) = local_1c[2];
      }
    }
    *(int *)(unaff_ESI + 0x140) = *(int *)(unaff_ESI + 0x140) + 4;
    piVar3 = (int *)FUN_00aae9af(0x38);
    local_8 = 0xd;
    if (piVar3 == (int *)0x0) {
      local_1c[1] = (int *)0x0;
    }
    else {
      local_1c[2] = *(int **)(unaff_ESI + 0x54);
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      local_1c[0] = piVar3;
      FUN_00409350("goods_needs_entry",0x11);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FUN_00719e50(piVar3,local_1c[2],local_98,unaff_ESI + 0x464);
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98[0]);
      }
      *piVar3 = (int)CGoodsNeedEntry::vftable;
      piVar3[7] = (int)CGoodsNeedEntry::vftable;
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      local_1c[1] = piVar3;
    }
    local_8 = 0xffffffff;
    local_1c[0] = local_1c[1];
    ppiVar1 = *(int ***)(unaff_ESI + 0x150);
    if (local_1c < ppiVar1) {
      if (*(int ***)(unaff_ESI + 0x14c) <= local_1c) {
        local_1c[1] = (int *)((int)local_1c - (int)*(int ***)(unaff_ESI + 0x14c) >> 2);
        if (ppiVar1 == *(int ***)(unaff_ESI + 0x154)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(unaff_ESI + 0x150) != (undefined4 *)0x0) {
          **(undefined4 **)(unaff_ESI + 0x150) =
               *(undefined4 *)(*(int *)(unaff_ESI + 0x14c) + (int)local_1c[1] * 4);
        }
        *(int *)(unaff_ESI + 0x150) = *(int *)(unaff_ESI + 0x150) + 4;
        puVar4 = local_60;
        puVar5 = local_20;
        goto LAB_0071d610;
      }
    }
    if (ppiVar1 == *(int ***)(unaff_ESI + 0x154)) {
      FUN_00a513f0();
    }
    if (*(undefined4 **)(unaff_ESI + 0x150) != (undefined4 *)0x0) {
      **(undefined4 **)(unaff_ESI + 0x150) = local_1c[1];
    }
    *(int *)(unaff_ESI + 0x150) = *(int *)(unaff_ESI + 0x150) + 4;
    puVar4 = local_60;
    puVar5 = local_20;
  } while( true );
}

