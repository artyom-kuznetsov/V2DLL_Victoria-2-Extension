// FUN_00569920 @ 00569920  (requested 00569920, first bytes: 51 A1 E8 88 25 01 8B 88)


bool FUN_00569920(void)

{
  char cVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((*(int *)(unaff_ESI + 0x340) <=
       (int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0)) &&
     (*(int *)(*(int *)(unaff_EDI + 0x2b8) + *(int *)(unaff_ESI + 0x2e4) * 4) < 1)) {
    cVar1 = (**(code **)(**(int **)(unaff_ESI + 0x2ec) + 0x20))();
    if (cVar1 != '\0') {
      return 0 < *(int *)(*(int *)(unaff_EDI + 0x2b8) +
                         *(int *)(*(int *)(unaff_ESI + 0x2ec) + 0x2e4) * 4);
    }
    return true;
  }
  return false;
}

