// FUN_005a9c10 @ 005a9c10 body=[[005a9c10, 005a9c5a]]


undefined4 FUN_005a9c10(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x88);
  piVar2 = (int *)FUN_00598b60(local_8);
  if (iVar1 < *piVar2) {
    piVar2 = (int *)FUN_00598b60(local_c);
    if (iVar1 < *piVar2) {
      return 0;
    }
  }
  return 1;
}

