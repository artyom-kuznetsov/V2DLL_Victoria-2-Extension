// FUN_00721cf0 @ 00721cf0 body=[[00721cf0, 00721d64] [00721d68, 00721ddb] [00721ddf, 00721e06] [00721e0a, 00721e9e] [00721ea2, 00721fcd]]


void FUN_00721cf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 local_8c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9211e;
  local_10 = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("goods_entry_offset",0x12);
  local_8 = 0;
  iVar4 = (**(code **)(*DAT_01258a80 + 0x48))(local_54);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_2c = *(int *)(iVar4 + 0x68);
  local_30 = *(int *)(iVar4 + 100);
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("group_",6);
  local_8 = 1;
  uVar5 = FUN_00988f20(param_2 + 0xc);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_1c = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(uVar5);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c);
  }
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_38 = *(int **)(param_2 + 0x28);
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  while( true ) {
    do {
      if (local_38 < *(int **)(param_2 + 0x28)) {
        ExceptionList = local_10;
        return;
      }
      if (*(int **)(param_2 + 0x2c) <= local_38) {
        ExceptionList = local_10;
        return;
      }
      iVar4 = *local_38;
      local_38 = local_38 + 1;
    } while (*(char *)(iVar4 + 0x3c) != '\0');
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350("goods_entry",0xb);
    local_8 = 3;
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x54) + 0x34))();
    iVar1 = *piVar6;
    uVar5 = (**(code **)(**(int **)(param_1 + 0x54) + 0x3c))();
    piVar6 = (int *)(**(code **)(iVar1 + 0x2c))(local_70,uVar5);
    local_8 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (piVar6 == (int *)0x0) break;
    if ((*(int *)(param_1 + 0x6c) == 0) || (*(int *)(param_1 + 0x6c) == DAT_012587f0 + 0x48)) {
      *(int *)(param_1 + 0x6c) = iVar4;
    }
    local_14 = FUN_00aae9af(100);
    local_8 = 4;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_0071b200(local_14,iVar4,param_1);
    }
    local_8 = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x60);
    puVar7 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = local_14;
      puVar7[1] = iVar1;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar2 = *(int *)(param_1 + 100);
    *(undefined4 **)(param_1 + 0x60) = puVar7;
    *(int *)(param_1 + 100) = iVar2 + 1;
    if (iVar2 == 0) {
      *(undefined4 **)(param_1 + 0x5c) = puVar7;
    }
    else {
      *(undefined4 **)(iVar1 + 8) = puVar7;
    }
    local_18 = CONCAT22((short)local_24,(undefined2)local_28);
    (**(code **)(*piVar6 + 0x18))(local_18);
    piVar3 = local_1c;
    psVar8 = (short *)(**(code **)(*local_1c + 0x60))(local_20);
    if ((int)*psVar8 < local_28 + local_30 * 2) {
      local_24 = local_24 + local_2c;
      local_28 = 0;
    }
    else {
      local_28 = local_28 + local_30;
    }
    (**(code **)(*piVar3 + 0xbc))(iVar4 + 0xc,piVar6);
  }
  ExceptionList = local_10;
  return;
}

