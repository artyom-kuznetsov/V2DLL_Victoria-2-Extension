// FUN_009e7500 @ 009e7500 body=[[009e7500, 009e7594]]


void FUN_009e7500(void)

{
  char cVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    FUN_00408ed0(unaff_EDI,0,0xffffffff);
    (**(code **)(**(int **)(unaff_ESI + 0x138) + 0x3c))(unaff_ESI + 0x11c);
    (**(code **)(**(int **)(unaff_ESI + 0x58) + 0xf4))();
    (**(code **)(**(int **)(unaff_ESI + 0x138) + 0x44))();
  }
  return;
}

