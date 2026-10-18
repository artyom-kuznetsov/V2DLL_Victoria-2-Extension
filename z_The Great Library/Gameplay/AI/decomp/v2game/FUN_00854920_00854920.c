// FUN_00854920 @ 00854920 body=[[00854920, 0085496c] [00854970, 00854a72]]


undefined4 FUN_00854920(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = (int)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  param_1 = (int *)0x5f5e100;
  local_18 = 0;
  piVar3 = (int *)*param_3;
  ExceptionList = &local_10;
  if ((int *)*param_3 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar3[2];
      iVar2 = *piVar3;
      for (piVar3 = (int *)*param_2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        if (*piVar3 == iVar2) goto LAB_008549f5;
      }
      if (((*(int *)(iVar2 + 0x10) != 0) &&
          (iVar4 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(iVar6 + 0x38) * 0x10)
                           + *(int *)(iVar2 + 0x6c) * 4), iVar4 != 0)) &&
         (*(int *)(iVar4 + 0x5c) < 1)) {
        local_24 = *(undefined4 *)(iVar6 + 0x34);
        local_20 = *(undefined4 *)(iVar6 + 0x38);
        FUN_00564770(iVar4,&local_1c,&local_24);
        if ((int)local_1c < (int)param_1) {
          param_1 = local_1c;
          local_18 = iVar2;
        }
      }
LAB_008549f5:
      iVar2 = local_18;
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (local_18 != 0) {
      iVar4 = FUN_00aae9af(0x48);
      local_8 = 0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00584a30(iVar4,*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar6 + 0x34),
                             *(undefined4 *)(iVar6 + 0x38));
      }
      local_8 = 0xffffffff;
      iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar5);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

