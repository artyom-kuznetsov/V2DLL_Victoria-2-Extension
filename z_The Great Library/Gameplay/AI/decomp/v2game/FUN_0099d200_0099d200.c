// FUN_0099d200 @ 0099d200 body=[[0099d200, 0099d2ef]]


void FUN_0099d200(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  float in_XMM0_Da;
  undefined2 local_608 [256];
  undefined2 auStack_408 [256];
  undefined2 auStack_208 [258];
  
  if (0.1 <= in_XMM0_Da) {
    if (1.9 < in_XMM0_Da) {
      in_XMM0_Da = 1.9;
    }
  }
  else {
    in_XMM0_Da = 0.1;
  }
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar1 = iVar5 / 0xff;
    if (iVar1 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0xffff;
      if (iVar1 < 0x10000) {
        iVar4 = iVar1;
      }
    }
    local_608[iVar2] = (short)iVar4;
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffff;
      if (iVar1 < 0x10000) {
        uVar3 = (undefined2)iVar1;
      }
    }
    auStack_408[iVar2] = uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xffff < iVar1) {
      iVar1 = 0xffff;
    }
    auStack_208[iVar2] = (short)iVar1;
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + (int)(in_XMM0_Da * 65535.0);
  } while (iVar2 < 0x100);
  (**(code **)(**(int **)(param_1 + 100) + 0x54))(*(int **)(param_1 + 100),0,1,local_608);
  return;
}

