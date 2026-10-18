// FUN_0069f860 @ 0069f860 body=[[0069f860, 0069f953] [0069f957, 0069f980]]


void FUN_0069f860(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  piVar1 = (int *)(in_ECX + 0x34);
  ExceptionList = &local_10;
  *piVar1 = *piVar1 + 1;
  if (*piVar1 < 0) {
    *(int *)(in_ECX + 0x34) = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x58 + -1;
  }
  else if ((*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x58 <= *(int *)(in_ECX + 0x34)) {
    *(undefined4 *)(in_ECX + 0x34) = 0;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("default_listbox",0xf);
  local_8 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x7c))(local_2c);
  iVar2 = *(int *)(iVar2 + 0x104);
  if (iVar2 != 0) {
    FUN_00401000(0x3f000000,extraout_ECX,1,1);
    uVar3 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))(uVar3);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_0069c520();
  ExceptionList = local_10;
  return;
}

