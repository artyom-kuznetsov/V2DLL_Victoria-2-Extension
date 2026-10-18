// FUN_0045ff50 @ 0045ff50 body=[[0045ff50, 0045ff90]]


void FUN_0045ff50(void)

{
  int in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40698;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_00462440(**(undefined4 **)(in_ECX + 4),*(undefined4 **)(in_ECX + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 4));
}

