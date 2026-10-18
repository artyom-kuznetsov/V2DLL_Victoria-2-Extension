// FUN_0093c890 @ 0093c890 body=[[0093c890, 0093c8b9] [0093c8c0, 0093c978]]


void FUN_0093c890(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *_Dst;
  int unaff_ESI;
  bool bVar4;
  int local_c;
  
  local_c = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xf0) - *(int *)(unaff_ESI + 0xec) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(unaff_ESI + 0xec);
      iVar2 = piVar1[local_c];
      if ((*(int *)(iVar2 + 0x14) == *(int *)(param_1 + 4)) ||
         (*(int *)(iVar2 + 0x54) == *(int *)(param_1 + 4))) {
        piVar3 = *(int **)(unaff_ESI + 0xf0);
        for (_Dst = piVar1; (_Dst != piVar3 && (*_Dst != iVar2)); _Dst = _Dst + 1) {
        }
        if (((((int)piVar3 - (int)piVar1 & 0xfffffffcU) != 0) && (piVar1 <= _Dst)) &&
           (_Dst < piVar3)) {
          if (_Dst == piVar3 + -1) {
            bVar4 = piVar1 == piVar3;
          }
          else {
            FID_conflict__memcpy(_Dst,_Dst + 1,((int)piVar3 - (int)(_Dst + 1) >> 2) * 4);
            piVar3 = *(int **)(unaff_ESI + 0xf0);
            if (((int)piVar3 - (int)*(int **)(unaff_ESI + 0xec) & 0xfffffffcU) == 0)
            goto LAB_0093c94d;
            bVar4 = *(int **)(unaff_ESI + 0xec) == piVar3;
          }
          if (!bVar4) {
            *(int **)(unaff_ESI + 0xf0) = piVar3 + -1;
          }
        }
LAB_0093c94d:
        local_c = local_c + -1;
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(unaff_ESI + 0xf0) - *(int *)(unaff_ESI + 0xec) >> 2);
  }
  return;
}

