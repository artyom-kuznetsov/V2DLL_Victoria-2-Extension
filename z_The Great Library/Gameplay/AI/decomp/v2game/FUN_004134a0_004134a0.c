// FUN_004134a0 @ 004134a0 body=[[004134a0, 004135c1] [004135c5, 00413608]]


void FUN_004134a0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int *in_EAX;
  int iVar6;
  
  piVar4 = param_1;
  if (in_EAX != param_1) {
    iVar6 = *in_EAX;
    uVar2 = (param_1[1] - *param_1) / 0x1c;
    if (uVar2 == 0) {
      param_1 = (int *)uVar2;
      FUN_004138b0(in_EAX,&param_1,iVar6,in_EAX[1]);
      return;
    }
    uVar3 = (in_EAX[1] - iVar6) / 0x1c;
    if (uVar2 <= uVar3) {
      piVar1 = param_1 + 1;
      param_1 = (int *)uVar2;
      FUN_00413930(*piVar1);
      FUN_00413860();
      in_EAX[1] = *in_EAX + ((piVar4[1] - *piVar4) / 0x1c) * 0x1c;
      return;
    }
    if (uVar2 <= (uint)((in_EAX[2] - iVar6) / 0x1c)) {
      iVar6 = *param_1;
      param_1 = (int *)uVar2;
      FUN_00413930(iVar6 + uVar3 * 0x1c);
      iVar6 = FUN_00419c20(piVar4[1],in_EAX[1],param_1);
      in_EAX[1] = iVar6;
      return;
    }
    if (iVar6 != 0) {
      param_1 = (int *)uVar2;
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_EAX);
    }
    param_1 = (int *)uVar2;
    cVar5 = FUN_00413810();
    if (cVar5 != '\0') {
      iVar6 = FUN_00419c20(piVar4[1],*in_EAX,param_1);
      in_EAX[1] = iVar6;
    }
  }
  return;
}

