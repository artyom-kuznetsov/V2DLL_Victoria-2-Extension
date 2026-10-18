// FUN_005b5da0 @ 005b5da0 body=[[005b5da0, 005b5e29] [005b5e30, 005b5e48] [005b5e52, 005b5e6b]]


void FUN_005b5da0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3a46b;
  ExceptionList = &local_10;
  *in_ECX = CCombatList::vftable;
  local_8 = 0;
  if (*(char *)(in_ECX + 5) != '\0') {
    iVar1 = in_ECX[3];
    while (iVar1 != 0) {
      piVar2 = *(int **)in_ECX[1];
      (**(code **)(*piVar2 + 0x38))();
      (**(code **)*piVar2)(1);
      iVar1 = in_ECX[1];
      if (iVar1 != 0) {
        if (*(char *)(in_ECX + 4) == '\0') {
          iVar3 = *(int *)(iVar1 + 4);
          iVar4 = *(int *)(iVar1 + 8);
          if (iVar3 != 0) {
            *(int *)(iVar3 + 8) = iVar4;
          }
          if (iVar4 != 0) {
            *(int *)(iVar4 + 4) = iVar3;
          }
          if (iVar1 == in_ECX[1]) {
            in_ECX[1] = iVar4;
          }
          if (iVar1 == in_ECX[2]) {
            in_ECX[2] = iVar3;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar1);
        }
        *(undefined1 *)(iVar1 + 0xc) = 1;
      }
      iVar1 = in_ECX[3];
    }
  }
  if (in_ECX[1] == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[1]);
}

