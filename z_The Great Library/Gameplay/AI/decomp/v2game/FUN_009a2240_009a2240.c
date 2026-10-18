// FUN_009a2240 @ 009a2240 body=[[009a2240, 009a22fb] [009a22ff, 009a2331]]


void FUN_009a2240(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *unaff_ESI;
  uint uVar5;
  
  piVar1 = param_1;
  if (unaff_ESI != param_1) {
    uVar5 = param_1[1] - *param_1 >> 5;
    if (uVar5 == 0) {
      FUN_009a23c0(unaff_ESI,&param_1,*unaff_ESI,unaff_ESI[1]);
      return;
    }
    iVar3 = *unaff_ESI;
    uVar4 = unaff_ESI[1] - iVar3 >> 5;
    if (uVar5 <= uVar4) {
      FUN_009a24a0(param_1[1]);
      FUN_009e6a80();
      unaff_ESI[1] = (piVar1[1] - *piVar1 & 0xffffffe0U) + *unaff_ESI;
      return;
    }
    if (uVar5 <= (uint)(unaff_ESI[2] - iVar3 >> 5)) {
      FUN_009a24a0(*param_1 + uVar4 * 0x20);
      iVar3 = FUN_00a72a60(piVar1[1],unaff_ESI[1],param_1);
      unaff_ESI[1] = iVar3;
      return;
    }
    if (iVar3 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*unaff_ESI);
    }
    cVar2 = FUN_00463f20();
    if (cVar2 != '\0') {
      iVar3 = FUN_00a72a60(piVar1[1],*unaff_ESI,param_1);
      unaff_ESI[1] = iVar3;
    }
  }
  return;
}

