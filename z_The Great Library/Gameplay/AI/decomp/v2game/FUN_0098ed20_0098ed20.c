// FUN_0098ed20 @ 0098ed20 body=[[0098ed20, 0098ed70]]


int FUN_0098ed20(void)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (*(int **)(unaff_ESI + 0x10))[3];
  if (**(int **)(unaff_ESI + 0x10) == 0) {
    if (0 < iVar1) {
      FUN_0098f1c0();
      **(undefined4 **)(unaff_ESI + 0x10) = local_c;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 4) = local_c;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 8) = local_c;
      *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0xc) = local_8;
      return *(int *)(*(int *)(unaff_ESI + 0x10) + 0xc);
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0xc);
  }
  return iVar1;
}

