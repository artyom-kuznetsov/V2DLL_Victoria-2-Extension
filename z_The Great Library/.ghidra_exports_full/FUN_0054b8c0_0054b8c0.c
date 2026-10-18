// FUN_0054b8c0 @ 0054b8c0 body=[[0054b8c0, 0054b9c3] [0054b9c7, 0054ba05]]


void FUN_0054b8c0(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (in_EAX != param_1) {
    iVar3 = param_1[1] - *param_1 >> 0x1f;
    iVar4 = (param_1[1] - *param_1) / 0x18 + iVar3;
    uVar5 = iVar4 - iVar3;
    if (iVar4 == iVar3) {
      if (*in_EAX != in_EAX[1]) {
        iVar3 = FUN_005578a0(in_EAX[1],param_1);
        in_EAX[1] = iVar3;
        return;
      }
    }
    else {
      uVar1 = (in_EAX[1] - *in_EAX) / 0x18;
      if (uVar5 <= uVar1) {
        FUN_005578a0(*param_1,param_1);
        in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x18) * 0x18;
        return;
      }
      if (uVar5 <= (uint)((in_EAX[2] - *in_EAX) / 0x18)) {
        iVar3 = *param_1;
        FUN_005578a0(iVar3,param_1);
        iVar3 = FUN_00559480(iVar3 + uVar1 * 0x18,param_1);
        in_EAX[1] = iVar3;
        return;
      }
      if (*in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_EAX);
      }
      cVar2 = FUN_00738bf0();
      if (cVar2 != '\0') {
        iVar3 = FUN_00559480(*param_1,param_1);
        in_EAX[1] = iVar3;
      }
    }
  }
  return;
}

