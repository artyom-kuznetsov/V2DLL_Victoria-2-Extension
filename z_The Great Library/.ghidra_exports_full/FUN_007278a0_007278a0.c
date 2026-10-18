// FUN_007278a0 @ 007278a0 body=[[007278a0, 007278f7]]


void FUN_007278a0(undefined4 param_1)

{
  uint uVar1;
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 local_8;
  
  uVar1 = in_EAX - (int)in_ECX;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    local_8 = *(undefined4 *)((int)in_ECX + (uVar1 - 4));
    *(undefined4 *)((int)in_ECX + (uVar1 - 4)) = *in_ECX;
    FUN_00728a40(0,(int)(uVar1 - 4) >> 2,&local_8,param_1);
    uVar1 = uVar1 - 4;
  }
  return;
}

