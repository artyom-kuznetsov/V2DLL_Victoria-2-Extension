// FUN_00a77460 @ 00a77460 body=[[00a77460, 00a774df] [00a774e3, 00a77517]]


/* WARNING: Removing unreachable block (ram,0x00a774d7) */

void FUN_00a77460(void)

{
  bool bVar1;
  char cVar2;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b481d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar2 = FUN_00416db0();
  if ((cVar2 != '\0') || (bVar1 = true, *(int *)(unaff_ESI + 0x170) == 0)) {
    bVar1 = false;
  }
  local_8 = 0xffffffff;
  if (bVar1) {
    FUN_009bcce0(*(undefined4 *)(unaff_ESI + 0x164),unaff_ESI + 0x174);
    *(undefined4 *)(unaff_ESI + 0x170) = 0;
  }
  ExceptionList = local_10;
  return;
}

