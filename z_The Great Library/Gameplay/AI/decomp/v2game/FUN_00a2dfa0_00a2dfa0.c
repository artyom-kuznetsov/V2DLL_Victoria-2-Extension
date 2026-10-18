// FUN_00a2dfa0 @ 00a2dfa0 body=[[00a2dfa0, 00a2e008] [00a2e00c, 00a2e0a5]]


/* WARNING: Removing unreachable block (ram,0x00a2e000) */

void FUN_00a2dfa0(void)

{
  char cVar1;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  local_8 = 0xffffffff;
  if (cVar1 == '\0') {
    if (*(char *)(unaff_ESI + 0x1bc) != '\0') {
      FUN_009bcda0();
      if (-1 < *(int *)(unaff_ESI + 0x1c8)) {
        FUN_009bcda0();
      }
      *(undefined4 *)(unaff_ESI + 0x1c4) = 0;
      *(undefined4 *)(unaff_ESI + 0x1cc) = 0;
      *(undefined4 *)(unaff_ESI + 0x1c0) = 0xffffffff;
      *(undefined4 *)(unaff_ESI + 0x1c8) = 0xffffffff;
      ExceptionList = local_10;
      return;
    }
    FUN_009bcce0(*(undefined4 *)(unaff_ESI + 0x160),unaff_ESI + 0x170);
    *(undefined4 *)(unaff_ESI + 0x16c) = 0;
  }
  ExceptionList = local_10;
  return;
}

