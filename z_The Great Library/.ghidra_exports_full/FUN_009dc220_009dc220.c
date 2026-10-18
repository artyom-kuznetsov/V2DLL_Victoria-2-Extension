// FUN_009dc220 @ 009dc220 body=[[009dc220, 009dc257]]


undefined4 FUN_009dc220(undefined4 *param_1)

{
  size_t _Count;
  int *in_ECX;
  
  _Count = (**(code **)(*in_ECX + 0x38))();
  FUN_009d7300();
  if (_Count != 0) {
    _fread((void *)*param_1,1,_Count,(FILE *)in_ECX[0xd]);
  }
  return 1;
}

