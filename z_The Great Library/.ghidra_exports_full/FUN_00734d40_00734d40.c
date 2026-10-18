// FUN_00734d40 @ 00734d40 body=[[00734d40, 00734df1]]


void FUN_00734d40(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(unaff_EDI + 0xfc);
  iVar2 = *(int *)(unaff_EDI + 0xf8);
  local_c = FUN_00735cd0(unaff_EDI);
  local_c = (iVar1 - iVar2) / 0x28 - local_c;
  if (local_c < 1) {
    if (*(char *)((int)*(int **)(unaff_EDI + 0x10c) + 0x4f) != '\0') {
      (**(code **)(**(int **)(unaff_EDI + 0x10c) + 0x38))();
    }
    local_8 = 1000;
    local_c = 0;
    local_10 = 0;
    puVar3 = &local_8;
  }
  else {
    if (*(char *)((int)*(int **)(unaff_EDI + 0x10c) + 0x4f) == '\0') {
      (**(code **)(**(int **)(unaff_EDI + 0x10c) + 0x34))();
    }
    local_c = local_c * 1000;
    local_10 = 1000;
    local_8 = 0;
    puVar3 = &local_10;
  }
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x10c) + 0x54);
  FUN_0043d130(puVar3);
  (**(code **)(iVar1 + 0x14))();
  return;
}

