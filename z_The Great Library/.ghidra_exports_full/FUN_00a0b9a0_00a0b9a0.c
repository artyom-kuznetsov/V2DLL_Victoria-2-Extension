// FUN_00a0b9a0 @ 00a0b9a0 body=[[00a0b9a0, 00a0ba43]]


void FUN_00a0b9a0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = param_2;
  uVar1 = param_1;
  if (param_2 == 0xd9) {
    iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%c",(int)&param_1 + 3);
    if (iVar3 == 0) {
      FUN_009a1140();
    }
    else {
      param_1 = CONCAT13(param_1._3_1_ + -0x30,(undefined3)param_1);
    }
    *(uint *)(in_ECX + 0x90) = param_1 >> 0x18;
  }
  else if (param_2 == 0xe0) {
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  if (iVar2 != 0xe8) {
    if (iVar2 != 0xe9) {
      FUN_009a2620(uVar1,iVar2);
      return;
    }
    FUN_009a1750(in_ECX + 0x58,0);
    return;
  }
  FUN_009a1750(in_ECX + 0x3c,0);
  return;
}

