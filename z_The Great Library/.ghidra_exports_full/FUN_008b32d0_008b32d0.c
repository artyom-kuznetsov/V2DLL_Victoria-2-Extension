// FUN_008b32d0 @ 008b32d0 body=[[008b32d0, 008b3333] [008b3337, 008b3352]]


void FUN_008b32d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a9fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTrigger::vftable;
  iVar2 = 0;
  local_8 = 0;
  iVar3 = (int)(in_ECX[3] - in_ECX[2]) >> 2;
  if (0 < iVar3) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (in_ECX[2] == 0) {
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[2]);
}

