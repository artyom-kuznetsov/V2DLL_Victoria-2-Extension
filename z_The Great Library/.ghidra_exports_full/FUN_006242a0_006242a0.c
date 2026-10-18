// FUN_006242a0 @ 006242a0 body=[[006242a0, 00624395] [00624399, 006243b0] [006243b4, 006243d2] [006243d6, 00624466] [0062446a, 0062447c]]


void FUN_006242a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9a590;
  local_10 = ExceptionList;
  iVar2 = *(int *)(in_ECX + 0x60);
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (8 < iVar1) {
    iVar2 = iVar1 + -9;
    iVar1 = 9;
  }
  if ((*(int *)(in_ECX + 0x5c) == iVar1) && (iVar2 == *(int *)(in_ECX + 0x60))) {
    *(bool *)(in_ECX + 100) = *(char *)(in_ECX + 100) == '\0';
  }
  *(int *)(in_ECX + 0x5c) = iVar1;
  iVar1 = DAT_012588e8;
  *(int *)(in_ECX + 0x60) = iVar2;
  if (*(char *)(iVar1 + 0xd11) != '\0') {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("diplomacy_sort",0xe);
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_2c,local_48,local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
  }
  FUN_00625a50(in_ECX,0);
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("country_listbox",0xf);
  local_8 = 3;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_80);
  iVar2 = *(int *)(iVar2 + 0x104);
  if (iVar2 != 0) {
    FUN_00401000(0x3f000000,extraout_ECX,1,1);
    uVar3 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))(uVar3);
  }
  if (local_6c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_80[0]);
}

