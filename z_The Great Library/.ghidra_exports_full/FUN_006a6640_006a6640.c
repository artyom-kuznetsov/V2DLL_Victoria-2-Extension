// FUN_006a6640 @ 006a6640 body=[[006a6640, 006a6704] [006a6708, 006a675c] [006a6760, 006a6807] [006a680b, 006a682d] [006a6831, 006a6882]]


undefined4 FUN_006a6640(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7ee1b;
  local_10 = ExceptionList;
  piVar1 = *(int **)(in_ECX + 0x2c);
  DAT_0125899f = 1;
  local_11 = '\0';
  ExceptionList = &local_10;
  if (piVar1 != (int *)0x0) {
    local_11 = *(char *)((int)piVar1 + 0x67);
    ExceptionList = &local_10;
    (**(code **)(*piVar1 + 0x50))();
  }
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x30) + 0x34))();
  iVar3 = *piVar1;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x3c))();
  iVar3 = (**(code **)(iVar3 + 0x2c))(in_ECX + 0x10,uVar2);
  *(int *)(in_ECX + 0x2c) = iVar3;
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("ok_button",9);
  local_8 = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x34);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("cancel_button",0xd);
  local_8 = 1;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x84);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("title_text",10);
  local_8 = 2;
  if (DAT_01262ef4 == 0) {
    local_18 = FUN_00aae9af(0x44);
    local_8._0_1_ = 3;
    if (local_18 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006a4e30();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_006a59b0(uVar2);
  }
  uVar2 = FUN_006a6200(local_6c,*(undefined4 *)(in_ECX + 4));
  local_8 = CONCAT31(local_8._1_3_,4);
  local_18 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x3c))(local_34);
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_006a6890(0);
  FUN_006a6890(1);
  (**(code **)(**(int **)(in_ECX + 0x2c) + 0x2c))();
  if (local_11 != '\0') {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x18) + 0x34))();
  }
  ExceptionList = local_10;
  return 1;
}

