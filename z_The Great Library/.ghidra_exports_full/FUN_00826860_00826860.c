// FUN_00826860 @ 00826860 body=[[00826860, 008268cc]]


void FUN_00826860(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  
  cVar1 = (**(code **)(*unaff_ESI + 0xf0))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*unaff_ESI + 0xf4))();
    (**(code **)(*unaff_EDI + 0xe8))(uVar2);
    FUN_0084f9d0(uVar2);
  }
  if ((char)unaff_ESI[0xf] != '\0') {
    (**(code **)(*unaff_EDI + 0x164))(param_1);
    (**(code **)(*unaff_ESI + 0x160))(param_1);
  }
  return;
}

