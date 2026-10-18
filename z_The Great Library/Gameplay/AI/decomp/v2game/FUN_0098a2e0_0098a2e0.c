// FUN_0098a2e0 @ 0098a2e0 body=[[0098a2e0, 0098a386]]


void FUN_0098a2e0(int *param_1,uint param_2)

{
  size_t _Size;
  char cVar1;
  uint in_EAX;
  int *piVar2;
  int *extraout_ECX;
  uint uVar3;
  int *unaff_EDI;
  
  uVar3 = param_1[4];
  piVar2 = param_1;
  if (uVar3 < param_2) {
    in_EAX = FUN_00aad3fa("invalid string position");
    piVar2 = extraout_ECX;
  }
  uVar3 = uVar3 - param_2;
  if (in_EAX < uVar3) {
    uVar3 = in_EAX;
  }
  if (unaff_EDI != piVar2) {
    cVar1 = FUN_0098a540();
    if (cVar1 != '\0') {
      if (7 < (uint)param_1[5]) {
        param_1 = (int *)*param_1;
      }
      piVar2 = unaff_EDI;
      if (7 < (uint)unaff_EDI[5]) {
        piVar2 = (int *)*unaff_EDI;
      }
      _Size = uVar3 * 2;
      FID_conflict__memcpy(piVar2,(void *)((int)param_1 + param_2 * 2),_Size);
      unaff_EDI[4] = uVar3;
      if (7 < (uint)unaff_EDI[5]) {
        *(undefined2 *)(_Size + *unaff_EDI) = 0;
        return;
      }
      *(undefined2 *)(_Size + (int)unaff_EDI) = 0;
    }
    return;
  }
  FUN_0098a4c0();
  FUN_0098a4c0();
  return;
}

