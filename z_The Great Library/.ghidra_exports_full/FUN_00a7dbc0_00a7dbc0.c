// FUN_00a7dbc0 @ 00a7dbc0 body=[[00a7dbc0, 00a7dcdd] [00a7dce1, 00a7dd21]]


void FUN_00a7dbc0(int *param_1)

{
  uint uVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (in_EAX != param_1) {
    iVar3 = param_1[1] - *param_1 >> 0x1f;
    iVar4 = (param_1[1] - *param_1) / 0x1c + iVar3;
    uVar5 = iVar4 - iVar3;
    if (iVar4 == iVar3) {
      if (*in_EAX != in_EAX[1]) {
        iVar3 = FUN_00a7dff0(in_EAX[1],param_1);
        in_EAX[1] = iVar3;
        return;
      }
    }
    else {
      uVar1 = (in_EAX[1] - *in_EAX) / 0x1c;
      if (uVar5 <= uVar1) {
        FUN_00a7dff0(*param_1,param_1);
        in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x1c) * 0x1c;
        return;
      }
      iVar3 = in_EAX[2] - *in_EAX;
      if (uVar5 <= (uint)(iVar3 / 0x1c)) {
        iVar4 = *param_1;
        FUN_00a7dff0(iVar4,iVar3);
        iVar3 = FUN_00a7e090(iVar4 + uVar1 * 0x1c,iVar3);
        in_EAX[1] = iVar3;
        return;
      }
      if (*in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_EAX);
      }
      cVar2 = FUN_00413810();
      if (cVar2 != '\0') {
        iVar3 = FUN_00a7e090(*param_1,iVar3);
        in_EAX[1] = iVar3;
      }
    }
  }
  return;
}

