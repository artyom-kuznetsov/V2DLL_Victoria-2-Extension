// FUN_005b7080 @ 005b7080 body=[[005b7080, 005b70b4]]


void FUN_005b7080(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x88) != 0) {
    *(undefined4 *)(unaff_ESI + 0x88) = 0;
    uVar1 = FUN_005b6140();
    FUN_005cbcc0(uVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x88) = param_1;
  return;
}

