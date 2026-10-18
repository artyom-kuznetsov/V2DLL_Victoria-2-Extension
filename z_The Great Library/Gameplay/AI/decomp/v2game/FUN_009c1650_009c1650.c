// FUN_009c1650 @ 009c1650 body=[[009c1650, 009c16b4]]


uint FUN_009c1650(void)

{
  undefined4 uVar1;
  uint in_EAX;
  int unaff_ESI;
  uint uVar2;
  
  if (((DAT_01258a94 != 0) && (in_EAX = DAT_01258a98, DAT_01258a98 != 0)) &&
     (*(char *)(unaff_ESI + 0x10) != '\0')) {
    uVar2 = DAT_01258a98;
    if (0x1268 < *(uint *)(unaff_ESI + 8)) {
      uVar2 = DAT_01258a94;
    }
    FUN_009c1cb0(uVar2);
    uVar1 = *(undefined4 *)(unaff_ESI + 0xc);
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
    *(undefined4 *)(unaff_ESI + 0xc) = 0xfffe;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

