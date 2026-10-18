// FUN_00826780 @ 00826780 body=[[00826780, 0082678c] [00826790, 008267fc]]


void FUN_00826780(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *in_EAX;
  undefined4 uVar4;
  int *unaff_ESI;
  
  piVar1 = (int *)*in_EAX;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    (**(code **)(*param_1 + 0x1d4))(iVar2);
    *(int **)(iVar2 + 0x324) = unaff_ESI;
    (**(code **)(*unaff_ESI + 0x1d0))(iVar2);
    cVar3 = (**(code **)(*unaff_ESI + 0xf0))();
    if ((cVar3 != '\0') && (*(int **)(iVar2 + 0x324) == unaff_ESI)) {
      uVar4 = (**(code **)(*unaff_ESI + 0xf4))();
      (**(code **)(*unaff_ESI + 0xe8))(uVar4);
      FUN_0084f9d0(uVar4);
    }
  }
  return;
}

