// FUN_00b14e30 @ 00b14e30 body=[[00b14e30, 00b14f19]]


undefined4 * FUN_00b14e30(undefined4 *param_1)

{
  char *_Src;
  char cVar1;
  size_t _Size;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  void *_Dst;
  int *in_ECX;
  uint uVar5;
  
  iVar4 = *in_ECX;
  if (iVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  uVar5 = in_ECX[1] - 1;
  uVar2 = uVar5;
  if (-1 < (int)uVar5) {
    while (*(char *)(iVar4 + uVar2) != '.') {
      uVar2 = uVar2 - 1;
      if ((int)uVar2 < 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return param_1;
      }
    }
    if (uVar2 != 0xffffffff) {
      for (; -1 < (int)uVar5; uVar5 = uVar5 - 1) {
        if ((*(char *)(iVar4 + uVar5) == '/') || (*(char *)(iVar4 + uVar5) == '\\')) {
          if ((uVar5 != 0xffffffff) && (uVar2 < uVar5)) goto LAB_00b14ea5;
          break;
        }
      }
      if (uVar2 != in_ECX[1] - 1U) {
        _Src = (char *)(iVar4 + 1 + uVar2);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        if (_Src != (char *)0x0) {
          pcVar3 = _Src;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar4 = (int)pcVar3 - (int)(_Src + 1);
          param_1[1] = iVar4;
          param_1[2] = iVar4;
          _Dst = (void *)(*(code *)PTR_FUN_00f01b08)(iVar4 + 1,2,4,1,0,0xffffffff);
          *param_1 = _Dst;
          if (_Dst != (void *)0x0) {
            _Size = param_1[1];
            *(undefined1 *)((int)_Dst + iVar4) = 0;
            FID_conflict__memcpy(_Dst,_Src,_Size);
          }
        }
        return param_1;
      }
    }
  }
LAB_00b14ea5:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

