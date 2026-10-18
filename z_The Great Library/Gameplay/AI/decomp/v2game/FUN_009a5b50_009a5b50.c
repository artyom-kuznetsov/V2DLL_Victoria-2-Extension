// FUN_009a5b50 @ 009a5b50 body=[[009a5b50, 009a5b77] [009a5b81, 009a5b9c] [009a5ba0, 009a5ba1]]


void FUN_009a5b50(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  int *unaff_EDI;
  
  if (unaff_EDI != in_EAX) {
    piVar1 = (int *)*unaff_EDI;
    iVar2 = *piVar1;
    *piVar1 = (int)piVar1;
    *(int *)(*unaff_EDI + 4) = *unaff_EDI;
    unaff_EDI[1] = 0;
    if (iVar2 != *unaff_EDI) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar2);
    }
    if (in_EAX[1] != 0) {
      FUN_009a5bb0(*(undefined4 *)*unaff_EDI,*(undefined4 *)*in_EAX,(undefined4 *)*in_EAX);
    }
  }
  return;
}

