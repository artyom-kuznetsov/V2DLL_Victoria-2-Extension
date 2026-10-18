// FUN_007884e0 @ 007884e0 body=[[007884e0, 00788539]]


void FUN_007884e0(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  cVar2 = FUN_0077f4e0(&stack0x00000008,*unaff_EDI);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  cVar2 = FUN_0077f4e0(&stack0x00000008,*unaff_ESI);
  if (cVar2 != '\0') {
    uVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  cVar2 = FUN_0077f4e0(&stack0x00000008,*unaff_EDI);
  if (cVar2 != '\0') {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  return;
}

