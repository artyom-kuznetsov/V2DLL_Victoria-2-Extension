// FUN_00a7dd30 @ 00a7dd30 body=[[00a7dd30, 00a7de77] [00a7de7b, 00a7deba]]


void FUN_00a7dd30(int *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  
  if (in_ECX != param_1) {
    uVar1 = (param_1[1] - *param_1) / 0x60;
    if (uVar1 == 0) {
      if (*in_ECX != in_ECX[1]) {
        iVar4 = FUN_00a7e030(in_ECX[1],0);
        FUN_00a7da00(iVar4,in_ECX[1],in_ECX + 3,0);
        in_ECX[1] = iVar4;
        return;
      }
    }
    else {
      iVar4 = *in_ECX;
      uVar2 = (in_ECX[1] - iVar4) / 0x60;
      if (uVar1 <= uVar2) {
        uVar5 = FUN_00a7e030(param_1[1],uVar1);
        FUN_00a7da00(uVar5,in_ECX[1],in_ECX + 3,uVar1);
        in_ECX[1] = ((param_1[1] - *param_1) / 0x60) * 0x60 + *in_ECX;
        return;
      }
      if (uVar1 <= (uint)((in_ECX[2] - iVar4) / 0x60)) {
        FUN_00a7e030(uVar2 * 0x60 + *param_1,uVar1);
        iVar4 = FUN_00a7e0e0(param_1[1],in_ECX[1],uVar1);
        in_ECX[1] = iVar4;
        return;
      }
      if (iVar4 != 0) {
        FUN_00a7da00(iVar4,in_ECX[1],in_ECX + 3,uVar1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*in_ECX);
      }
      cVar3 = FUN_00a7dec0();
      if (cVar3 != '\0') {
        iVar4 = FUN_00a7e0e0(param_1[1],*in_ECX,uVar1);
        in_ECX[1] = iVar4;
      }
    }
  }
  return;
}

