// Catch@00a1195a @ 00a1195a body=[[00a1195a, 00a11a5d]]


undefined * Catch_00a1195a(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004015b0(unaff_EBP + -0x34,0xcce,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uVar1 = FUN_00987d20("Failed to collect game ",*(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xdc)
                      );
  uVar1 = FUN_00989050(uVar1);
  uVar1 = FUN_00418e30(uVar1);
  uVar1 = FUN_00455470(uVar1);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00401650();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00408ad0();
  FUN_009885d0();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004015b0(unaff_EBP + -0x34,0xcd0,4);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uVar1 = FUN_00987d20();
  iVar2 = *(int *)(unaff_EBP + -0xac);
  if (*(uint *)(unaff_EBP + -0x98) < 0x10) {
    iVar2 = unaff_EBP + -0xac;
  }
  uVar1 = FUN_00418e30(uVar1,iVar2);
  FUN_00401280(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00401650();
  FUN_00408ad0();
  return &DAT_00a11a5e;
}

