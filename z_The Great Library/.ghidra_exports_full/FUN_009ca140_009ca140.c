// FUN_009ca140 @ 009ca140 body=[[009ca140, 009ca1a5]]


void FUN_009ca140(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  
  uVar1 = param_2 >> 0xf | param_3 << 0x11;
  uVar2 = (int)uVar1 >> 0x1f;
  if (999 < (int)((uVar1 ^ uVar2) - uVar2)) {
    FUN_009c9e20();
    return;
  }
  FUN_00988bb0(unaff_ESI,param_1);
  return;
}

