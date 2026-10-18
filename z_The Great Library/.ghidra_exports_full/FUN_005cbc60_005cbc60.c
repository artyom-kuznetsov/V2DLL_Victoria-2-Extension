// FUN_005cbc60 @ 005cbc60 body=[[005cbc60, 005cbcb5]]


uint FUN_005cbc60(void)

{
  int *piVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  piVar1 = (int *)(**(code **)(*unaff_ESI + 0x38))();
  if (((char)piVar1 == '\0') || (*(int *)(unaff_EDI + 0xb0) == 0)) {
    piVar1 = (int *)(**(code **)(*unaff_ESI + 0x3c))();
    if (((char)piVar1 == '\0') || (*(int *)(unaff_EDI + 0xb0) == 1)) {
      piVar1 = (int *)(**(code **)(*unaff_ESI + 0x40))();
      if ((((char)piVar1 == '\0') || (*(int *)(unaff_EDI + 0xb0) == 2)) &&
         ((piVar1 = *(int **)(unaff_EDI + 0x88), piVar1 == (int *)0x0 || (piVar1 == unaff_ESI)))) {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
    }
  }
  return (uint)piVar1 & 0xffffff00;
}

