// FUN_007bdce0 @ 007bdce0 body=[[007bdce0, 007bdd85]]


void FUN_007bdce0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x30) != 0) {
    ExceptionList = &local_14;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x24))();
    if ((cVar1 != '\0') && (0 < *(int *)(*(int *)(in_ECX + 0x30) + 0x84))) {
      cVar1 = FUN_004d1e40();
      if (cVar1 != '\0') {
        iVar2 = FUN_00aae9af(0x70);
        uStack_c = 0;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_007bd280(iVar2,*(undefined4 *)(DAT_012588e8 + 0xb24),in_ECX);
        }
        uStack_c = 0xffffffff;
        FUN_006480e0(uVar3);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

