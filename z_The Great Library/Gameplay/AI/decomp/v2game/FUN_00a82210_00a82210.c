// FUN_00a82210 @ 00a82210 body=[[00a82210, 00a8226c]]


void FUN_00a82210(float param_1)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x144) <= 0.0 && *(float *)(in_ECX + 0x144) != 0.0) {
    *(float *)(in_ECX + 0x144) = param_1;
  }
  if (*(char *)(in_ECX + 0x150) != '\0') {
    FUN_00a822e0();
  }
  *(float *)(in_ECX + 0x148) = param_1;
  *(float *)(in_ECX + 0x144) = param_1 + *(float *)(in_ECX + 0x144);
  return;
}

