// FUN_009ffa40 @ 009ffa40 body=[[009ffa40, 009ffb37]]


void FUN_009ffa40(uint param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0xd5:
    FUN_0072d580();
    return;
  case 0xd6:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_1 + 3);
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 0x3c) = (uint)(byte)(param_1._3_1_ - 0x30);
      return;
    }
    FUN_009a1140();
    *(uint *)(in_ECX + 0x3c) = param_1 >> 0x18;
    return;
  default:
    FUN_009a2620(param_1,param_2);
    break;
  case 0xd9:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_2 + 3);
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 0x40) = (uint)(byte)(param_2._3_1_ - 0x30);
      return;
    }
    FUN_009a1140();
    *(uint *)(in_ECX + 0x40) = param_2 >> 0x18;
    return;
  case 0xe0:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",in_ECX + 0x44);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

