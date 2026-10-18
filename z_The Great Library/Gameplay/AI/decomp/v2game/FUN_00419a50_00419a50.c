// FUN_00419a50 @ 00419a50 body=[[00419a50, 00419b5a] [00419b5e, 00419b9d]]


void FUN_00419a50(int *param_1)

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
    uVar2 = (param_1[1] - *param_1) / 0x14;
    if (uVar2 == 0) {
      param_1 = (int *)uVar2;
      FUN_00419570(in_EAX,&param_1,iVar6,in_EAX[1]);
      return;
    }
    uVar3 = (in_EAX[1] - iVar6) / 0x14;
    if (uVar2 <= uVar3) {
      piVar1 = param_1 + 1;
      param_1 = (int *)uVar2;
      FUN_00419cf0(*piVar1);
      FUN_00418de0(in_EAX[1]);
      in_EAX[1] = *in_EAX + ((piVar4[1] - *piVar4) / 0x14) * 0x14;
      return;
    }
    if (uVar2 <= (uint)((in_EAX[2] - iVar6) / 0x14)) {
      iVar6 = *param_1;
      param_1 = (int *)uVar2;
      FUN_00419cf0(iVar6 + uVar3 * 0x14);
      iVar6 = FUN_00419dc0(piVar4[1],in_EAX[1],param_1);
      in_EAX[1] = iVar6;
      return;
    }
    if (iVar6 != 0) {
      param_1 = (int *)uVar2;
      FUN_00418de0(in_EAX[1]);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_EAX);
    }
    param_1 = (int *)uVar2;
    cVar5 = FUN_00419be0();
    if (cVar5 != '\0') {
      iVar6 = FUN_00419dc0(piVar4[1],*in_EAX,param_1);
      in_EAX[1] = iVar6;
    }
  }
  return;
}

