// FUN_00549980 @ 00549980 body=[[00549980, 005499b6]]


void FUN_00549980(undefined4 *param_1)

{
  void *_Dst;
  
  _Dst = (void *)*param_1;
  if (_Dst != (void *)param_1[1]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[1],0);
    param_1[1] = _Dst;
  }
  return;
}

