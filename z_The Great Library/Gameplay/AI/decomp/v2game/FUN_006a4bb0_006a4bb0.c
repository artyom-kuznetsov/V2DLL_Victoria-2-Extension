// FUN_006a4bb0 @ 006a4bb0 body=[[006a4bb0, 006a4c6c] [006a4c70, 006a4c7f]]


void FUN_006a4bb0(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *in_ECX;
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
  if (in_ECX[9] != 0) {
    ExceptionList = &local_10;
    cVar3 = (**(code **)*in_ECX)();
    if (cVar3 == '\0') {
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("button",6);
      local_8 = 1;
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[9] + 0x34))(local_48);
      (**(code **)(*piVar4 + 0xbc))();
      uVar1 = local_48[0];
      uVar2 = local_34;
    }
    else {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("button",6);
      local_8 = 0;
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[9] + 0x34))(local_2c);
      (**(code **)(*piVar4 + 0xb8))();
      uVar1 = local_2c[0];
      uVar2 = local_18;
    }
    if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

