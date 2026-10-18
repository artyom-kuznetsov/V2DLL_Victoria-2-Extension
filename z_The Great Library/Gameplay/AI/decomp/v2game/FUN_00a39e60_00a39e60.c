// FUN_00a39e60 @ 00a39e60 body=[[00a39e60, 00a39faa] [00a39fae, 00a39ff1]]


void FUN_00a39e60(int *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  
  if (in_EAX != param_1) {
    uVar1 = (param_1[1] - *param_1) / 0x38;
    if (uVar1 == 0) {
      if (*in_EAX != in_EAX[1]) {
        iVar4 = FUN_00a3a4e0(in_EAX[1]);
        FUN_00a3ab10(0);
        in_EAX[1] = iVar4;
        return;
      }
    }
    else {
      iVar4 = *in_EAX;
      uVar2 = (in_EAX[1] - iVar4) / 0x38;
      if (uVar1 <= uVar2) {
        FUN_00a3a4e0(param_1[1]);
        FUN_00a3ab10(uVar1);
        in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x38) * 0x38;
        return;
      }
      if (uVar1 <= (uint)((in_EAX[2] - iVar4) / 0x38)) {
        FUN_00a3a4e0(*param_1 + uVar2 * 0x38);
        iVar4 = FUN_00a3ac90(param_1[1],in_EAX[1],uVar1);
        in_EAX[1] = iVar4;
        return;
      }
      if (iVar4 != 0) {
        FUN_00a3ab10(uVar1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_EAX);
      }
      cVar3 = FUN_00a36030();
      if (cVar3 != '\0') {
        iVar4 = FUN_00a3ac90(param_1[1],*in_EAX,uVar1);
        in_EAX[1] = iVar4;
      }
    }
  }
  return;
}

