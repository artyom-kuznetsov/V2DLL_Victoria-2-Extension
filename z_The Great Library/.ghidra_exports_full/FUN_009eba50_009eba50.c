// FUN_009eba50 @ 009eba50 body=[[009eba50, 009ebb48]]


void FUN_009eba50(float param_1)

{
  int in_ECX;
  
  *(ulonglong *)(in_ECX + 0xf8) =
       CONCAT44(*(float *)(in_ECX + 300) -
                (*(float *)(in_ECX + 300) - *(float *)(in_ECX + 0x120)) * param_1,
                *(float *)(in_ECX + 0x128) -
                (*(float *)(in_ECX + 0x128) - *(float *)(in_ECX + 0x11c)) * param_1);
  *(float *)(in_ECX + 0x100) =
       *(float *)(in_ECX + 0x130) -
       (*(float *)(in_ECX + 0x130) - *(float *)(in_ECX + 0x124)) * param_1;
  FUN_009ebf10(in_ECX);
  return;
}

