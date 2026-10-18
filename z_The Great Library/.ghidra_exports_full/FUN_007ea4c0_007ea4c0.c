// FUN_007ea4c0 @ 007ea4c0 body=[[007ea4c0, 007ea53c]]


void FUN_007ea4c0(int param_1)

{
  int *in_ECX;
  
  FUN_007ea900(in_ECX[0x3e],in_ECX[0x4f],*(int *)(param_1 + 0x6bc88) + 0x1c,in_ECX + 0x21,
               in_ECX[0x50],in_ECX + 0x51);
  if (((char)in_ECX[0x52] != '\0') && ((char)in_ECX[0x14] == '\0')) {
    (**(code **)(*in_ECX + 0x44))();
    FUN_0099d980();
    (**(code **)(*in_ECX + 0x38))();
    *(undefined1 *)(in_ECX + 0x14) = 1;
  }
  return;
}

