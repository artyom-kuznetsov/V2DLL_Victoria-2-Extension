// FUN_00a0a730 @ 00a0a730 body=[[00a0a730, 00a0a7ac]]


void FUN_00a0a730(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xd9) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_1 + 3);
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 0x4c) = (uint)(byte)(param_1._3_1_ - 0x30);
      return;
    }
    FUN_009a1140();
    *(uint *)(in_ECX + 0x4c) = param_1 >> 0x18;
    return;
  }
  if (param_2 != 0xeb) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_00a127a0(param_1,in_ECX + 0x3c);
  return;
}

