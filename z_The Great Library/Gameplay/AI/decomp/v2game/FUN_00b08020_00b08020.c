// FUN_00b08020 @ 00b08020 body=[[00b08020, 00b08066]]


void FUN_00b08020(byte param_1)

{
  ushort uVar1;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x9c);
  if (((byte)(uVar1 >> 10) & 1) != param_1) {
    if (param_1 == 0) {
      uVar1 = uVar1 & 0xfbff;
    }
    else {
      uVar1 = uVar1 | 0x400;
    }
    *(ushort *)(in_ECX + 0x9c) = uVar1;
    (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x30))();
  }
  return;
}

