// FUN_00624580 @ 00624580 body=[[00624580, 0062468b] [0062468f, 006246b3] [006246b7, 006246cd] [006246d1, 006246f1] [006246f5, 0062474a] [0062474e, 006247e2] [006247e6, 006248f7]]


void FUN_00624580(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  char *in_ECX;
  undefined4 extraout_ECX;
  undefined4 local_b0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  int local_40;
  int *local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba1a76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)in_ECX;
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(in_ECX + 4);
  if (*(char *)(iVar3 + 0xd11) != '\0') {
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    piVar8 = *(int **)(DAT_012588e8 + 0xb24);
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    pcVar6 = in_ECX;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(in_ECX,(int)pcVar6 - (int)(in_ECX + 1));
    local_8._0_1_ = 2;
    uVar7 = FUN_00988fa0(local_78);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(*piVar8 + 0x120))(uVar7,local_38,local_94,0);
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b0);
    }
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_78[0]);
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_8 = 0xffffffff;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_94[0]);
    }
  }
  local_8 = 0xffffffff;
  FUN_00627580(param_1);
  FUN_0062b620(param_1);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("country_listbox",0xf);
  local_8 = 4;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(local_38);
  local_8 = 0xffffffff;
  local_3c = piVar8;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_18 = 1;
  local_1c = 0;
  puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
  piVar2 = (int *)*puVar9;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      iVar3 = piVar8[0x54];
      iVar10 = (**(code **)(*piVar8 + 0x2c))();
      iVar10 = *(int *)(iVar10 + 8);
      iVar11 = (**(code **)(*piVar8 + 0x2c))();
      iVar11 = *(int *)(iVar11 + 8) - iVar3;
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      iVar4 = piVar8[0x41];
      fVar5 = ((float)local_1c * (float)(iVar10 - iVar3)) / (float)iVar11 - 1.0;
      if ((iVar4 != 0) && (DAT_00f092dc < fVar5)) {
        FUN_00401000((fVar5 + 0.0005) * 1000.0,extraout_ECX,1,1);
        uVar7 = FUN_00b31c00();
        (**(code **)(*(int *)(iVar4 + 0x54) + 0x1c))(uVar7);
      }
      ExceptionList = local_10;
      return;
    }
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("country_select",0xe);
    local_8 = 5;
    piVar8 = (int *)(**(code **)(**(int **)(iVar3 + 0x20) + 0x34))(local_5c);
    local_40 = *(int *)(param_1 + 0x38c);
    iVar10 = (**(code **)(*piVar8 + 0x80))();
    local_11 = iVar10 == local_40;
    local_8 = 0xffffffff;
    if (0xf < local_48) break;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if ((bool)local_11) {
      if (*(char *)(*(int *)(iVar3 + 0x20) + 0x67) != '\0') {
        ExceptionList = local_10;
        return;
      }
      local_1c = local_18;
    }
    local_18 = local_18 + 1;
    piVar8 = local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_5c[0]);
}

