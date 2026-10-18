// FUN_00691050 @ 00691050 body=[[00691050, 0069109d]]


void FUN_00691050(undefined4 param_1)

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
    FUN_00691860((int)uVar1 >> 2,&local_8,param_1);
  }
  return;
}

