// FUN_006a26b0 @ 006a26b0 body=[[006a26b0, 006a2797] [006a279b, 006a27cd]]


void FUN_006a26b0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *unaff_ESI;
  uint uVar4;
  
  if (unaff_ESI != param_1) {
    iVar2 = *unaff_ESI;
    uVar4 = param_1[1] - *param_1 >> 6;
    if (uVar4 == 0) {
      if (iVar2 != unaff_ESI[1]) {
        iVar2 = FUN_006a33d0(unaff_ESI[1],param_1);
        FUN_006a2140(param_1);
        unaff_ESI[1] = iVar2;
        return;
      }
    }
    else {
      uVar3 = unaff_ESI[1] - iVar2 >> 6;
      if (uVar4 <= uVar3) {
        FUN_006a33d0(param_1[1],param_1);
        FUN_006a2140(param_1);
        unaff_ESI[1] = (param_1[1] - *param_1 & 0xffffffc0U) + *unaff_ESI;
        return;
      }
      if (uVar4 <= (uint)(unaff_ESI[2] - iVar2 >> 6)) {
        FUN_006a33d0(*param_1 + uVar3 * 0x40,param_1);
        iVar2 = FUN_006a2f00(param_1[1],unaff_ESI[1],param_1);
        unaff_ESI[1] = iVar2;
        return;
      }
      if (iVar2 != 0) {
        FUN_006a2140(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*unaff_ESI);
      }
      cVar1 = FUN_006a27d0();
      if (cVar1 != '\0') {
        iVar2 = FUN_006a2f00(param_1[1],*unaff_ESI,param_1);
        unaff_ESI[1] = iVar2;
      }
    }
  }
  return;
}

