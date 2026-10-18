// FUN_00a773a0 @ 00a773a0 body=[[00a773a0, 00a77408] [00a7740c, 00a7745e]]


/* WARNING: Removing unreachable block (ram,0x00a77400) */

void FUN_00a773a0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EDI;
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
    uVar2 = FUN_009bcbf0(unaff_EDI + 0x174,1);
    if ((uVar2 == 0xffffffff) || (9999 < uVar2)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar2 * 0x2c + 4 + *(int *)(unaff_EDI + 0x164));
    }
    *(undefined4 *)(unaff_EDI + 0x170) = uVar3;
  }
  ExceptionList = local_10;
  return;
}

