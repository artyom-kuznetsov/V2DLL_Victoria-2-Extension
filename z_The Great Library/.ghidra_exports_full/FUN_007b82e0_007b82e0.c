// FUN_007b82e0 @ 007b82e0 body=[[007b82e0, 007b83a7] [007b83ab, 007b83ba]]


void FUN_007b82e0(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
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
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
  }
  if (*(char *)(in_ECX + 0x160) == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("install_label",0xd);
    local_8 = 1;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_48);
    (**(code **)(*piVar3 + 0x38))();
    uVar1 = local_48[0];
    uVar2 = local_34;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("download_label",0xe);
    local_8 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_2c);
    (**(code **)(*piVar3 + 0x38))();
    uVar1 = local_2c[0];
    uVar2 = local_18;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar1);
  }
  ExceptionList = local_10;
  return;
}

