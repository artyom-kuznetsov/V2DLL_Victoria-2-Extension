// FUN_00676d50 @ 00676d50 body=[[00676d50, 00676e0d]]


void FUN_00676d50(void)

{
  int iVar1;
  char cVar2;
  undefined4 in_EAX;
  int unaff_EDI;
  
  FUN_0073d920(in_EAX);
  FUN_0073d4e0();
  iVar1 = *(int *)(unaff_EDI + 0x1e00);
  if (*(char *)(*(int *)(iVar1 + 0x28) + 0x67) != '\0') {
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x28) + 0x18) + 0x38))();
    if (*(char *)(iVar1 + 0x38) == '\0') {
      cVar2 = (**(code **)(**(int **)(iVar1 + 0x20) + 0x158))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x20) + 0x15c))();
      }
    }
  }
  iVar1 = *(int *)(unaff_EDI + 0xdb4);
  if (iVar1 == 2) {
    FUN_0066c6f0();
    return;
  }
  if (iVar1 == 10) {
    FUN_0066e120();
    return;
  }
  if (iVar1 == 0xb) {
    FUN_0066e000();
    return;
  }
  if (iVar1 == 0xd) {
    FUN_0066d2b0();
    return;
  }
  if (iVar1 == 0x11) {
    FUN_0066da90();
    return;
  }
  if (iVar1 == 0x13) {
    FUN_0066d3d0();
    return;
  }
  if (iVar1 == 0x14) {
    FUN_0066d970();
    return;
  }
  if (iVar1 == 0x15) {
    FUN_0066d850();
    return;
  }
  return;
}

