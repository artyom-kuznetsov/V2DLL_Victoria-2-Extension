// FUN_006e2770 @ 006e2770 body=[[006e2770, 006e27e0] [006e27e4, 006e284a] [006e284e, 006e289e] [006e28a2, 006e28d1]]


void FUN_006e2770(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
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
  puStack_c = &LAB_00b62728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(in_EDX + 8) = in_ECX;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("goods_filter_template",0x15);
  local_8 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2c))(local_48,param_2);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_EDX + 4) = uVar1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("goods_type",10);
  local_8 = 1;
  piVar2 = (int *)(**(code **)(**(int **)(in_EDX + 4) + 0x44))(local_48);
  (**(code **)(*piVar2 + 0x48))
            (*(int *)(*(int *)(*(int *)(DAT_012587f0 + 0xc) + in_ECX * 4) + 8) + 2);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("filter_button",0xd);
  local_8 = 2;
  iVar3 = (**(code **)(**(int **)(in_EDX + 4) + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *(undefined4 *)(in_EDX + 0x10) = param_3;
  FUN_006e28e0(*(undefined1 *)(in_EDX + 0xc));
  ExceptionList = local_10;
  return;
}

