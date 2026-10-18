// FUN_009a4dc0 @ 009a4dc0 body=[[009a4dc0, 009a4ee6] [009a4eea, 009a4f03] [009a4f07, 009a4ff3] [009a4ff7, 009a50d8] [009a50dc, 009a50f5] [009a50f9, 009a51b1] [009a51b5, 009a51c5]]


/* WARNING: Removing unreachable block (ram,0x009a4efb) */
/* WARNING: Removing unreachable block (ram,0x009a50ed) */

char FUN_009a4dc0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  uint in_stack_00000018;
  undefined4 local_5c;
  uint local_48;
  uint local_40;
  uint local_2c;
  uint local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b619a2;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 0;
  local_11 = '\x01';
  ExceptionList = &local_10;
  if (DAT_0131c974 == 0) {
    ExceptionList = &local_10;
    uVar2 = FUN_00aae9af(0x10);
    local_8._0_1_ = 1;
    local_1c = uVar2;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(uVar2 + 8) = 0;
      uVar3 = FUN_00993dd0();
      *(undefined4 *)(uVar2 + 4) = uVar3;
      *(undefined4 *)uVar3 = uVar3;
      *(int *)(*(int *)(uVar2 + 4) + 4) = *(int *)(uVar2 + 4);
      *(int *)(*(int *)(uVar2 + 4) + 8) = *(int *)(uVar2 + 4);
      *(undefined1 *)(*(int *)(uVar2 + 4) + 0x34) = 1;
      *(undefined1 *)(*(int *)(uVar2 + 4) + 0x35) = 1;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_009a5820(uVar2);
  }
  iVar4 = FUN_005484e0(&param_1,&DAT_00e07a5c,4);
  if (iVar4 == -1) {
    iVar4 = FUN_005484e0(&param_1,&DAT_00e07bdc,4);
    if (iVar4 != -1) {
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (int *)0x0) {
          DAT_00f20c18 = (int *)0x0;
        }
        else {
          *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
        }
      }
      cVar1 = (**(code **)(*DAT_00f20c18 + 0x24))(&param_1);
      if (cVar1 == '\0') {
        FUN_00409350("script\\",7);
        local_8._0_1_ = 9;
        uVar3 = FUN_00988f20(&param_1);
        local_8._0_1_ = 10;
        FUN_00408ed0(uVar3,0,0xffffffff);
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c);
        }
        local_8 = (uint)local_8._1_3_ << 8;
      }
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (int *)0x0) {
          DAT_00f20c18 = (int *)0x0;
        }
        else {
          *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
        }
      }
      (**(code **)(*DAT_00f20c18 + 0x24))(&param_1);
    }
  }
  else {
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    cVar1 = (**(code **)(*DAT_00f20c18 + 0x24))(&param_1);
    if (cVar1 == '\0') {
      FUN_00409350("interface/",10);
      local_8._0_1_ = 3;
      uVar3 = FUN_00988f20(&param_1);
      local_8._0_1_ = 4;
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_2c = 0xf;
      local_40 = local_40 & 0xffffff00;
    }
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    cVar1 = (**(code **)(*DAT_00f20c18 + 0x24))(&param_1);
    if (cVar1 != '\0') {
      local_1c = DAT_01258a80;
      iVar4 = FUN_00aae9af(0x360);
      local_8._0_1_ = 5;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        local_2c = 0xf;
        local_40 = local_40 & 0xffffff00;
        FUN_00409350("UNNAMED_SESSION",0xf);
        local_8 = CONCAT31(local_8._1_3_,6);
        local_18 = 1;
        puVar5 = (undefined4 *)FUN_00aae9af(0x114);
        local_8 = 7;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_0098ffc0(&param_1);
          *puVar5 = &PTR_FUN_00e37c3c;
        }
        local_8 = CONCAT31(local_8._1_3_,6);
        puVar5 = (undefined4 *)FUN_009a0bf0(iVar4,puVar5,1);
      }
      local_8 = 0;
      if (((local_18 & 1) != 0) && (0xf < local_2c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      if (local_1c == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(local_1c + 4);
      }
      (**(code **)(*piVar7 + 0xc))(puVar5);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      FUN_009a4190();
    }
  }
  iVar4 = DAT_0131c974;
  local_1c = FUN_009a59b0(&param_1);
  if ((local_1c == *(uint *)(iVar4 + 4)) || (cVar1 = FUN_0098ab20(), cVar1 != '\0')) {
    local_18 = *(uint *)(iVar4 + 4);
    puVar6 = &local_18;
  }
  else {
    puVar6 = &local_1c;
  }
  uVar2 = *puVar6;
  if (uVar2 != *(uint *)(DAT_0131c974 + 4)) {
    piVar7 = (int *)**(int **)(uVar2 + 0x28);
    if (piVar7 != *(int **)(uVar2 + 0x28)) {
      do {
        cVar1 = (*(code *)**(undefined4 **)piVar7[2])();
        if ((local_11 == '\0') || (local_11 = '\x01', cVar1 == '\0')) {
          local_11 = '\0';
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(uVar2 + 0x28));
    }
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return local_11;
}

