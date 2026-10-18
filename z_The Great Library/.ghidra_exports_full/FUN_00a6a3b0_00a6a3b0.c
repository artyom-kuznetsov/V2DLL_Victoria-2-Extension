// FUN_00a6a3b0 @ 00a6a3b0 body=[[00a6a3b0, 00a6a423]]


undefined4 FUN_00a6a3b0(int *param_1)

{
  int *_Dst;
  
  _Dst = DAT_013f05b8;
  if (DAT_013f05b8 != DAT_013f05bc) {
    do {
      if (*_Dst == *param_1) break;
      _Dst = _Dst + 1;
    } while (_Dst != DAT_013f05bc);
  }
  if (((((int)DAT_013f05bc - (int)DAT_013f05b8 & 0xfffffffcU) != 0) && (DAT_013f05b8 <= _Dst)) &&
     (_Dst < DAT_013f05bc)) {
    if (_Dst != DAT_013f05bc + -1) {
      FID_conflict__memcpy(_Dst,_Dst + 1,((int)DAT_013f05bc - (int)(_Dst + 1) >> 2) * 4);
    }
    FUN_00a6b450();
    return 1;
  }
  return 0;
}

