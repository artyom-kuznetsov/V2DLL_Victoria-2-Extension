// FUN_006ae4b0 @ 006ae4b0 body=[[006ae4b0, 006ae53f]]


void FUN_006ae4b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_20 [8];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x48);
  local_c = 0;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x54) + 0x58))(local_20);
    uVar3 = FUN_005803e0(iVar1,*puVar2,puVar2[1],1);
  }
  local_c = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = pvStack_18;
  return;
}

