// FUN_00866a80 @ 00866a80 body=[[00866a80, 00866b59] [00866b5d, 00866b6c]]


void FUN_00866a80(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
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
  iVar1 = *(int *)(*(int *)(in_ECX + 0x700) + 0x18);
  if (*(char *)(*(int *)(in_ECX + 0x700) + 0x67) == '\0') {
    ExceptionList = &local_10;
    (**(code **)(iVar1 + 0x34))();
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("HintButton",10);
    local_8 = 1;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x6fc) + 0x34))(local_48);
    (**(code **)(*piVar4 + 0xb8))();
    uVar2 = local_48[0];
    uVar3 = local_34;
  }
  else {
    ExceptionList = &local_10;
    (**(code **)(iVar1 + 0x38))();
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("HintButton",10);
    local_8 = 0;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x6fc) + 0x34))(local_2c);
    (**(code **)(*piVar4 + 0xb8))();
    uVar2 = local_2c[0];
    uVar3 = local_18;
  }
  if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return;
}

