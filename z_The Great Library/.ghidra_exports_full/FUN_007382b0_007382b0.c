// FUN_007382b0 @ 007382b0 body=[[007382b0, 007382e8]]


void FUN_007382b0(undefined8 *param_1)

{
  int in_ECX;
  int in_EDX;
  
  for (; in_EDX != in_ECX; in_ECX = in_ECX + -0x18) {
    param_1[-3] = *(undefined8 *)(in_ECX + -0x18);
    param_1[-2] = *(undefined8 *)(in_ECX + -0x10);
    param_1[-1] = *(undefined8 *)(in_ECX + -8);
    param_1 = param_1 + -3;
  }
  return;
}

