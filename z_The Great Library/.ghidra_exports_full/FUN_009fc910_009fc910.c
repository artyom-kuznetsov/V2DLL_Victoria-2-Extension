// FUN_009fc910 @ 009fc910 body=[[009fc910, 009fc98a]]


void FUN_009fc910(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xd5) {
    FUN_0072d580();
    return;
  }
  if (param_2 != 0xd6) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_1 + 3);
  if (iVar1 != 0) {
    *(uint *)(in_ECX + 0x3c) = (uint)(byte)(param_1._3_1_ - 0x30);
    return;
  }
  FUN_009a1140();
  *(uint *)(in_ECX + 0x3c) = param_1 >> 0x18;
  return;
}

