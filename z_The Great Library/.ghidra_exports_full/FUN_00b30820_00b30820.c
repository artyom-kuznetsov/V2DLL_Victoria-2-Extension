// FUN_00b30820 @ 00b30820 body=[[00b30820, 00b308a2]]


undefined4 FUN_00b30820(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((4 < param_3) && (bVar2 = *param_2, bVar2 < 0xe1)) {
    param_1[2] = 0;
    if (0x2c < bVar2) {
      uVar3 = (uint)bVar2;
      uVar1 = uVar3 / 0x2d;
      do {
        bVar2 = bVar2 - 0x2d;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      param_1[2] = uVar3 / 0x2d;
    }
    param_1[1] = 0;
    if (8 < bVar2) {
      uVar1 = (uint)bVar2;
      uVar3 = uVar1 / 9;
      do {
        bVar2 = bVar2 - 9;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      param_1[1] = uVar1 / 9;
    }
    *param_1 = (uint)bVar2;
    return 0;
  }
  return 1;
}

