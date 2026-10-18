// FUN_008b3110 @ 008b3110 body=[[008b3110, 008b3138] [008b313c, 008b3146]]


void FUN_008b3110(void)

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
        FUN_008b3150();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
    }
  }
  return;
}

