// FUN_00826720 @ 00826720 body=[[00826720, 00826770]]


void FUN_00826720(void)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(int **)(unaff_EDI + 0x324) = unaff_ESI;
  (**(code **)(*unaff_ESI + 0x1c4))();
  cVar1 = (**(code **)(*unaff_ESI + 0xf0))();
  if ((cVar1 != '\0') && (*(int **)(unaff_EDI + 0x324) == unaff_ESI)) {
    uVar2 = (**(code **)(*unaff_ESI + 0xf4))();
    (**(code **)(*unaff_ESI + 0xe8))(uVar2);
    FUN_0084f9d0(uVar2);
  }
  return;
}

