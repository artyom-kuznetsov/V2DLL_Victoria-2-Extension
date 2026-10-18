// Catch@00a0f924 @ 00a0f924 body=[[00a0f924, 00a0fa33]]


undefined * Catch_00a0f924(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004015b0(unaff_EBP + -0xa4,0xba2,4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uVar1 = FUN_00987d20("Failed to start own game ",
                       *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xdc));
  uVar1 = FUN_00989050(uVar1);
  uVar1 = FUN_00418e30(uVar1);
  uVar1 = FUN_00455470(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004015b0(unaff_EBP + -0xa4,0xba4,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0xc4);
  if (*(uint *)(unaff_EBP + -0xb0) < 0x10) {
    iVar2 = unaff_EBP + -0xc4;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00401650();
  FUN_00408ad0();
  return &DAT_00a0fa34;
}

