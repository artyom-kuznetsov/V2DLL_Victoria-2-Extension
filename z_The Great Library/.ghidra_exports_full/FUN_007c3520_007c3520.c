// FUN_007c3520 @ 007c3520 body=[[007c3520, 007c355b] [007c3565, 007c35bc] [007c35c0, 007c362e] [007c3632, 007c3646]]


void FUN_007c3520(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
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
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x16c) = 1;
  if (*(int *)(in_ECX + 0x94) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x94));
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("pop_province_list",0x11);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  piVar2 = (int *)*puVar3;
  do {
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("poplistbutton",0xd);
    local_8 = 1;
    piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x20) + 0x34))(local_48);
    (**(code **)(*piVar4 + 0x48))(1);
    local_8 = 0xffffffff;
  } while (local_34 < 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

