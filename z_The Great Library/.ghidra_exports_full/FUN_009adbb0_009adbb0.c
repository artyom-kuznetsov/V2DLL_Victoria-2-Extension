// FUN_009adbb0 @ 009adbb0 body=[[009adbb0, 009adbdc] [009adbe0, 009adbea]]


void FUN_009adbb0(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*in_EAX;
  iVar2 = in_EAX[1] - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        FUN_009aa1c0(iVar2 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
  }
  return;
}

