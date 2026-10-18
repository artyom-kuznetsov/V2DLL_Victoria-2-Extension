// FUN_009af160 @ 009af160 body=[[009af160, 009af2b5] [009af2b9, 009af2cb]]


void FUN_009af160(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int in_EDX;
  uint in_stack_00000018;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined1 *)(in_EDX + 0x25e) = 0;
  *(undefined1 *)(in_EDX + 0x234) = 0;
  *(undefined4 *)(in_EDX + 0x230) = 100;
  *(undefined4 *)(in_EDX + 0x1b8) = 0;
  *(undefined1 *)(in_EDX + 0x1bc) = 0;
  *(int *)(in_EDX + 0x38) = in_ECX;
  *(undefined4 *)(in_EDX + 0x110) = 0;
  *(undefined4 *)(in_EDX + 0xf8) = 0xffffffff;
  *(undefined4 *)(in_EDX + 0x2c) = 0;
  if ((in_stack_00000020 == 1) || (in_stack_00000020 == 2)) {
    *(undefined1 *)(in_EDX + 0x34) = 1;
  }
  else {
    *(undefined1 *)(in_EDX + 0x34) = 0;
  }
  *(undefined4 *)(in_EDX + 0x54) = 0;
  *(undefined1 *)(in_EDX + 0x3c) = 0;
  *(undefined4 *)(in_EDX + 0x30) = in_stack_00000024;
  FUN_00408ed0(&param_1,0,0xffffffff);
  *(undefined4 *)(in_EDX + 0x6c) = 1;
  *(undefined4 *)(in_EDX + 0x68) = 2;
  *(undefined1 *)(in_EDX + 0x25d) = 0;
  *(int *)(in_EDX + 0x38) = in_ECX;
  *(int *)(in_ECX + 0x1c) = in_EDX;
  if (in_stack_00000020 == 2) {
    *(undefined4 *)(in_EDX + 0x2c) = 4;
  }
  else if (in_stack_00000020 == 1) {
    *(undefined4 *)(in_EDX + 0x2c) = 4;
    iVar1 = *(int *)(in_EDX + 0x5c);
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = *(undefined4 *)(in_EDX + 0x6c);
      puVar3[1] = iVar1;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    iVar2 = *(int *)(in_EDX + 0x60);
    *(undefined4 **)(in_EDX + 0x5c) = puVar3;
    *(int *)(in_EDX + 0x60) = iVar2 + 1;
    if (iVar2 == 0) {
      *(undefined4 **)(in_EDX + 0x58) = puVar3;
    }
    else {
      *(undefined4 **)(iVar1 + 8) = puVar3;
    }
    for (puVar3 = *(undefined4 **)(in_EDX + 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      (**(code **)(*(int *)*puVar3 + 4))(0);
    }
  }
  FUN_009c19b0();
  if (*(char *)(in_EDX + 0x34) != '\0') {
    for (puVar3 = *(undefined4 **)(in_EDX + 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      (**(code **)(*(int *)*puVar3 + 4))(0);
    }
  }
  if (in_stack_00000018 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

