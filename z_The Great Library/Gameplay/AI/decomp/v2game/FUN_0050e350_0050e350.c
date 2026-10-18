// FUN_0050e350 @ 0050e350 body=[[0050e350, 0050e3ce] [0050e3d8, 0050e3ea]]


void FUN_0050e350(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fed8;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar2 = *(int *)(in_ECX + 0xa08);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    iVar2 = iVar1;
  }
  local_8 = 0;
  FUN_004e94a0(param_1 + 0xa08);
  FUN_004e94a0(&local_24);
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24);
  }
  ExceptionList = local_10;
  return;
}

