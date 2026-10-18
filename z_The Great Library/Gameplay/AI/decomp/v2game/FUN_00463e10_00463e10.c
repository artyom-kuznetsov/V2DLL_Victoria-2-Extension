// FUN_00463e10 @ 00463e10 body=[[00463e10, 00463ee9] [00463eed, 00463f1f]]


void FUN_00463e10(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *unaff_ESI;
  uint uVar4;
  
  if (unaff_ESI != param_1) {
    iVar2 = *unaff_ESI;
    uVar4 = param_1[1] - *param_1 >> 5;
    if (uVar4 == 0) {
      if (iVar2 != unaff_ESI[1]) {
        iVar2 = FUN_00464290(unaff_ESI[1]);
        FUN_00a6b610(param_1);
        unaff_ESI[1] = iVar2;
        return;
      }
    }
    else {
      uVar3 = unaff_ESI[1] - iVar2 >> 5;
      if (uVar4 <= uVar3) {
        FUN_00464290(param_1[1]);
        FUN_00a6b610(param_1);
        unaff_ESI[1] = (param_1[1] - *param_1 & 0xffffffe0U) + *unaff_ESI;
        return;
      }
      if (uVar4 <= (uint)(unaff_ESI[2] - iVar2 >> 5)) {
        FUN_00464290(*param_1 + uVar3 * 0x20);
        iVar2 = FUN_004642d0(param_1[1],unaff_ESI[1],param_1);
        unaff_ESI[1] = iVar2;
        return;
      }
      if (iVar2 != 0) {
        FUN_00a6b610(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*unaff_ESI);
      }
      cVar1 = FUN_00463f20();
      if (cVar1 != '\0') {
        iVar2 = FUN_004642d0(param_1[1],*unaff_ESI,param_1);
        unaff_ESI[1] = iVar2;
      }
    }
  }
  return;
}

