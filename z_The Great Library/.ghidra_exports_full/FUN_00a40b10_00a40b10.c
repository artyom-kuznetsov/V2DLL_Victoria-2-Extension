// FUN_00a40b10 @ 00a40b10 body=[[00a40b10, 00a40c48] [00a40c4c, 00a40c90]]


void FUN_00a40b10(int *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *unaff_ESI;
  
  if (unaff_ESI != param_1) {
    iVar4 = *unaff_ESI;
    uVar1 = (param_1[1] - *param_1) / 0x74;
    if (uVar1 == 0) {
      if (iVar4 != unaff_ESI[1]) {
        iVar4 = FUN_00a41010(unaff_ESI[1],0);
        FUN_00a409d0(0);
        unaff_ESI[1] = iVar4;
        return;
      }
    }
    else {
      uVar2 = (unaff_ESI[1] - iVar4) / 0x74;
      if (uVar1 <= uVar2) {
        FUN_00a41010(param_1[1],uVar1);
        FUN_00a409d0(uVar1);
        unaff_ESI[1] = ((param_1[1] - *param_1) / 0x74) * 0x74 + *unaff_ESI;
        return;
      }
      if (uVar1 <= (uint)((unaff_ESI[2] - iVar4) / 0x74)) {
        FUN_00a41010(uVar2 * 0x74 + *param_1,uVar1);
        iVar4 = FUN_00a40f80(param_1[1],unaff_ESI[1],uVar1);
        unaff_ESI[1] = iVar4;
        return;
      }
      if (iVar4 != 0) {
        FUN_00a409d0(uVar1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*unaff_ESI);
      }
      cVar3 = FUN_00a40ca0();
      if (cVar3 != '\0') {
        iVar4 = FUN_00a40f80(param_1[1],*unaff_ESI,uVar1);
        unaff_ESI[1] = iVar4;
      }
    }
  }
  return;
}

