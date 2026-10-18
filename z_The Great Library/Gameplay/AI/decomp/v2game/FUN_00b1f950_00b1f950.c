// FUN_00b1f950 @ 00b1f950 body=[[00b1f950, 00b1f9ae]]


int * FUN_00b1f950(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  
  iVar1 = (**(code **)(unaff_EBX + 4))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(unaff_EBX + 8))();
    if (iVar1 != 0) {
      piVar2 = (int *)(*DAT_013f3aa8)(0x14,0);
      if (piVar2 == (int *)0x0) {
        (**(code **)(unaff_EBX + 0x34))(iVar1);
        return (int *)0x0;
      }
      piVar2[1] = 0;
      piVar2[4] = 0;
      *piVar2 = iVar1;
      piVar2[2] = 0;
      piVar2[3] = unaff_EBX;
      return piVar2;
    }
  }
  return (int *)0x0;
}

