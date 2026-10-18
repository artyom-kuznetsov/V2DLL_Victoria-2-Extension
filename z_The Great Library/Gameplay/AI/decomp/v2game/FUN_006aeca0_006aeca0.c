// FUN_006aeca0 @ 006aeca0 body=[[006aeca0, 006aed48] [006aed4c, 006aee71] [006aee75, 006aee87]]


void FUN_006aeca0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
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
  puStack_c = &LAB_00b98bd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x5c) + 0x18) + 0x94))(param_1);
  cVar4 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x60) + 0x18) + 0x94))(param_1);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      ExceptionList = local_10;
      return;
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("unit_listbox",0xc);
    local_8 = 1;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x7c))(local_48);
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("unit_listbox",0xc);
    local_8 = 0;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x7c))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  cVar3 = (**(code **)(piVar5[1] + 0x94))(param_1);
  if (cVar3 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x2c))();
    piVar5 = (int *)*puVar6;
    do {
      if (piVar5 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
      iVar1 = *piVar5;
      piVar5 = (int *)piVar5[2];
      cVar3 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x58))(param_1);
    } while (cVar3 == '\0');
    iVar2 = *(int *)(DAT_012588e8 + 0xb24);
    cVar3 = FUN_0066bbf0();
    if (cVar3 != '\0') {
      FUN_0066bd60(*(undefined4 *)(iVar2 + 0xd7c),0);
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))
              (*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0xdc));
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4))(0);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(*(undefined4 *)(iVar1 + 0x28));
  }
  ExceptionList = local_10;
  return;
}

