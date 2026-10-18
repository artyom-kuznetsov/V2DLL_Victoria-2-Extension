// FUN_00866980 @ 00866980 body=[[00866980, 00866a10] [00866a14, 00866a6c] [00866a70, 00866a7f]]


void FUN_00866980(void)

{
  int iVar1;
  int in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42841;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x748) = 1;
  if (*(int *)(in_ECX + 0x750) != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("NextButton",10);
    local_8 = 0;
    local_18 = 1;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x750) + 0x34))(local_34);
    local_11 = '\x01';
    if (iVar1 != 0) goto LAB_008669f5;
  }
  local_11 = '\0';
LAB_008669f5:
  local_8 = 0xffffffff;
  if (((local_18 & 1) != 0) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (local_11 != '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("NextButton",10);
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x750) + 0x34))(local_50);
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0x754);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

