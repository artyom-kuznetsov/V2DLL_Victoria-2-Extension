// FUN_004e94a0 @ 004e94a0  (requested 004E94A0, first bytes: 55 8B EC 8B 06 57 85 C0)


void FUN_004e94a0(int *param_1)

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
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0057aab0(iVar2);
      iVar2 = iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*unaff_ESI);
}

