// FUN_005c0110 @ 005c0110 body=[[005c0110, 005c0159]]


uint FUN_005c0110(void)

{
  char cVar1;
  uint uVar2;
  int *unaff_ESI;
  
  cVar1 = (**(code **)(*unaff_ESI + 0x24))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*unaff_ESI + 0x2c))();
    if (cVar1 == '\0') {
      uVar2 = unaff_ESI[0x1b];
      if ((int)(unaff_ESI[0xf] - uVar2) < 0) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      goto LAB_005c0154;
    }
  }
  uVar2 = unaff_ESI[0x1b];
  if ((int)(unaff_ESI[0xf] - uVar2) < 0) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_005c0154:
  return uVar2 & 0xffffff00;
}

