// FUN_009beeb0 @ 009beeb0 body=[[009beeb0, 009bef9f] [009befa3, 009befcc]]


void FUN_009beeb0(int *param_1)

{
  size_t _Size;
  void *pvVar1;
  char cVar2;
  int *in_EAX;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (in_EAX != param_1) {
    pvVar3 = (void *)*param_1;
    uVar5 = param_1[1] - (int)pvVar3 >> 2;
    pvVar1 = (void *)*in_EAX;
    if (uVar5 == 0) {
      if (pvVar1 != (void *)in_EAX[1]) {
        FID_conflict__memcpy(pvVar1,(void *)in_EAX[1],0);
        in_EAX[1] = (int)pvVar1;
        return;
      }
    }
    else {
      uVar6 = in_EAX[1] - (int)pvVar1 >> 2;
      if (uVar5 <= uVar6) {
        FID_conflict__memcpy(pvVar1,pvVar3,(param_1[1] - (int)pvVar3 >> 2) * 4);
        in_EAX[1] = *in_EAX + (param_1[1] - *param_1 >> 2) * 4;
        return;
      }
      if (uVar5 <= (uint)(in_EAX[2] - (int)pvVar1 >> 2)) {
        pvVar1 = (void *)((int)pvVar3 + uVar6 * 4);
        FID_conflict__memcpy((void *)*in_EAX,pvVar3,((int)pvVar1 - (int)pvVar3 >> 2) * 4);
        _Size = (param_1[1] - (int)pvVar1 >> 2) * 4;
        pvVar3 = FID_conflict__memcpy((void *)in_EAX[1],pvVar1,_Size);
        in_EAX[1] = (int)((int)pvVar3 + _Size);
        return;
      }
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pvVar1);
      }
      cVar2 = FUN_0054abf0();
      if (cVar2 != '\0') {
        iVar4 = FUN_008af950(*in_EAX);
        in_EAX[1] = iVar4;
      }
    }
  }
  return;
}

