// FUN_004400d0 @ 004400d0 body=[[004400d0, 0044014e] [00440152, 00440163]]


void FUN_004400d0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int local_3c;
  int local_30 [5];
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  if (*(int *)(in_ECX + 0xa4) != param_1) {
    local_14 = (undefined1 *)&local_3c;
    ExceptionList = &local_10;
    *(int *)(in_ECX + 0xa4) = param_1;
    local_3c = param_1;
    uVar1 = FUN_0043f570(local_30);
    local_3c = -1;
    local_8 = 0;
    FUN_00408ed0(uVar1,0);
    local_3c = 0;
    FUN_00a5ecc0(uVar1);
    if (0xf < local_1c) {
      local_3c = local_30[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

