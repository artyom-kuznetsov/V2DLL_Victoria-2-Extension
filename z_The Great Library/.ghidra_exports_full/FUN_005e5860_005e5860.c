// FUN_005e5860 @ 005e5860 body=[[005e5860, 005e5997] [005e599b, 005e59da]]


void FUN_005e5860(int *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  
  if (in_EAX != param_1) {
    uVar1 = (param_1[1] - *param_1) / 0x28;
    if (uVar1 == 0) {
      if (*in_EAX != in_EAX[1]) {
        iVar4 = FUN_005e5ce0(in_EAX[1],0);
        FUN_005e5d30(0);
        in_EAX[1] = iVar4;
        return;
      }
    }
    else {
      iVar4 = *in_EAX;
      uVar2 = (in_EAX[1] - iVar4) / 0x28;
      if (uVar1 <= uVar2) {
        FUN_005e5ce0(param_1[1],uVar1);
        FUN_005e5d30(uVar1);
        in_EAX[1] = *in_EAX + ((param_1[1] - *param_1) / 0x28) * 0x28;
        return;
      }
      if (uVar1 <= (uint)((in_EAX[2] - iVar4) / 0x28)) {
        FUN_005e5ce0(*param_1 + uVar2 * 0x28,uVar1);
        iVar4 = FUN_005e5f40(param_1[1],in_EAX[1],uVar1);
        in_EAX[1] = iVar4;
        return;
      }
      if (iVar4 != 0) {
        FUN_005e5d30(uVar1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_EAX);
      }
      cVar3 = FUN_005e59e0();
      if (cVar3 != '\0') {
        iVar4 = FUN_005e5f40(param_1[1],*in_EAX,uVar1);
        in_EAX[1] = iVar4;
      }
    }
  }
  return;
}

