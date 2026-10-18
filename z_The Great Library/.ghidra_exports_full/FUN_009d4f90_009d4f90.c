// FUN_009d4f90 @ 009d4f90 body=[[009d4f90, 009d4fbc] [009d4fc0, 009d5004]]


void FUN_009d4f90(undefined4 param_1)

{
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  if (8 < (int)(in_EAX - (int)in_ECX & 0xfffffff8U)) {
    puVar1 = (undefined4 *)(in_EAX + -4);
    local_c = 4 - (int)in_ECX;
    do {
      local_14 = puVar1[-1];
      local_10 = *puVar1;
      puVar1[-1] = *in_ECX;
      *puVar1 = in_ECX[1];
      FUN_009d5200(0,(-4 - (int)in_ECX) + (int)puVar1 >> 3,&local_14,param_1);
      puVar1 = puVar1 + -2;
    } while (8 < (int)(local_c + (int)puVar1 & 0xfffffff8U));
  }
  return;
}

