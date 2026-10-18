// FUN_00a530e0 @ 00a530e0 body=[[00a530e0, 00a53155]]


int FUN_00a530e0(float param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  param_1 = *(float *)(in_ECX + 0x110) * param_1;
  *(float *)(in_ECX + 0x1c8) = param_1;
  if (param_1 < -0.0) {
    *(undefined4 *)(in_ECX + 0x1c8) = 0;
  }
  if (*(float *)(in_ECX + 0x1c8) < DAT_00f092fc) {
    *(undefined4 *)(in_ECX + 0x1cc) = 0;
    return in_EAX;
  }
  iVar1 = (int)*(float *)(in_ECX + 0x1c8);
  *(int *)(in_ECX + 0x1cc) = iVar1 % *(int *)(in_ECX + 0x1d8);
  return iVar1 / *(int *)(in_ECX + 0x1d8);
}

