// FUN_004f2b40 @ 004f2b40 body=[[004f2b40, 004f2b69]]


undefined4 FUN_004f2b40(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if ((iVar1 - *unaff_ESI & 0xfffffff0U) == 0) {
    return 0;
  }
  if (*unaff_ESI != iVar1) {
    (*(code *)**(undefined4 **)(iVar1 + -0x10))(0);
    unaff_ESI[1] = unaff_ESI[1] + -0x10;
  }
  return 1;
}

