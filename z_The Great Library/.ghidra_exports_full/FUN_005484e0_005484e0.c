// FUN_005484e0 @ 005484e0 body=[[005484e0, 00548584]]


uint FUN_005484e0(undefined4 *param_1,char *param_2,uint param_3)

{
  void *_Buf;
  uint in_EAX;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  size_t _MaxCount;
  
  if ((param_3 != 0) || ((uint)param_1[4] < in_EAX)) {
    if ((in_EAX < (uint)param_1[4]) && (uVar4 = param_1[4] - in_EAX, param_3 <= uVar4)) {
      _MaxCount = uVar4 + (1 - param_3);
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      _Buf = (void *)((int)puVar3 + in_EAX);
      pvVar1 = _memchr(_Buf,(int)*param_2,_MaxCount);
      while (pvVar1 != (void *)0x0) {
        iVar2 = FUN_00414bd0(param_3);
        if (iVar2 == 0) {
          if (0xf < (uint)param_1[5]) {
            param_1 = (undefined4 *)*param_1;
          }
          return (int)pvVar1 - (int)param_1;
        }
        _MaxCount = (int)_Buf + ((_MaxCount - 1) - (int)pvVar1);
        _Buf = (void *)((int)pvVar1 + 1);
        pvVar1 = _memchr(_Buf,(int)*param_2,_MaxCount);
      }
    }
    in_EAX = 0xffffffff;
  }
  return in_EAX;
}

