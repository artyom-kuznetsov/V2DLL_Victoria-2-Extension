// FUN_004601e0 @ 004601e0 body=[[004601e0, 00460224]]


void FUN_004601e0(void)

{
  int in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40698;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_004622f0(**(undefined4 **)(in_ECX + 0xc),*(undefined4 **)(in_ECX + 0xc));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 0xc));
}

