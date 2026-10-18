// FUN_009bc360 @ 009bc360 body=[[009bc360, 009bc3c9]]


void FUN_009bc360(void)

{
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e1d0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e3a2c8;
  local_8 = 1;
  FUN_009bc400(in_ECX);
  _free((void *)in_ECX[0x1adb8]);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00462440(*(undefined4 *)in_ECX[0x1adb2],(undefined4 *)in_ECX[0x1adb2]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x1adb2]);
}

