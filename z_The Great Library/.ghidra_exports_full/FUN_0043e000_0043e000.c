// FUN_0043e000 @ 0043e000 body=[[0043e000, 0043e085]]


void FUN_0043e000(void)

{
  int iVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 8) != 0) {
    *(undefined4 *)(unaff_ESI + 0x14) = in_ECX;
    *(undefined4 *)(unaff_ESI + 0xc) = *in_EAX;
    *(undefined4 *)(unaff_ESI + 0x10) = in_EAX[1];
    FUN_0043e200();
    iVar1 = *(int *)(unaff_ESI + 0xac);
    FUN_00401000(0x3f000000,extraout_ECX,0,0);
    uVar2 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2);
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 8) + 0x18) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x0043e081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(unaff_ESI + 8) + 0x2c))();
    return;
  }
  return;
}

