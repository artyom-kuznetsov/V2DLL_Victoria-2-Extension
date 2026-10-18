// FUN_004ef140 @ 004ef140 body=[[004ef140, 004ef1ac]]


void FUN_004ef140(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(unaff_ESI + 0x128);
  uVar2 = __allmul(uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11,param_2,param_3);
  FUN_004ee150(unaff_EDI,unaff_ESI,
               -(uint)(param_1 != '\0') &
               ((uint)uVar2 >> 0x1e | (int)((ulonglong)uVar2 >> 0x20) << 2),param_4,param_5);
  FUN_004ee300(unaff_EDI,unaff_ESI);
  FUN_004ee990(unaff_EDI,unaff_ESI,param_2,param_3);
  return;
}

