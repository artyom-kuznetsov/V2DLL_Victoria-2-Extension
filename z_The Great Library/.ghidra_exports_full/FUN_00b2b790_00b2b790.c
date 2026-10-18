// FUN_00b2b790 @ 00b2b790 body=[[00b2b790, 00b2b7d4]]


undefined4 FUN_00b2b790(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  *param_2 = 0;
  iVar3 = 0;
  do {
    if (param_1[1] == 0) {
      return 6;
    }
    param_1[1] = param_1[1] + -1;
    bVar1 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    bVar2 = (byte)iVar3;
    iVar3 = iVar3 + 8;
    *param_2 = *param_2 | (uint)bVar1 << (bVar2 & 0x1f);
  } while (iVar3 < 0x20);
  return 0;
}

