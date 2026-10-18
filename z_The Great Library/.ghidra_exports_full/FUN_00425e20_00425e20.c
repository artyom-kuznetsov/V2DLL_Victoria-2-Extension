// FUN_00425e20 @ 00425e20 body=[[00425e20, 00425ec5]]


uint FUN_00425e20(char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *in_EAX;
  uint uVar5;
  int unaff_EDI;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  uVar2 = *(uint *)(iVar1 + in_EAX[1] * 4);
  uVar5 = uVar2;
  if ((*(char *)(uVar2 + 0x31) != '\0') && (uVar3 = in_EAX[1], *(uint *)(unaff_EDI + 0x18) != uVar3)
     ) {
    uVar4 = *(uint *)(unaff_EDI + 0x30);
    uVar5 = *(uint *)(unaff_EDI + 0x2c);
    if (uVar5 != uVar4) {
      do {
        if (*(uint *)(uVar5 + 4) == uVar3) break;
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar4);
      if (uVar5 != uVar4) goto LAB_00425ebc;
    }
    if ((((*(uint *)(unaff_EDI + 0x20) != uVar3) && (uVar5 = FUN_0042bb00(), (char)uVar5 == '\0'))
        && (*(char *)(uVar2 + 0x67c) == '\0')) &&
       ((uVar5 = *in_EAX, *(char *)(*(int *)(iVar1 + in_EAX[1] * 4) + 3000) == '\0' &&
        ((*(uint *)(unaff_EDI + 0x60) != uVar3 ||
         (uVar5 = CONCAT31((int3)(uVar5 >> 8),param_1), param_1 == *(char *)(unaff_EDI + 100)))))))
    {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
LAB_00425ebc:
  return uVar5 & 0xffffff00;
}

