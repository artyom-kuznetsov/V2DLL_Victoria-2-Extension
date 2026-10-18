// FUN_00795af0 @ 00795af0 body=[[00795af0, 00795b7c]]


void FUN_00795af0(void)

{
  int iVar1;
  int *unaff_ESI;
  int iVar2;
  
  (**(code **)(*(int *)(*unaff_ESI + 0x54) + 0x10))();
  iVar1 = FUN_00b31c00();
  iVar2 = 0;
  if (0 < unaff_ESI[1]) {
    iVar1 = iVar1 * 0x28;
    do {
      FUN_00408ed0(unaff_ESI[6] + iVar1 + 0xc,0,0xffffffff);
      FUN_007938e0();
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < unaff_ESI[1]);
  }
  return;
}

