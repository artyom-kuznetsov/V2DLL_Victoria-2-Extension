// FUN_009a08a0 @ 009a08a0 body=[[009a08a0, 009a091f] [009a0923, 009a0934]]


void FUN_009a08a0(undefined4 param_1)

{
  undefined4 *puVar1;
  char local_12c [256];
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00990880();
  local_8 = 0;
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  __snprintf(local_12c,0xff,"%s",puVar1);
  FUN_009a0530(param_1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return;
}

