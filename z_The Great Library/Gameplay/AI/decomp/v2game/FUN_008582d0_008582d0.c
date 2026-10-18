// FUN_008582d0 @ 008582d0 body=[[008582d0, 0085845e]]


/* WARNING: Removing unreachable block (ram,0x008583f2) */

void FUN_008582d0(void)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int unaff_EDI;
  longlong lVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52b99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_008580e0(unaff_EDI,in_ECX);
  if (iVar1 != 0) {
    if (*(int *)(in_ECX + 0x20) == *(int *)(unaff_EDI + 0x38)) {
      plVar2 = (longlong *)
               FUN_004da790(*(undefined4 *)(unaff_EDI + 0x78),
                            *(undefined4 *)
                             (*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4),
                            *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4) +
                            0x1184);
      lVar6 = *plVar2;
    }
    else {
      if ((DAT_013f28e8 & 1) == 0) {
        DAT_013f28e8 = DAT_013f28e8 | 1;
        local_8 = 0;
        FUN_00561bd0(&DAT_013f2890);
        _atexit((_func_4879 *)&LAB_00c84b40);
        local_8 = 0xffffffff;
      }
      FUN_00561c40();
      puVar3 = (undefined4 *)
               FUN_004da790(*(undefined4 *)(unaff_EDI + 0x78),
                            *(undefined4 *)
                             (*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4),
                            &DAT_013f2890);
      lVar6 = __allmul(*puVar3,puVar3[1],0x18000,0);
      lVar6 = lVar6 >> 0xf;
    }
    if (lVar6 < *(longlong *)
                 (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4) + 0xe78)) {
      iVar4 = FUN_00aae9af(0x58);
      local_8 = 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0057b560(iVar4,*(undefined4 *)(unaff_EDI + 0x78),*(undefined4 *)(iVar1 + 0x58),
                             *(undefined4 *)(unaff_EDI + 0x34),*(undefined4 *)(unaff_EDI + 0x38));
      }
      local_8 = 0xffffffff;
      iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

