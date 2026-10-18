// FUN_0099e300 @ 0099e300 body=[[0099e300, 0099e412] [0099e419, 0099e442] [0099e458, 0099e539]]


void FUN_0099e300(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a8b0;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  iVar2 = (iVar1 - *in_ECX) / 0xc;
  if (iVar2 == 0x15555555) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if (iVar2 + 1U <= (uint)((in_ECX[2] - *in_ECX) / 0xc)) {
    iVar2 = iVar1 - param_1 >> 0x1f;
    if ((iVar1 - param_1) / 0xc + iVar2 == iVar2) {
      ExceptionList = &local_10;
      FUN_0099eea0(param_1,param_1);
      local_8 = 2;
      FUN_0099ee30(in_ECX[1],param_1);
      in_ECX[1] = in_ECX[1] + 0xc;
    }
    else {
      iVar2 = iVar1 + -0xc;
      ExceptionList = &local_10;
      iVar3 = FUN_0099eea0(iVar2,param_1);
      in_ECX[1] = iVar3;
      if (param_1 != iVar2) {
        puVar4 = (undefined4 *)(iVar1 + 8);
        do {
          puVar4[-4] = puVar4[-7];
          puVar4[-3] = puVar4[-6];
          iVar2 = iVar2 + -0xc;
          puVar4 = puVar4 + -3;
        } while (param_1 != iVar2);
      }
    }
    FUN_0099e930(param_1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_0099e540();
  iVar3 = FUN_007d8af0();
  local_8 = 0;
  FUN_0099ee30(iVar3 + ((param_1 - *in_ECX) / 0xc) * 0xc,param_1);
  FUN_0099eea0(*in_ECX,param_1);
  FUN_0099eea0(param_1,param_1);
  iVar1 = *in_ECX;
  if (iVar1 == 0) {
    in_ECX[2] = iVar3 + iVar2 * 0xc;
    in_ECX[1] = iVar3 + ((in_ECX[1] - iVar1) / 0xc + 1) * 0xc;
    *in_ECX = iVar3;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

