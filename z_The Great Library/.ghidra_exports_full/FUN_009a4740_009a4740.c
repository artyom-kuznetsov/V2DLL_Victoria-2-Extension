// FUN_009a4740 @ 009a4740 body=[[009a4740, 009a47d3]]


undefined4 FUN_009a4740(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  
  if ((char)unaff_ESI[0x27] == '\0') {
    iVar2 = unaff_ESI[0x28];
    if (iVar2 != 0) {
      for (piVar1 = (int *)unaff_ESI[0x17]; (piVar1 != (int *)unaff_ESI[0x18] && (*piVar1 != iVar2))
          ; piVar1 = piVar1 + 1) {
      }
      iVar2 = FUN_009a4700(iVar2);
      if (iVar2 != 0) goto LAB_009a47bc;
    }
    iVar2 = FUN_009a4700(unaff_ESI[0x28]);
    if (iVar2 != 0) {
LAB_009a47bc:
      (**(code **)(*unaff_ESI + 100))(iVar2);
      return 1;
    }
  }
  return 0;
}

