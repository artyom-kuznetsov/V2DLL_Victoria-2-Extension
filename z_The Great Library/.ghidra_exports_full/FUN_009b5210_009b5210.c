// FUN_009b5210 @ 009b5210 body=[[009b5210, 009b530a]]


void FUN_009b5210(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  in_ECX[0x53] = in_ECX[0x53] + 1;
  if (*(char *)((int)in_ECX + 0x146) == '\0') {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x14))(&local_10);
    iVar2 = (int)((float)(int)*(short *)((int)in_ECX + 0xea) / (float)(int)*(short *)(iVar1 + 2));
    iVar1 = in_ECX[0x53] - iVar2;
    in_ECX[0x54] = iVar2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (in_ECX[0x41] != 0) {
      iVar2 = *(int *)(in_ECX[0x41] + 0x54);
      local_c = iVar1 * 1000;
      local_8 = 1000;
      local_10 = 0;
      FUN_0043d130(&local_8);
      (**(code **)(iVar2 + 0x14))();
    }
  }
  else if ((in_ECX[0x55] != -1) && (in_ECX[0x55] < in_ECX[0x1a])) {
    if (*(int *)in_ECX[0x18] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)in_ECX[0x18] + -0x1c;
    }
    (**(code **)(*in_ECX + 0x20))(iVar1,1);
  }
  FUN_009b2ae0(param_1,param_2,param_3);
  return;
}

