// FUN_007a7b60 @ 007a7b60 body=[[007a7b60, 007a7c8a] [007a7c8e, 007a7ca9] [007a7cad, 007a7cca] [007a7cce, 007a7d1b] [007a7d1f, 007a7d5a]]


void FUN_007a7b60(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_84;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b1f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_007a8070();
  iVar2 = *(int *)(in_ECX + 0x3ac);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xd0) = 0;
    (**(code **)(**(int **)(iVar2 + 0x30) + 0x54))();
    iVar1 = *(int *)(iVar2 + 0x4c);
    *(undefined1 *)(iVar1 + 0x30) = 0;
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x38) + 0x18) + 0x38))();
    (**(code **)(**(int **)(iVar2 + 0x34) + 0x54))();
    (**(code **)(*(int *)(*(int *)(iVar2 + 0x48) + 0x18) + 0x38))();
  }
  iVar2 = *(int *)(in_ECX + 0x3b0);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(*(int *)(iVar2 + 0x100) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(iVar2 + 0x4c) + 0x18) + 0x38))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x54))();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("HostEditBox",0xb);
  local_8 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x3b8) + 0x40))(local_68);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("\'s Game",7);
  local_8._0_1_ = 1;
  uVar3 = FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x40))(uVar3);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("HostEditBox",0xb);
  local_8 = 3;
  uVar3 = (**(code **)(**(int **)(local_14 + 0x3b8) + 0x40))(local_4c);
  FUN_009b6400(uVar3);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  (**(code **)(*(int *)(*(int *)(local_14 + 0x3b8) + 0x18) + 0x34))();
  (**(code **)(**(int **)(local_14 + 0x3b8) + 0x2c))();
  ExceptionList = local_10;
  return;
}

