// FUN_00a0f320 @ 00a0f320 body=[[00a0f320, 00a0f426]]


void FUN_00a0f320(int param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  switch(param_2) {
  case 0xcc:
    param_2 = param_2 & 0xffffff;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_2 + 3);
    if (iVar1 != 0) {
      *(uint *)(in_ECX + 0x78) = (uint)(byte)(param_2._3_1_ - 0x30);
      return;
    }
    FUN_009a1140();
    *(uint *)(in_ECX + 0x78) = param_2 >> 0x18;
    return;
  default:
    if (param_2 != 0xe8) {
      if (param_2 != 0xe9) {
        FUN_009a2620(param_1,param_2);
        return;
      }
      FUN_009a1750(in_ECX + 0x58,0);
      return;
    }
    FUN_009a1750(in_ECX + 0x3c,0);
    break;
  case 0xeb:
    FUN_0045be80(param_1,in_ECX + 0x98);
    return;
  case 0xf3:
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x74);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
    break;
  case 0x102:
    FUN_009a1750(in_ECX + 0x7c,0);
    return;
  }
  return;
}

