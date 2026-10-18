// FUN_00734c80 @ 00734c80 body=[[00734c80, 00734d31]]


void FUN_00734c80(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(unaff_EDI + 0xec);
  iVar2 = *(int *)(unaff_EDI + 0xe8);
  local_c = FUN_00735be0(unaff_EDI);
  local_c = (iVar1 - iVar2) / 0x18 - local_c;
  if (local_c < 1) {
    if (*(char *)((int)*(int **)(unaff_EDI + 0x108) + 0x4f) != '\0') {
      (**(code **)(**(int **)(unaff_EDI + 0x108) + 0x38))();
    }
    local_8 = 1000;
    local_c = 0;
    local_10 = 0;
    puVar3 = &local_8;
  }
  else {
    if (*(char *)((int)*(int **)(unaff_EDI + 0x108) + 0x4f) == '\0') {
      (**(code **)(**(int **)(unaff_EDI + 0x108) + 0x34))();
    }
    local_c = local_c * 1000;
    local_10 = 1000;
    local_8 = 0;
    puVar3 = &local_10;
  }
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x108) + 0x54);
  FUN_0043d130(puVar3);
  (**(code **)(iVar1 + 0x14))();
  return;
}

