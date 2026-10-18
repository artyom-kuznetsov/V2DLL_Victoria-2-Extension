// FUN_00a154be @ 00a154be body=[[00a154be, 00a15528]]


void FUN_00a154be(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  iVar1 = FUN_00aae9af(0x90);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a12e70(iVar1,*(undefined4 *)(unaff_ESI + 0x7c),unaff_ESI,unaff_ESI + 0x94,
                         *(undefined4 *)(unaff_ESI + 0xb0),1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x8c) + 0x38) + 0x18))(uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

