// FUN_00738ab0 @ 00738ab0 body=[[00738ab0, 00738ba6] [00738baa, 00738be8]]


void FUN_00738ab0(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (in_EAX != param_1) {
    iVar3 = param_1[1] - *param_1 >> 0x1f;
    iVar5 = (param_1[1] - *param_1) / 0x18 + iVar3;
    uVar4 = iVar5 - iVar3;
    if (iVar5 == iVar3) {
      if (*in_EAX != in_EAX[1]) {
        iVar3 = FUN_007387b0(*in_EAX);
        in_EAX[1] = iVar3;
        return;
      }
    }
    else {
      uVar1 = (in_EAX[1] - *in_EAX) / 0x18;
      if (uVar4 <= uVar1) {
        FUN_007387b0(*in_EAX);
        in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x18) * 0x18;
        return;
      }
      iVar3 = *in_EAX;
      if (uVar4 <= (uint)((in_EAX[2] - *in_EAX) / 0x18)) {
        iVar5 = *param_1;
        FUN_007387b0(iVar3);
        iVar3 = FUN_0073acb0(iVar5 + uVar1 * 0x18,param_1);
        in_EAX[1] = iVar3;
        return;
      }
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      cVar2 = FUN_00738bf0();
      if (cVar2 != '\0') {
        iVar3 = FUN_0073acb0(*param_1,param_1);
        in_EAX[1] = iVar3;
      }
    }
  }
  return;
}

