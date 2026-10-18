// FUN_0096d700 @ 0096d700 body=[[0096d700, 0096d7ed] [0096d7f0, 0096d8db] [0096d8df, 0096d930] [0096d934, 0096d98c]]


undefined4 * FUN_0096d700(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EDI;
  undefined8 uVar6;
  undefined1 local_90 [20];
  int local_7c;
  undefined4 local_48 [5];
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba2819;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  local_20 = 1;
  FUN_0096fb80();
  iVar1 = *(int *)(param_2 + 100);
  if (*(int *)(iVar1 + 0x164) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(iVar1 + 0x15c);
  }
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(iVar1 + 300) * 0x10) +
                    *(int *)(iVar5 + 0x6c) * 4);
  local_11 = '\0';
  local_24 = piVar2;
  cVar3 = (**(code **)(*piVar2 + 0x34))();
  if ((cVar3 != '\0') && (*(int *)(piVar2[0x1f] + *(int *)(unaff_EDI + 0x28) * 4) != 0)) {
    local_11 = '\x01';
  }
  local_1c = 0;
  if (0 < (*(int *)(unaff_EDI + 0xcc) - *(int *)(unaff_EDI + 200)) / 0x30) {
    local_18 = 0;
    do {
      iVar1 = *(int *)(unaff_EDI + 200);
      if (((*(int *)(local_18 + 0x24 + iVar1) - *(int *)(local_18 + 0x20 + iVar1) & 0xfffffffcU) !=
           0) || ((*(int *)(local_18 + 0xc + iVar1) - *(int *)(local_18 + 8 + iVar1) & 0xfffffff0U)
                  != 0)) {
        FUN_008a8650(0);
        local_7c = param_2;
        (**(code **)(*(int *)(*(int *)(unaff_EDI + 200) + local_18) + 0x18))(local_2c,local_90);
        if (local_11 != '\0') {
          iVar1 = *(int *)(local_24[0x1f] + *(int *)(unaff_EDI + 0x28) * 4);
          uVar6 = __allmul(iVar1,iVar1 >> 0x1f,100000,0);
          local_28 = __alldiv(uVar6,1000,0);
          local_28 = local_28 / 1000;
          uVar4 = FUN_0054a540(local_48,&local_28);
          local_8 = 1;
          FUN_00448aa0(uVar4,0,0xffffffff);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_48[0]);
          }
          FUN_00448740(&DAT_00dee2cc,1);
        }
        uVar4 = FUN_008aed50(*(int *)(unaff_EDI + 200) + local_18,local_48,local_90);
        local_8 = 2;
        FUN_00408ed0(uVar4,0,0xffffffff);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
        FUN_00448740(&DAT_00dee2cc,1);
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + 0x30;
    } while (local_1c < (*(int *)(unaff_EDI + 0xcc) - *(int *)(unaff_EDI + 200)) / 0x30);
  }
  ExceptionList = local_10;
  return param_1;
}

