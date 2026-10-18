// FUN_00456c10 @ 00456c10 body=[[00456c10, 00456c53]]


void FUN_00456c10(void)

{
  int in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40698;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_00445600(**(undefined4 **)(in_ECX + 8),*(undefined4 **)(in_ECX + 8));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 8));
}

