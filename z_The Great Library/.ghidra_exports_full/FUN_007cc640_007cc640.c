// FUN_007cc640 @ 007cc640 body=[[007cc640, 007cc8a9]]


void FUN_007cc640(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_2 - in_EAX) / 0x44;
  if (iVar1 < 0x29) {
    if (*(float *)(in_EAX + 4) < *(float *)(param_1 + 4)) {
      FUN_007d03f0();
    }
    if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
      FUN_007d03f0(param_1);
    }
    if (*(float *)(in_EAX + 4) < *(float *)(param_1 + 4)) {
      FUN_007d03f0();
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar3 = iVar2 * 0x44;
    iVar1 = iVar3 + in_EAX;
    if (*(float *)(in_EAX + 4) < *(float *)(iVar3 + 4 + in_EAX)) {
      FUN_007d03f0();
    }
    if (*(float *)(iVar1 + 4) < *(float *)(iVar2 * 0x88 + 4 + in_EAX)) {
      FUN_007d03f0(iVar1);
    }
    if (*(float *)(in_EAX + 4) < *(float *)(iVar1 + 4)) {
      FUN_007d03f0();
    }
    iVar4 = param_1 + iVar2 * -0x44;
    if (*(float *)(iVar4 + 4) < *(float *)(param_1 + 4)) {
      FUN_007d03f0(iVar4);
    }
    if (*(float *)(param_1 + 4) < *(float *)(iVar3 + 4 + param_1)) {
      FUN_007d03f0(param_1);
    }
    if (*(float *)(iVar4 + 4) < *(float *)(param_1 + 4)) {
      FUN_007d03f0(iVar4);
    }
    iVar4 = param_2 + iVar2 * -0x44;
    iVar3 = param_2 + iVar2 * -0x88;
    if (*(float *)(iVar3 + 4) < *(float *)(iVar4 + 4)) {
      FUN_007d03f0(iVar3);
    }
    if (*(float *)(iVar4 + 4) < *(float *)(param_2 + 4)) {
      FUN_007d03f0(iVar4);
    }
    if (*(float *)(iVar3 + 4) < *(float *)(iVar4 + 4)) {
      FUN_007d03f0(iVar3);
    }
    if (*(float *)(iVar1 + 4) < *(float *)(param_1 + 4)) {
      FUN_007d03f0(iVar1);
    }
    if (*(float *)(param_1 + 4) < *(float *)(iVar4 + 4)) {
      FUN_007d03f0(param_1);
    }
    if (*(float *)(iVar1 + 4) < *(float *)(param_1 + 4)) {
      FUN_007d03f0(iVar1);
      return;
    }
  }
  return;
}

