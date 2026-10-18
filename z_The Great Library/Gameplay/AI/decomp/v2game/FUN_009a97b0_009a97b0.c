// FUN_009a97b0 @ 009a97b0 body=[[009a97b0, 009a984c] [009a9850, 009a9879]]


/* WARNING: Removing unreachable block (ram,0x009a9843) */

void FUN_009a97b0(void)

{
  int iVar1;
  int unaff_ESI;
  int local_40;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b3d728;
  local_14 = ExceptionList;
  iVar1 = 0;
  local_40 = 0;
  ExceptionList = &local_14;
  if (0 < (int)(*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4) & 0xffffffe0U)) {
    do {
      local_c = 0xffffffff;
      FUN_00408ed0(iVar1 + *(int *)(unaff_ESI + 4),0,0xffffffff);
      local_c = 0;
      FUN_00a72850();
      local_40 = local_40 + 1;
      iVar1 = iVar1 + 0x20;
    } while (local_40 < *(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4) >> 5);
  }
  ExceptionList = local_14;
  return;
}

