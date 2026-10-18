// FUN_004bf520 @ 004bf520 body=[[004bf520, 004bf564]]


undefined4 FUN_004bf520(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if ((iVar1 - *unaff_ESI) / 0x220 == 0) {
    return 0;
  }
  if (*unaff_ESI != iVar1) {
    (*(code *)**(undefined4 **)(iVar1 + -0x220))(0);
    unaff_ESI[1] = unaff_ESI[1] + -0x220;
  }
  return 1;
}

