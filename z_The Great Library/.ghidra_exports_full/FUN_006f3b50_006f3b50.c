// FUN_006f3b50 @ 006f3b50 body=[[006f3b50, 006f3c3c] [006f3c40, 006f3c56] [006f3c5a, 006f3c6c]]


void FUN_006f3b50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
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
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x3cc) = param_1;
  FUN_006f53a0(in_ECX,0);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("country_listbox",0xf);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("investment_browser",0x12);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar1 + 0x7c))(local_48);
  iVar2 = *(int *)(iVar2 + 0x104);
  if (iVar2 != 0) {
    FUN_00401000(0x3f000000,extraout_ECX,1,1);
    uVar3 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))(uVar3);
  }
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
  ExceptionList = local_10;
  return;
}

