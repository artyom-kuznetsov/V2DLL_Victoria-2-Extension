// FUN_00938360 @ 00938360 body=[[00938360, 009383cf]]


void FUN_00938360(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)FUN_0093cfb0();
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  uVar4 = FUN_0042ca20(uVar1);
  if ((((uVar2 - uVar1 & 0xffffffc0) != 0) && (uVar1 <= uVar4)) && (uVar4 < uVar2)) {
    if (uVar4 != uVar2 - 0x40) {
      FUN_0042c960(param_2);
    }
    FUN_0093e570();
  }
  return;
}

