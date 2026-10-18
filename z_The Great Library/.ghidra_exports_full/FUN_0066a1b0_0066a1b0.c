// FUN_0066a1b0 @ 0066a1b0 body=[[0066a1b0, 0066a26f] [0066a273, 0066a281]]


void FUN_0066a1b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45263;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((char)in_ECX[0x17] != '\0') &&
     (ExceptionList = &local_10, iVar1 = (**(code **)(*in_ECX + 0x44))(),
     *(char *)(iVar1 + 0x34) == '\0')) {
    ExceptionList = local_10;
    return;
  }
  local_14 = FUN_00aae9af(0x3c);
  local_8 = 0;
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072ef50(local_14);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(*in_ECX + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("click",5);
  local_8 = 1;
  piVar3 = (int *)FUN_009c7290();
  (**(code **)(*piVar3 + 0x60))(local_30);
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

