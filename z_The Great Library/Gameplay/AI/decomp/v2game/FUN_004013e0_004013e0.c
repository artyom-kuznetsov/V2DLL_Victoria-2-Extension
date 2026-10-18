// FUN_004013e0 @ 004013e0 body=[[004013e0, 00401459] [0040145d, 0040146e]]


void FUN_004013e0(undefined4 param_1)

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
  FUN_0099ff90(param_1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return;
}

