// FUN_006b5d50 @ 006b5d50 body=[[006b5d50, 006b5d9d]]


void FUN_006b5d50(undefined4 param_1)

{
  int in_EAX;
  uint uVar1;
  undefined4 *in_ECX;
  undefined4 local_8;
  
  uVar1 = in_EAX - (int)in_ECX;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    local_8 = *(undefined4 *)((int)in_ECX + (uVar1 - 4));
    *(undefined4 *)((int)in_ECX + (uVar1 - 4)) = *in_ECX;
    uVar1 = uVar1 - 4;
    FUN_006b5fa0(0,(int)uVar1 >> 2,&local_8,param_1);
  }
  return;
}

