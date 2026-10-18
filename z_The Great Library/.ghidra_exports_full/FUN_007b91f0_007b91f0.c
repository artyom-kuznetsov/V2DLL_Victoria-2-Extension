// FUN_007b91f0 @ 007b91f0 body=[[007b91f0, 007b9245]]


void FUN_007b91f0(void)

{
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c8ef;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = CMicroDownloader::vftable;
  local_8 = 3;
  if (in_ECX[0x41] == 0) {
    (*(code *)in_ECX[0x3d])(in_ECX[0x3f]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x3f]);
}

