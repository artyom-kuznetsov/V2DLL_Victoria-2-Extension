// FUN_0047c4a0 @ 0047c4a0 body=[[0047c4a0, 0047c6e9]]


void FUN_0047c4a0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_2 - in_EAX) / 0x4c;
  if (iVar1 < 0x29) {
    if (*(float *)(in_EAX + 0x3c) < *(float *)(param_1 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(param_1 + 0x3c) < *(float *)(param_2 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(in_EAX + 0x3c) < *(float *)(param_1 + 0x3c)) {
      FUN_0047cbd0();
    }
  }
  else {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar4 = iVar2 * 0x4c;
    iVar1 = iVar4 + in_EAX;
    if (*(float *)(in_EAX + 0x3c) < *(float *)(iVar4 + 0x3c + in_EAX)) {
      FUN_0047cbd0();
    }
    if (*(float *)(iVar1 + 0x3c) < *(float *)(iVar2 * 0x98 + 0x3c + in_EAX)) {
      FUN_0047cbd0();
    }
    if (*(float *)(in_EAX + 0x3c) < *(float *)(iVar1 + 0x3c)) {
      FUN_0047cbd0();
    }
    iVar3 = param_1 + iVar2 * -0x4c;
    if (*(float *)(iVar3 + 0x3c) < *(float *)(param_1 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(param_1 + 0x3c) < *(float *)(iVar4 + 0x3c + param_1)) {
      FUN_0047cbd0();
    }
    if (*(float *)(iVar3 + 0x3c) < *(float *)(param_1 + 0x3c)) {
      FUN_0047cbd0();
    }
    iVar4 = param_2 + iVar2 * -0x4c;
    iVar2 = param_2 + iVar2 * -0x98;
    if (*(float *)(iVar2 + 0x3c) < *(float *)(iVar4 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(iVar4 + 0x3c) < *(float *)(param_2 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(iVar2 + 0x3c) < *(float *)(iVar4 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(iVar1 + 0x3c) < *(float *)(param_1 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(param_1 + 0x3c) < *(float *)(iVar4 + 0x3c)) {
      FUN_0047cbd0();
    }
    if (*(float *)(iVar1 + 0x3c) < *(float *)(param_1 + 0x3c)) {
      FUN_0047cbd0();
      return;
    }
  }
  return;
}

