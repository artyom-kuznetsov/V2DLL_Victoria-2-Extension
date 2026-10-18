// FUN_00a1b500 @ 00a1b500 body=[[00a1b500, 00a1b59f]]


undefined4 FUN_00a1b500(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  if (*(int *)(unaff_ESI + 0x20) == 0) {
    *(code **)(unaff_ESI + 0x20) = FUN_00a1b450;
    *(undefined4 *)(unaff_ESI + 0x28) = 0;
  }
  if (*(int *)(unaff_ESI + 0x24) == 0) {
    *(code **)(unaff_ESI + 0x24) = FUN_00b2f9f0;
  }
  iVar1 = (**(code **)(unaff_ESI + 0x20))(*(undefined4 *)(unaff_ESI + 0x28),1,0x18);
  *(int *)(unaff_ESI + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 0xc) = 0;
    *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 0xc) = 1;
    *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 0x10) = 0xf;
    iVar1 = FUN_00a19ce0(~-(uint)(*(int *)(*(int *)(unaff_ESI + 0x1c) + 0xc) != 0) & 0xa1b310,0x8000
                        );
    *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x14) = iVar1;
    if (iVar1 != 0) {
      FUN_00a1b470();
      return 0;
    }
    FUN_00a1b4b0();
  }
  return 0xfffffffc;
}

