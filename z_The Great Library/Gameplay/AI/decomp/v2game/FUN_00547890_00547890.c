// FUN_00547890 @ 00547890 body=[[00547890, 00547909]]


void FUN_00547890(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3feb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  if ((in_ECX[0x15] != 0) && (*(undefined4 **)in_ECX[4] == in_ECX + 0x12)) {
    uVar1 = in_ECX[0x10];
    *(undefined4 *)in_ECX[4] = in_ECX[0xf];
    *(undefined4 *)in_ECX[8] = uVar1;
    *(undefined4 *)in_ECX[0xc] = 0;
  }
  if (*(char *)(in_ECX + 0x14) != '\0') {
    FUN_00548c20();
  }
  local_8 = 0xffffffff;
  FUN_00547420();
  ExceptionList = local_10;
  return;
}

