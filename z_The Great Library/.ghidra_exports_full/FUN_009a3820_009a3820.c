// FUN_009a3820 @ 009a3820 body=[[009a3820, 009a3876]]


int FUN_009a3820(void)

{
  int iVar1;
  int unaff_ESI;
  
  (**(code **)(*(int *)(unaff_ESI + 0x34) + 4))();
  iVar1 = FUN_00a5a320(*(undefined4 *)(unaff_ESI + 0x30),unaff_ESI);
  if (iVar1 != 0) {
    FUN_0068f390();
    return iVar1;
  }
  FUN_0068f390();
  return 0;
}

