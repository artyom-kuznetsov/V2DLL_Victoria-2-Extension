// FUN_00b1a020 @ 00b1a020 body=[[00b1a020, 00b1a067]]


undefined4 FUN_00b1a020(void)

{
  long _Offset;
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[4] == 0) {
    return 0;
  }
  _Offset = (**(code **)(*in_ECX + 0x74))();
  _fseek((FILE *)in_ECX[4],0,2);
  uVar1 = (**(code **)(*in_ECX + 0x74))();
  _fseek((FILE *)in_ECX[4],_Offset,0);
  return uVar1;
}

