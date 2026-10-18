// FUN_008e9e30 @ 008e9e30 body=[[008e9e30, 008e9e7c]]


void FUN_008e9e30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 != 0x344) {
    FUN_008b33e0(param_1,param_2);
    return;
  }
  puVar1 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_10);
  *(undefined4 *)(in_ECX + 0x20) = *puVar1;
  *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
  return;
}

