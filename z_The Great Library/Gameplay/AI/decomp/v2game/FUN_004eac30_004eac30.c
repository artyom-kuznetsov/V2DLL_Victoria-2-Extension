// FUN_004eac30 @ 004eac30 body=[[004eac30, 004eac85] [004eac89, 004eac98]]


void FUN_004eac30(void)

{
  int in_ECX;
  undefined4 unaff_EDI;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + 0xbc) + 0x2c))(local_30);
  local_8 = 0;
  FUN_00989330(unaff_EDI);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

