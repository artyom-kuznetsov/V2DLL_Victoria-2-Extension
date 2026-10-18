// Catch@00a10878 @ 00a10878 body=[[00a10878, 00a1097a]]


undefined * Catch_00a10878(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_004015b0(unaff_EBP + -0x40,0xc34,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x20) + 0x3c;
  uVar1 = FUN_00987d20("failed to set gameowner to ");
  uVar1 = FUN_00989050(uVar1);
  uVar1 = FUN_00418e30(uVar1);
  uVar1 = FUN_00989050(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_004015b0(unaff_EBP + -0x40,0xc36,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0x138);
  if (*(uint *)(unaff_EBP + -0x124) < 0x10) {
    iVar2 = unaff_EBP + -0x138;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00401650();
  FUN_00408ad0();
  return &DAT_00a1097b;
}

