// FUN_0068ff00 @ 0068ff00 body=[[0068ff00, 0068ff18] [0068ff22, 0068ff5a]]


void FUN_0068ff00(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    unaff_ESI[2] = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    *(undefined1 *)(unaff_ESI + 3) = 0;
    iVar2 = *param_1;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
      FUN_00679b80(iVar2);
      iVar2 = iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*unaff_ESI);
}

