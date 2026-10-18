// FUN_0093e570 @ 0093e570 body=[[0093e570, 0093e599]]


undefined4 FUN_0093e570(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if ((iVar1 - *unaff_ESI & 0xffffffc0U) == 0) {
    return 0;
  }
  if (*unaff_ESI != iVar1) {
    (*(code *)**(undefined4 **)(iVar1 + -0x40))(0);
    unaff_ESI[1] = unaff_ESI[1] + -0x40;
  }
  return 1;
}

