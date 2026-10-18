// FUN_0043c450 @ 0043c450 body=[[0043c450, 0043c46e]]


void FUN_0043c450(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*unaff_ESI + 8))();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    return;
  }
  FUN_0043c3f0(unaff_ESI);
  return;
}

