// FUN_00a70db0 @ 00a70db0 body=[[00a70db0, 00a70e3b] [00a70e3f, 00a70e6d]]


void FUN_00a70db0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b482b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e42e70;
  in_ECX[0x15] = &PTR_LAB_00e42f98;
  local_8 = 1;
  if (0 < (int)(in_ECX[0x59] - in_ECX[0x58] & 0xfffffffc)) {
    iVar1 = 0;
    do {
      FUN_009963d0(*(undefined4 *)(in_ECX[0x58] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(in_ECX[0x59] - in_ECX[0x58]) >> 2);
  }
  if (in_ECX[0x58] == 0) {
    in_ECX[0x58] = 0;
    in_ECX[0x59] = 0;
    in_ECX[0x5a] = 0;
    local_8 = 0xffffffff;
    FUN_009ef7a0(in_ECX);
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x58]);
}

