// FUN_008ae2f0 @ 008ae2f0 body=[[008ae2f0, 008ae353] [008ae357, 008ae372]]


void FUN_008ae2f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3aa1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CMeanTimeToHappen::vftable;
  iVar2 = 0;
  local_8 = 0;
  iVar3 = (int)(in_ECX[4] - in_ECX[3]) >> 2;
  if (0 < iVar3) {
    do {
      puVar1 = *(undefined4 **)(in_ECX[3] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (in_ECX[3] == 0) {
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    in_ECX[5] = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[3]);
}

