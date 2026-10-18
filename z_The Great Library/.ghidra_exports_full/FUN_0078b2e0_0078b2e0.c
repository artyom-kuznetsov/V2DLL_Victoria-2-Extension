// FUN_0078b2e0 @ 0078b2e0 body=[[0078b2e0, 0078b37f]]


void FUN_0078b2e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(unaff_EDI + 0x70);
  iVar2 = *(int *)(unaff_EDI + 0x6c);
  local_c = FUN_0078b1f0(unaff_EDI);
  local_c = (iVar1 - iVar2) / 0x28 - local_c;
  if (local_c < 1) {
    if (*(char *)((int)*(int **)(unaff_EDI + 0x2c) + 0x4f) == '\0') {
      return;
    }
    (**(code **)(**(int **)(unaff_EDI + 0x2c) + 0x38))();
    local_8 = 1000;
    local_c = 0;
    local_10 = 0;
    puVar3 = &local_8;
  }
  else {
    if (*(char *)((int)*(int **)(unaff_EDI + 0x2c) + 0x4f) != '\0') {
      return;
    }
    (**(code **)(**(int **)(unaff_EDI + 0x2c) + 0x34))();
    local_c = local_c * 1000;
    local_10 = 1000;
    local_8 = 0;
    puVar3 = &local_10;
  }
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x2c) + 0x54);
  FUN_0043d130(puVar3);
  (**(code **)(iVar1 + 0x14))();
  return;
}

