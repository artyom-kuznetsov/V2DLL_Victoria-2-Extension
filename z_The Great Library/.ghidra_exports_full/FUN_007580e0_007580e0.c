// FUN_007580e0 @ 007580e0 body=[[007580e0, 00758171]]


void FUN_007580e0(void)

{
  int *in_EAX;
  int iVar1;
  int unaff_EDI;
  
  if ((unaff_EDI == 3) || (unaff_EDI == 1)) {
    iVar1 = (**(code **)(*in_EAX + 0x6c))();
    *(undefined1 *)(iVar1 + 0x356) = 0;
    in_EAX[0x1db] = 2;
  }
  iVar1 = FUN_00475500();
  *(undefined1 *)(iVar1 + 0x165) = 0;
  (**(code **)(**(int **)(in_EAX[0x1d3] + in_EAX[0x1d7] * 4) + 0xc))();
  in_EAX[0x1d7] = unaff_EDI;
  (**(code **)(**(int **)(in_EAX[0x1d3] + unaff_EDI * 4) + 4))();
  (**(code **)(**(int **)(in_EAX[0x1d3] + in_EAX[0x1d7] * 4) + 8))();
  if (*(int *)(in_EAX[0x6d] + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075816e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(in_EAX[0x6d] + 0x20) + 0x18) + 0x38))();
    return;
  }
  return;
}

