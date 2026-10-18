// FUN_00b2f800 @ 00b2f800 body=[[00b2f800, 00b2f858]]


undefined8 FUN_00b2f800(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_00b2f770(param_1);
  if ((iVar1 != 0) && (iVar1 = iVar1 + -1, -1 < iVar1)) {
    do {
      uVar3 = 0;
      if (*(uint *)(param_1 + 8) == 0) {
LAB_00b2f83c:
        return CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x18) + 4 + iVar1 * 8),
                        *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 8));
      }
      piVar2 = (int *)(*(int *)(param_1 + 0xc) + 4);
      while (*piVar2 != iVar1) {
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 2;
        if (*(uint *)(param_1 + 8) <= uVar3) goto LAB_00b2f83c;
      }
      if ((int)uVar3 < 0) goto LAB_00b2f83c;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

