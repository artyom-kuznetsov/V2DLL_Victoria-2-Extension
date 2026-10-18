// FUN_009a0940 @ 009a0940 body=[[009a0940, 009a09e9] [009a09ed, 009a0a18]]


void FUN_009a0940(int param_1)

{
  undefined4 *puVar1;
  char local_12c [256];
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(param_1 + 0xc) == '\0') && (ExceptionList = &local_10, *(int *)(param_1 + 4) != 0))
  {
    ExceptionList = &local_10;
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    puVar1 = (undefined4 *)FUN_00990880();
    local_8 = 0;
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    __snprintf(local_12c,0xff,"%s",puVar1);
    FUN_0099ff90(param_1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
  }
  else {
    FUN_004013e0(param_1);
  }
  FUN_004013e0(param_1);
  ExceptionList = local_10;
  return;
}

