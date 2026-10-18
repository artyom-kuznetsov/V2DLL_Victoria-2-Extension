// FUN_0046f490 @ 0046f490 body=[[0046f490, 0046f4d7] [0046f4e0, 0046f509] [0046f50d, 0046f51d]]


void FUN_0046f490(void)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb8828;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045af30(*(undefined4 *)(DAT_012588e8 + 0xcf4),&local_24);
  local_8 = 0;
  iVar2 = local_20 - local_24 >> 2;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) goto LAB_0046f500;
    iVar1 = *(int *)(local_24 + iVar2 * 4);
  } while (*(char *)(iVar1 + 0x90) != '\0');
  FUN_0046e220(iVar1);
LAB_0046f500:
  if (local_24 == 0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_24);
}

