// FUN_009d5e10 @ 009d5e10 body=[[009d5e10, 009d5ed6] [009d5eda, 009d5f0b]]


void FUN_009d5e10(int *param_1)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  int *in_EAX;
  void *pvVar3;
  uint uVar4;
  void *_Src;
  size_t _Size;
  
  if (in_EAX != param_1) {
    pvVar3 = (void *)*param_1;
    uVar4 = param_1[1] - (int)pvVar3;
    if ((void *)param_1[1] == pvVar3) {
      pvVar3 = (void *)*in_EAX;
      if (pvVar3 != (void *)in_EAX[1]) {
        FID_conflict__memcpy(pvVar3,(void *)in_EAX[1],0);
        in_EAX[1] = (int)pvVar3;
        return;
      }
    }
    else {
      _Dst = (void *)*in_EAX;
      if (uVar4 <= (uint)(in_EAX[1] - (int)_Dst)) {
        FID_conflict__memcpy(_Dst,pvVar3,param_1[1] - (int)pvVar3);
        in_EAX[1] = (param_1[1] - *param_1) + *in_EAX;
        return;
      }
      if (uVar4 <= (uint)(in_EAX[2] - (int)_Dst)) {
        _Src = (void *)((in_EAX[1] - (int)_Dst) + (int)pvVar3);
        FID_conflict__memcpy(_Dst,pvVar3,(int)_Src - (int)pvVar3);
        iVar1 = param_1[1];
        pvVar3 = FID_conflict__memcpy((void *)in_EAX[1],_Src,iVar1 - (int)_Src);
        in_EAX[1] = (int)pvVar3 + (iVar1 - (int)_Src);
        return;
      }
      if (_Dst != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(_Dst);
      }
      cVar2 = FUN_009d6830();
      if (cVar2 != '\0') {
        _Size = param_1[1] - *param_1;
        pvVar3 = FID_conflict__memcpy((void *)*in_EAX,(void *)*param_1,_Size);
        in_EAX[1] = (int)pvVar3 + _Size;
      }
    }
  }
  return;
}

