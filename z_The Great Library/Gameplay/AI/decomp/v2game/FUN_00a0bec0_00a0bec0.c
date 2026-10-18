// FUN_00a0bec0 @ 00a0bec0 body=[[00a0bec0, 00a0bf41]]


void FUN_00a0bec0(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xd9) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_1 + 3);
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 0x8c) = (uint)(byte)(param_1._3_1_ - 0x30);
      return;
    }
    FUN_009a1140();
    *(uint *)(in_ECX + 0x8c) = param_1 >> 0x18;
    return;
  }
  if (param_2 != 0xe0) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  (**(code **)(*(int *)(in_ECX + 0x3c) + 0xc))(param_1);
  return;
}

