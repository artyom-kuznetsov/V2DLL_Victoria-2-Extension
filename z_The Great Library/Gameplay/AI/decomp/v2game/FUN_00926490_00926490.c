// FUN_00926490 @ 00926490 body=[[00926490, 00926531]]


undefined4 FUN_00926490(char param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00511140();
  if (((cVar1 != '\0') && (iVar2 = FUN_00926900(), iVar2 != 0)) &&
     (cVar1 = FUN_00539320(), cVar1 == '\0')) {
    if (param_1 == '\0') {
      FUN_0048b5d0(0x3f50624dd2f1a9fc);
      cVar1 = FUN_0043a720();
      if (cVar1 != '\0') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

