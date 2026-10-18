// FUN_0045e720 @ 0045e720 body=[[0045e720, 0045e8c5]]


void FUN_0045e720(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x9bc) {
    if (param_2 == 0x9bb) {
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af();
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0045e8d0();
      }
      (**(code **)(*piVar3 + 0xc))();
      FUN_0068f390();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x1a) {
      ExceptionList = &local_10;
      FUN_009a1750();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2e) {
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750();
      FUN_00401320();
      uVar1 = FUN_00457690();
      *(undefined4 *)(in_ECX + 0x40) = uVar1;
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0xd9) {
      ExceptionList = &local_10;
      FUN_009a1750();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (param_2 == 0x9bc) {
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af();
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0045dbc0();
      }
      (**(code **)(*piVar3 + 0xc))();
    }
    else {
      if (param_2 != 0x9bd) {
        return;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_00aae9af();
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_0045dbc0();
      }
      (**(code **)(*piVar3 + 0xc))();
    }
    FUN_0068f390();
  }
  ExceptionList = local_10;
  return;
}

