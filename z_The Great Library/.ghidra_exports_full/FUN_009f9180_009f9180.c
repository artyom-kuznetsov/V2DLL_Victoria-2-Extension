// FUN_009f9180 @ 009f9180 body=[[009f9180, 009f91ec]]


void FUN_009f9180(int param_1,undefined1 param_2)

{
  int *in_ECX;
  float fStack_8;
  
  *(undefined1 *)(in_ECX + 0x13) = param_2;
  in_ECX[0xd] = *(int *)(param_1 + 4);
  *(undefined8 *)(in_ECX + 0xe) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(in_ECX + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(in_ECX + 0x12) = *(undefined1 *)(param_1 + 0x18);
  fStack_8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (fStack_8 < DAT_00f092fc) {
    (**(code **)(*in_ECX + 300))(1,*(undefined8 *)(param_1 + 8));
    return;
  }
  (**(code **)(*in_ECX + 300))(0,*(undefined8 *)(param_1 + 8));
  return;
}

