// FUN_00508530 @ 00508530 body=[[00508530, 00508584]]


void FUN_00508530(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined8 uVar4;
  
  puVar1 = (undefined4 *)FUN_00969ed0(in_EAX + 0x12e8);
  uVar4 = __allmul(*puVar1,puVar1[1],0x1f40000,0);
  uVar2 = (uint)uVar4 >> 0x1e | (int)((ulonglong)uVar4 >> 0x20) << 2;
  uVar4 = __allmul(uVar2,(int)uVar2 >> 0x1f,1000,0);
  uVar3 = __alldiv(uVar4,45000,0);
  *unaff_ESI = uVar3;
  return;
}

