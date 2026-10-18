// FUN_0066a040 @ 0066a040 body=[[0066a040, 0066a0ce]]


void FUN_0066a040(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  undefined1 *unaff_EDI;
  
  if (*(char *)(*(int *)(*(int *)(in_EAX + 0x1e00) + 0x28) + 0x67) != '\0') {
    FUN_0069c350(unaff_EDI,param_1);
    return;
  }
  cVar1 = FUN_0066bbf0();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(*(int *)(in_EAX + 0xd80) + *(int *)(in_EAX + 0xd7c) * 4) + 0x28))();
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *unaff_EDI = 0;
  *(undefined4 *)(unaff_EDI + 0x30) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  unaff_EDI[0x1c] = 0;
  *(undefined4 *)(unaff_EDI + 0x4c) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x48) = 0;
  unaff_EDI[0x38] = 0;
  *(undefined4 *)(unaff_EDI + 0x54) = 0;
  unaff_EDI[0x58] = 1;
  return;
}

