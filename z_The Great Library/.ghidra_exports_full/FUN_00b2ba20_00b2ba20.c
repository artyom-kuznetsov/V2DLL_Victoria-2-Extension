// FUN_00b2ba20 @ 00b2ba20 body=[[00b2ba20, 00b2baa1]]


undefined4 FUN_00b2ba20(undefined4 *param_1,uint param_2,int *param_3,code *param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 0;
  bVar1 = 0;
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else {
    iVar2 = (*param_4)(param_2);
    *param_3 = iVar2;
    if (iVar2 == 0) {
      return 0x8007000e;
    }
  }
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      if (bVar3 == 0) {
        if (param_1[1] == 0) {
          return 6;
        }
        param_1[1] = param_1[1] + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        bVar3 = 0x80;
      }
      *(bool *)(uVar4 + *param_3) = (bVar1 & bVar3) != 0;
      uVar4 = uVar4 + 1;
      bVar3 = bVar3 >> 1;
    } while (uVar4 < param_2);
  }
  return 0;
}

