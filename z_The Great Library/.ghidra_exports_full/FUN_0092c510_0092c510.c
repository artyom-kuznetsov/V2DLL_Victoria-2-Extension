// FUN_0092c510 @ 0092c510 body=[[0092c510, 0092c595] [0092c599, 0092c5f5] [0092c5f9, 0092c66b] [0092c66f, 0092c6e2] [0092c6e6, 0092c6f8]]


void FUN_0092c510(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58740;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar2 = (char *)(in_ECX + 8);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar2 - (in_ECX + 9));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar2 = (char *)(in_ECX + 0x10);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x10),(int)pcVar2 - (in_ECX + 0x11));
  local_8 = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 0x1c) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0(in_ECX + 0x1c,local_2c);
    local_8 = 2;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8 = 0xffffffff;
  if (*(char *)(in_ECX + 0x20) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
    ExceptionList = local_10;
    return;
  }
  FUN_0043acd0(in_ECX + 0x18,local_48);
  local_8 = 3;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

