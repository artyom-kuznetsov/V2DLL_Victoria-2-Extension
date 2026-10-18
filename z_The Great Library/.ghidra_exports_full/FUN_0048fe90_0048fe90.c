// FUN_0048fe90 @ 0048fe90 body=[[0048fe90, 0048fed8]]


void FUN_0048fe90(void)

{
  int *piVar1;
  undefined1 *unaff_ESI;
  
  piVar1 = (int *)FUN_0048fe10(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))();
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

