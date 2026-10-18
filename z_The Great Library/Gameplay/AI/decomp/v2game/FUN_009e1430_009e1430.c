// FUN_009e1430 @ 009e1430 body=[[009e1430, 009e1535] [009e1539, 009e1576]]


void FUN_009e1430(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (in_EAX != param_1) {
    iVar3 = param_1[1] - *param_1 >> 0x1f;
    iVar4 = (param_1[1] - *param_1) / 0x24 + iVar3;
    uVar5 = iVar4 - iVar3;
    if (iVar4 == iVar3) {
      if (*in_EAX != in_EAX[1]) {
        iVar3 = FUN_009e15c0(param_1);
        in_EAX[1] = iVar3;
        return;
      }
    }
    else {
      uVar1 = (in_EAX[1] - *in_EAX) / 0x24;
      if (uVar5 <= uVar1) {
        FUN_009e15c0(param_1);
        in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x24) * 0x24;
        return;
      }
      if (uVar5 <= (uint)((in_EAX[2] - *in_EAX) / 0x24)) {
        iVar3 = *param_1 + uVar1 * 0x24;
        FUN_009e15c0(iVar3);
        iVar3 = FUN_0077a040(iVar3);
        in_EAX[1] = iVar3;
        return;
      }
      if (*in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_EAX);
      }
      cVar2 = FUN_009e1580();
      if (cVar2 != '\0') {
        iVar3 = FUN_0077a040(param_1);
        in_EAX[1] = iVar3;
      }
    }
  }
  return;
}

