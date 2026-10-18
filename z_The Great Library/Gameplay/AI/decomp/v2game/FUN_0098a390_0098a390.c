// FUN_0098a390 @ 0098a390 body=[[0098a390, 0098a447]]


void FUN_0098a390(int *param_1,int param_2)

{
  uint uVar1;
  size_t _Size;
  char cVar2;
  int *in_EAX;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_EAX[5];
    piVar3 = in_EAX;
    if (7 < uVar1) {
      piVar3 = (int *)*in_EAX;
    }
    if (piVar3 <= param_1) {
      piVar3 = in_EAX;
      if (7 < uVar1) {
        piVar3 = (int *)*in_EAX;
      }
      if (param_1 < (int *)((int)piVar3 + in_EAX[4] * 2)) {
        if (uVar1 < 8) {
          FUN_0098a2e0(in_EAX,(int)param_1 - (int)in_EAX >> 1);
          return;
        }
        FUN_0098a2e0(in_EAX,(int)param_1 - *in_EAX >> 1);
        return;
      }
    }
  }
  cVar2 = FUN_0098a540();
  if (cVar2 != '\0') {
    piVar3 = in_EAX;
    if (7 < (uint)in_EAX[5]) {
      piVar3 = (int *)*in_EAX;
    }
    _Size = param_2 * 2;
    FID_conflict__memcpy(piVar3,param_1,_Size);
    in_EAX[4] = param_2;
    if (7 < (uint)in_EAX[5]) {
      *(undefined2 *)(_Size + *in_EAX) = 0;
      return;
    }
    *(undefined2 *)(_Size + (int)in_EAX) = 0;
  }
  return;
}

